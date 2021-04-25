//Copyright Zachary Kolansky, 2020


#include "MazeDungeonBuilder.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Kismet/KismetMathLibrary.h"
#include "DungeonDataSingleton.h"
#include "DungeonLevelScriptActor.h"

// Sets default values
AMazeDungeonBuilder::AMazeDungeonBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//OnMazeGenerationStart.AddUniqueDynamic(this,&AMazeDungeonBuilder::AddMazeToWorld);

	MazeRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = MazeRootComponent;

	FloorMeshes = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("FloorMeshes"));
	ClosedWallMeshes = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("ClosedWallMeshes"));
	OpenWallMeshes = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("OpenWallMeshes"));


	FloorMeshes->bAutoRebuildTreeOnInstanceChanges = false;
	ClosedWallMeshes->bAutoRebuildTreeOnInstanceChanges = false;
	OpenWallMeshes->bAutoRebuildTreeOnInstanceChanges = false;

	ClearMazeDungeon();

	
	RoomLevelInstancesToScale.Empty();
	MazeRoomData.Empty();
	StairLevelStreamTiles.Empty();

}

// Called when the game starts or when spawned
void AMazeDungeonBuilder::BeginPlay()
{
	Super::BeginPlay();
	MazeCellsAdjacentToRooms = 0;
	DungeonFilledPercentage = 0;
	MazeCellsDedicatedToRooms = 0;

	
}


void AMazeDungeonBuilder::EndPlay(const EEndPlayReason::Type EndPlayReason) 
{
	TArray<FName> DoorKey = {};
	DoorMap.GenerateKeyArray(DoorKey);

	for (FName Name : DoorKey)
	{
		AActor* Door = DoorMap[Name];
		if(Door)
		{
			Door->Destroy();
		}

	}
	
	for (ULevelStreamingDynamic* Room : RoomLevelInstancesToScale)
	{
		if(Room)
		{
			Room->SetShouldBeLoaded(false);
		}
	}

	TArray<FName> RoomActorKey = {};
	RoomActors.GenerateKeyArray(RoomActorKey);
	for (FName Name : RoomActorKey)
	{
		AActor* R = RoomActors[Name];
		if(R)
		{
			R->Destroy();
		}
	}
	RoomActors.Empty(0);

	RoomScales.Empty();
	RoomLevelInstancesToScale.Empty();


	RoomMap.Empty(0);
	DoorMap.Empty(0);
	MazeRoomData.Empty();
	StairLevelStreamTiles.Empty();



	Super::EndPlay(EndPlayReason);
}

void AMazeDungeonBuilder::OnConstruction(const FTransform & Transform)
{
	


	MazeRoomData.Empty();
	StairLevelStreamTiles.Empty();

	TArray<FName> DoorKey = {};
	DoorMap.GenerateKeyArray(DoorKey);
	StairLevel.ForceRoomLocations.Empty();


	for (FName Name : DoorKey)
	{
		AActor* Door = DoorMap[Name];
		if(Door)
		{
			Door->Destroy();
		}

	}
		
	for (ULevelStreamingDynamic* Room : RoomLevelInstancesToScale)
	{
		if(Room)
		{
			Room->SetShouldBeLoaded(false);
		}
	}


	TArray<FName> RoomActorKey = {};
	RoomActors.GenerateKeyArray(RoomActorKey);
	for (FName Name : RoomActorKey)
	{
		AActor* R = RoomActors[Name];
		if(R)
		{
			R->Destroy();
		}
	}
	RoomActors.Empty(0);



	RoomScales.Empty();
	RoomLevelInstancesToScale.Empty();
	

	if(bUseOnConstructorToGenerateMazeDungeon)
	{	

		ReadDataTable();
		LoadMazeRoomLevels();
		GenerateMazeDungeon();
	
	
	}
	else
	{
		OnAsyncLoadMazeRoomDataFinished.RemoveDynamic(this,&AMazeDungeonBuilder::GenerateMazeDungeon); 
	}

	Super::OnConstruction(Transform);
}


// Called every frame
void AMazeDungeonBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AMazeDungeonBuilder::InitializeDungeonGeneration()
{


	InitialGenerationLocation = this->GetActorLocation();
    InitialGenerationRotation = FRotator();//this->GetActorRotation();

	
	if(bGenerateNewRandomSeeds)
	{
		GlobalRandomStream.GenerateNewSeed();
		GlobalRandomSeed = FName(*FString::FromInt(GlobalRandomStream.GetInitialSeed()));
	
	}
	else
	{
		GlobalRandomStream.Initialize(GlobalRandomSeed);
	}
	

	//Protect against bad parameters

	if(DungeonRows < 2)
	{
		DungeonRows = 2;
	}

	if(DungeonColumns < 2)
	{
		DungeonColumns = 2;
	}

	if(DungeonFloors < 0)
	{
		DungeonFloors = 1;
	}


	if(DungeonFloorZBuffer < 0.0f)
	{
		DungeonFloorZBuffer = 0;
	}

	if(DungeonTileSize.X <= 0 || DungeonTileSize.Y <= 0 || DungeonTileSize.Z <= 0)
	{
		DungeonTileSize = FVector(400.0f,400.0f,400.0f);
	}

	if(FloorMeshSize.X <= 0 || FloorMeshSize.Y <= 0 || FloorMeshSize.Z <= 0)
	{
		FloorMeshSize = FVector(400.0f,400.0f,20.0f);
	}

	if(WallMeshSize.X <= 0 || WallMeshSize.Y <= 0 || WallMeshSize.Z <= 0)
	{
		WallMeshSize = FVector(400.0f,20.0f,40.0f);
	}




	bool bInvalidHierarchicalMesh = false;

	if(!FloorMeshes->GetStaticMesh())
	{
		UE_LOG(LogTemp, Error, TEXT("FloorMeshes needs a mesh"))
		bInvalidHierarchicalMesh = true;
	}

	if(!ClosedWallMeshes->GetStaticMesh())
	{
		UE_LOG(LogTemp, Error, TEXT("ClosedWallMeshes needs a mesh"))
		bInvalidHierarchicalMesh = true;
	}
	
	if(!OpenWallMeshes->GetStaticMesh())
	{
		UE_LOG(LogTemp, Error, TEXT("OpenWallMeshes needs a mesh"))
		bInvalidHierarchicalMesh = true;
	}

	if(	bInvalidHierarchicalMesh)
	{
		return false;
	}
	
	
	return true;
	
}

void AMazeDungeonBuilder::AddMazeFloorToWorld(const FMazeDungeonFloor& MazeFloor,bool bSpawnDoors)
{
	
	
	for (int32 x = 0; x < MazeFloor.Maze.Rows; x++)
	{
		for (int32 y = 0; y < MazeFloor.Maze.Columns; y++ )
		{
			AddMazeCellToWorld(MazeFloor.Maze.Grid[x][y],MazeFloor.FloorNumber,bSpawnDoors);
		}
	}
	
	/*
	UpdateComponentTransforms(); //Fixes nav mesh generation issues efficiently
	FloorMeshes->BuildTreeIfOutdated(true,true); //force update
	ClosedWallMeshes->BuildTreeIfOutdated(true,true);
	OpenWallMeshes->BuildTreeIfOutdated(true,true);
	OnAllMazeCellsFinished.Broadcast();
	*/
	
}

void AMazeDungeonBuilder::AddMazeCellToWorld(const FMazeCell& InputCell,int32 ZLevel,bool bSpawnDoors )
{
	FVector StartPoint = CalculateCellStartPoint(InputCell,ZLevel);

	bool bIsRoomOrPassage = (InputCell.RoomStatus ==  ECellRoomStatus::PartOfRoom || InputCell.RoomStatus == ECellRoomStatus::FloorPassage);

	if(!bIsRoomOrPassage)
	{
		FloorMeshes->AddInstanceWorldSpace(FTransform(FRotator(0.0f,0.0f,0.0f),StartPoint,FloorMeshScale ) ) ;
	}

	


	TArray<int32> WallsToDraw = {2,3}; 


	//Don't need to draw the wall of each cell, because adjacent cells will have overlaping wall instances
	//Instead, we can draw just the Left and back cells (numbered and 3,2 respectively), and draw all the cells for the front and right edges
	//Walls of Room cells will be added
	//bIsRoom = true will be a special case.
	if(InputCell.Row == DungeonRows-1 || InputCell.Column == DungeonColumns-1 || InputCell.RoomStatus == ECellRoomStatus::AdjacentToRoom || bIsRoomOrPassage)
	{
		WallsToDraw = {0,1,2,3};
	}


	for (int32 i : WallsToDraw)
	{
		EWallStatus WS = InputCell.WallMap[i];

		if(bIsRoomOrPassage)	
		{
			if(!IsWallDungeonEdge(i,InputCell) && bPreventRoomsFromSlicingOpenEdgesOfMaze)
			{
				continue; //For all rooms, we only want to draw walls that are part of the edge of the Dungeon. Walls that are Doors will be conisdered and dealt with
			}
		}

		if(WS == EWallStatus::NOWALL)
		{
			continue;
		}
		UHierarchicalInstancedStaticMeshComponent* ProperWall = nullptr;
		switch(WS) //Get the right wall to add an instance 2
		{
			case EWallStatus::ClosedWall:
				ProperWall = ClosedWallMeshes;
				break;
			case EWallStatus::OpenWall:
				if(bUseOpenWallMeshForOpenWalls)
				{
					ProperWall = OpenWallMeshes;
				}
				break;
			default:
				ProperWall = nullptr;
		}
		
		FVector WallOffset = FVector(0.0f,0.0f,0.0f);
		FRotator WallRotation = FRotator(0.0f,0.0f,0.0f);
		//Pivot of floor is lower left, from looking down from above
		float CenterFactor = 0.0f; //WallMeshSize.Y/2.0f; //Center the wall
		switch(i)
		{
			case 0:
				WallRotation = FRotator(0.0f,90.0f,0.0f);
				WallOffset = FVector(DungeonTileSize.X-CenterFactor,0.0f,0.0f);
				break;
			case 1:
				WallOffset = FVector(0.0f,DungeonTileSize.Y-CenterFactor,0.0f);
				break;
			case 2:
				WallRotation = FRotator(0.0f,90.0f,0.0f);
				WallOffset = FVector(CenterFactor,0.0f,0.0f);
				break;
			case 3:
				WallOffset = FVector(0.0f,CenterFactor,0.0f);
				break;
		}


		if(ProperWall)
		{
			ProperWall->AddInstanceWorldSpace(FTransform(WallRotation,StartPoint+WallOffset,WallMeshScale ) ) ;
		}
	

		if(bSpawnDoors && WS == EWallStatus::DungeonDoor)
		{
			if(!DoorClass)
			{
				continue;
			}
			float DoorOffset = DoorScale.Y*DoorMeshSize.Y/2;
			FVector DoorPosOffset; //Assume door pivot is in the middle of the mesh
			FRotator DoorRotation = FRotator(0.0f,0.0f,0.0f);
			bool bCanDraw = true; //Useful for debugging
			switch(i)
			{
				case 0:
					DoorPosOffset= FVector(DungeonTileSize.X,DoorOffset,0.0f);
					DoorRotation = FRotator(0.0f,0.0f,0.0f);
					break;
				case 1: //GOOD
					DoorPosOffset=FVector(DoorOffset,DungeonTileSize.Y,0.0f); //was x2
					DoorRotation = FRotator(0.0f,90.0f,0.0f);
					break;
				case 2: //GOOD
					DoorPosOffset=FVector(0.0f,DoorOffset,0.0f);
					DoorRotation = FRotator(0.0f,00.0f,0.0f);
					break;
				case 3: //GOOD
					DoorPosOffset=FVector(DoorOffset,0.0f,0.0f);
					DoorRotation = FRotator(0.0f,90.0f,0.0f);
		
					break;

			}
			if(bCanDraw)
			{
				AActor* Door = GetWorld()->SpawnActor<AActor>(DoorClass,StartPoint+DoorPosOffset,DoorRotation);

				if(Door)
				{
					Door->SetActorScale3D(DoorScale);
					NumberOfDoors++;
					FString NameBase = "d";
					if(IsWallDungeonEdge(i,InputCell))
					{
						NameBase = "a";
					}

					FString NameString = FString(*NameBase);
               	 	NameString.AppendInt(NumberOfDoors);
                	FName FinalName = FName(*NameString);
					Door->Tags.Add(FinalName);
					DoorMap.Add(FinalName,Door);
				}
			}
		}
	}

	



	




}

void AMazeDungeonBuilder::BuildMaze(bool bOnlySpawnGrid)
{
	//Previously X and Y coordinates of the last floor connection
	int32 PrevX = -1;
	int32 PrevY = -1;

	for (int32 f = 0; f < DungeonFloors; f++)
	{
		FMazeDungeonFloor NewFloor;

		if(bGenerateNewRandomSeeds)
		{
			NewFloor = FMazeDungeonFloor(DungeonRows,DungeonColumns,f);
		}
		else
		{
			
			if(f >= 0 && f < SeedList.Num() )
			{
				NewFloor = FMazeDungeonFloor(DungeonRows,DungeonColumns,f,SeedList[f]);
			}
			else
			{
				NewFloor = FMazeDungeonFloor(DungeonRows,DungeonColumns,f); //Generate a new seed anyway
			}
			
		}
		

		if(!bOnlySpawnGrid)
		{
			NewFloor.Generate();
		}
		
		NewFloor.MazeOpenness = DungeonOpenness;
		NewFloor.OpenMazeFloor();
		MazeDungeonMap.Add(f,NewFloor);

		if(f > 0) //Carve connections between floors.
		{
			//Pick X and Y, carve down.
			int32 x = -1;
			int32 y = -1;
			
			for (int32 i = 0; i < NumberOfFloorPassagesPerFloor; i++)
			{
				if(bAttemptToPlaceHolesToNextFloorOnEdge)
				{
					bool bAlignToCol = ((bool)GlobalRandomStream.RandRange(0,1));

					if(bAlignToCol)
					{
						int32 r = GlobalRandomStream.RandRange(0,1);
						x = r*(DungeonRows-1); //Either zero 
						y = GlobalRandomStream.RandRange(0,DungeonColumns-1);
					}
					else
					{
						int32 r = GlobalRandomStream.RandRange(0,1);
						y = r*(DungeonColumns-1); //
						x = GlobalRandomStream.RandRange(0,DungeonRows-1);
					}
					
				}
				else
				{	
					x = GlobalRandomStream.RandRange(0,DungeonRows-1);
					y = GlobalRandomStream.RandRange(0,DungeonColumns-1);	
				}

				//Adjust X and Y by 1 based on orientation to the center if a whole was there previously.
				if(x == PrevX)
				{
					if(x > ( (float)DungeonRows/2) )
					{
						x = x-1;
					}
					else
					{
						x = x+1;
					}
					
				}
				if(y == PrevY)
				{
					if(y > ( (float)DungeonColumns/2) )
					{
						y = y-1;
					}
					else
					{
						y = y+1;
					}
				}



				CarveFloorConnectionDown(x,y,f);
				PrevX = x;
				PrevY = y;
				}
		}

	}
}

FVector AMazeDungeonBuilder::CalculateCellStartPoint(const FMazeCell& InputCell,int32 ZLevel) const
{
	float XOffset = InputCell.Row*DungeonTileSize.X;
	float YOffset = InputCell.Column*DungeonTileSize.Y;
	float ZOffset = ZLevel*DungeonTileSize.Z + DungeonFloorZBuffer*ZLevel;
	return InitialGenerationLocation + FVector(XOffset,YOffset,ZOffset);
}

FVector AMazeDungeonBuilder::CalculateDungeonCenter() const
{
	FVector ActorLocation = GetActorLocation();
	FVector DungeonCenter = ( FVector(0.0f,0.0f,0.0f) + FVector(DungeonRows*DungeonTileSize.X,DungeonColumns*DungeonTileSize.Y,0.0f) )/2;
	
	//Midpoint of the lower left hand corner (Generation start point, to the upper right corner)
	
	DungeonCenter += ActorLocation; //Account for where the Dungeon is in World Space. 

	return DungeonCenter;
}

bool AMazeDungeonBuilder::CarveFloorConnectionDown(int32 x, int32 y, int32 FloorNumber)
{
	if(x < 0 || x >= DungeonRows || y < 0 || y >= DungeonColumns || FloorNumber <= 0 || FloorNumber>=DungeonFloors) //Zero is the bottom layer
	{
		return false; //Out of bounds
	}
	MazeDungeonMap[FloorNumber].Maze.ChangeCellRoomStatusByIndex(x,y,ECellRoomStatus::FloorPassage);
	
	
	if(bStreamInLevelForFloorConnections && FloorNumber-1 >= 0) //StairLevel needs to be spawned one below where the hole we carve is. It should also have a floor.
	{
		MazeDungeonMap[FloorNumber-1].Maze.ChangeCellRoomStatusByIndex(x,y,ECellRoomStatus::FloorPassage);
		StairLevelStreamTiles.AddUnique(FIntVector(x,y,FloorNumber-1) );
	}
	
	return true;
}

void AMazeDungeonBuilder::ClearMazeDungeon()
{

	FloorMeshes->ClearInstances();
	ClosedWallMeshes->ClearInstances();
	OpenWallMeshes->ClearInstances();
}

void AMazeDungeonBuilder::DetermineRoomTileNumber(const FMazeRoom& InputRoomData, int32& RoomXTiles, int32& RoomYTiles,int32& RoomZTiles  ) const
{
	bool bSkipRandomGenerationX = false;
	bool bSkipRandomGenerationY = false;
	bool bSkipRandomGenerationZ = false;

	/*
	Manage bad input
	*/
	if(InputRoomData.MinimumXTiles > InputRoomData.MaximumXTiles)
	{
		bSkipRandomGenerationX = true;
		RoomXTiles = InputRoomData.MinimumXTiles;
	}
	else if(InputRoomData.MinimumYTiles > InputRoomData.MaximumYTiles)
	{
		bSkipRandomGenerationY = true;
		RoomYTiles = InputRoomData.MinimumYTiles;
	}
	else if(InputRoomData.MinimumZTiles > InputRoomData.MaximumZTiles)
	{
		bSkipRandomGenerationZ = true;
		RoomZTiles = InputRoomData.MinimumYTiles;
	}
	
	
	if(!bSkipRandomGenerationX)
	{
		RoomXTiles = GlobalRandomStream.RandRange(InputRoomData.MinimumXTiles,InputRoomData.MaximumXTiles);
	}
	else
	{
		GlobalRandomStream.RandRange(0,2); //Generate a dummy number, preserve seed order
	}
	


	if(!bSkipRandomGenerationY)
	{
		RoomYTiles = GlobalRandomStream.RandRange(InputRoomData.MinimumYTiles,InputRoomData.MaximumYTiles);
	}
	else
	{
		GlobalRandomStream.RandRange(0,2); //Generate a dummy number, preserve seed order
	}
	
	
	
	if(!bSkipRandomGenerationZ)
	{
		RoomZTiles = GlobalRandomStream.RandRange(InputRoomData.MinimumZTiles,InputRoomData.MaximumZTiles);
	}
	else
	{
		GlobalRandomStream.RandRange(0,2); //Generate a dummy number, preserve seed order
	}
	
	
	
	if(InputRoomData.bEnsureRoomIsSquareXY)
	{
		RoomXTiles = RoomYTiles;
	}

	/*
	Protect against 0 or negative numbers
	*/
	if(RoomXTiles <= 0)
	{
		RoomXTiles = 1;
	}

	if(RoomYTiles <= 0)
	{
		RoomYTiles = 1;
	}

	if(RoomZTiles <= 0)
	{
		RoomZTiles = 1;
	}
}






void AMazeDungeonBuilder::GenerateMazeDungeon()
{
	
	StairLevelStreamTiles.Empty();
	bMazeInitializationPassed = InitializeDungeonGeneration();
	NumberOfDoors = 0;

	if(!bMazeInitializationPassed)
	{
		
		if(bDebugWarnings)
		{
			UE_LOG(LogTemp,Warning,TEXT("bMazeInitializationFailed, no maze will be generated"))
		}
		return;
	}
	OnMazeGenerationStart.Broadcast();
	ClearMazeDungeon();

	TotalNumberOfMazeCells = DungeonColumns*DungeonColumns*DungeonFloors;

	BuildMaze();
	

	GenerateMazeRooms();
	if(bGenerateDoors)
	{
		for (int32 f = 0; f < DungeonFloors; f++)
		{
			MazeDungeonMap[f].Maze.SetWallsAdjacentToRoomCellsAsDoor(!bPreventRoomsFromSlicingOpenEdgesOfMaze);
		}
	}
	
	//Add Stair rooms to world

	if(bStreamInLevelForFloorConnections)
	{
		StairLevel.ForceRoomLocations.Append(StairLevelStreamTiles);
		int32 NumberStairRooms = StairLevel.ForceRoomLocations.Num();
		StairLevel.NumberOfCopies = NumberStairRooms; //Ensures the locations are used.
		for (int32 i = 0; i < NumberStairRooms; i++)
		{
			bool bValidRoom = false;
			ULevelStreamingDynamic* RoomInst = GenerateRoom(StairLevel,i,bValidRoom,false,true);
		}
	}




	/*
	(0,0) lower left.
	Dungeon grows on X and Y POSITIVE AXIS
	*/
	

	FloorMeshScale = FVector(DungeonTileSize.X/FloorMeshSize.X,DungeonTileSize.Y/FloorMeshSize.Y,1.0f);
	WallMeshScale = FVector(DungeonTileSize.X/WallMeshSize.X,1.0f,DungeonTileSize.Z/WallMeshSize.Z);
	DoorScale = FVector(1.0f,DungeonTileSize.Y/DoorMeshSize.Y,DungeonTileSize.Z/DoorMeshSize.Z);

	for (int32 f = 0; f < DungeonFloors; f++)
	{
		AddMazeFloorToWorld(MazeDungeonMap[f],bGenerateDoors);
	}


	UpdateComponentTransforms(); //Fixes nav mesh generation issues efficiently
	FloorMeshes->BuildTreeIfOutdated(true,true); //force update
	ClosedWallMeshes->BuildTreeIfOutdated(true,true);
	OpenWallMeshes->BuildTreeIfOutdated(true,true);
	OnAllMazeCellsFinished.Broadcast();
	
	
}


void AMazeDungeonBuilder::GenerateMazeDungeonConstructor(bool bOnlySpawnGrid)
{	
	NumberOfDoors = 0;
	StairLevelStreamTiles.Empty();
	bMazeInitializationPassed = InitializeDungeonGeneration();

	if(!bMazeInitializationPassed)
	{
		
		if(bDebugWarnings)
		{
			UE_LOG(LogTemp,Warning,TEXT("bMazeInitializationFailed, no maze will be generated"))
		}
		return;
	}
	
	OnMazeGenerationStart.Broadcast();
	ClearMazeDungeon();

	TotalNumberOfMazeCells = DungeonColumns*DungeonColumns*DungeonFloors;

	//Previously X and Y coordinates of the last floor connection
	BuildMaze(bOnlySpawnGrid);

	MarkMazeRooms();
	if(bGenerateDoors)
	{
		//MazeDungeon.SetWallsAdjacentToRoomCellsAsDoor();
	}
	





	/*
	(0,0) lower left.
	Dungeon grows on X and Y POSITIVE AXIS
	*/
	

	FloorMeshScale = FVector(DungeonTileSize.X/FloorMeshSize.X,DungeonTileSize.Y/FloorMeshSize.Y,1.0f);
	WallMeshScale = FVector(DungeonTileSize.X/WallMeshSize.X,1.0f,DungeonTileSize.Z/WallMeshSize.Z);

	for (int32 f = 0; f < DungeonFloors; f++)
	{
		AddMazeFloorToWorld(MazeDungeonMap[f]);
	}


	UpdateComponentTransforms(); //Fixes nav mesh generation issues efficiently
	FloorMeshes->BuildTreeIfOutdated(true,true); //force update
	ClosedWallMeshes->BuildTreeIfOutdated(true,true);
	OpenWallMeshes->BuildTreeIfOutdated(true,true);
	OnAllMazeCellsFinished.Broadcast();
	
	
}




void AMazeDungeonBuilder::GenerateMazeRooms()
{
	//Assume MazeRoomData is filled
	int32 RoomInstances = 0;
	MazeCellsAdjacentToRooms = 0;
	DungeonFilledPercentage = 0;
	MazeCellsDedicatedToRooms = 0;

	if(!bRoomDataLoaded || !MazeRoomDataTable)
	{
		if(bDebugWarnings)
		{
			UE_LOG(LogTemp,Warning,TEXT("Room data not loaded,GenerateMazeRooms() failed. "))
		}
		return;
	}

	for (const FMazeRoom& Room : MazeRoomData)
	{
		int32 NumberPerRoom = Room.NumberOfCopies;
		if(!Room.RoomLevel.IsValid() && !Room.bSpawnRoomAsActorInstead ) 
		{
			continue;
		}
		else if(Room.bSpawnRoomAsActorInstead && !Room.ActorSoftClass.IsValid())
		{
			continue;
		}

		for (int32 i = 0; i < NumberPerRoom; i++)
		{
			ULevelStreamingDynamic* RoomInst = nullptr;

			if(DungeonFilledPercentage >= SpawnBlockPercentage)
			{
				return;
			}
			else
			{
				bool bValidRoom = false;
				RoomInst = GenerateRoom(Room,i,bValidRoom);
				if(!bValidRoom)
				{
					continue; //Couldn't find a valid place to place to spawn the room.
				}
			}
			int32 FinalAdjacentCount = 0;
			if(bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage)
			{
				FinalAdjacentCount = MazeCellsAdjacentToRooms;
			}
			DungeonFilledPercentage = (float(MazeCellsDedicatedToRooms + FinalAdjacentCount))/(float(TotalNumberOfMazeCells)) * 100.0f;
			RoomInstances++;
		}
	}
	
}

ULevelStreamingDynamic* AMazeDungeonBuilder::GenerateRoom(const FMazeRoom& InputRoomData, const int32& RoomCopyNumber, bool& bSuccess, bool bOnlyMarkRoomsNoStreaming, bool bIgnoreRoomStatusRestriction)
{
	ULevelStreamingDynamic* NewRoom  = nullptr;
	
	bSuccess = false;
	bool bValidStartingPoint = false;
	
	
	
	int32 RoomXTiles = 0;
	int32 RoomYTiles = 0; 
	int32 RoomZTiles = 0;
	DetermineRoomTileNumber(InputRoomData,RoomXTiles,RoomYTiles,RoomZTiles); //Pick a length and width of the room
	FIntVector RoomStartTile = PickRoomStartTile(RoomXTiles,RoomYTiles,RoomZTiles,InputRoomData.ForceRoomLocations,RoomCopyNumber,bValidStartingPoint,bIgnoreRoomStatusRestriction);
	
	
	if(bValidStartingPoint)
	{
		MazeCellsDedicatedToRooms = MazeCellsDedicatedToRooms + RoomXTiles*RoomYTiles*RoomZTiles;
		/*
		1 do flagging for each floor
		2 do streaming.
		3 do scaling
		*/
		int32 MarkedZLevels = 0; 
		for (int32 f = RoomStartTile.Z; f < DungeonFloors; f++)
		{
			if(MarkedZLevels>= RoomZTiles)
			{
				continue; //only mark the tiles we need.
			}
			FMazeDungeon* Maze;
			if(MazeDungeonMap.Contains(f))
			{
				Maze = &MazeDungeonMap[f].Maze;
			}
			else
			{
				continue;
			}
			bool bMarkRoomCellArrayForDoors = true;
			if(bLimitDoorsToRoomStartFloor && f != RoomStartTile.Z)
			{
				bMarkRoomCellArrayForDoors = false;
			}

			FMazeCell& StartRoomCell =  Maze->Grid[RoomStartTile.X][RoomStartTile.Y];
			Maze->FlagRoomAndAdjacentCells(StartRoomCell,RoomXTiles,RoomYTiles,MazeCellsAdjacentToRooms,DepthToFlagAsAdjacentToRoom,bMarkRoomCellArrayForDoors);
			//This method will change data of cells in MazeDungeon, so we know whether to draw them or let LevelInstances stream where those cells would be
			MarkedZLevels++;
		}

	}
	else
	{
		return NewRoom;
	}
	
	if(bOnlyMarkRoomsNoStreaming)
	{
		bSuccess = true;
		return nullptr;
	}
	


	if(InputRoomData.bSpawnRoomAsActorInstead && InputRoomData.ActorSoftClass.Get() != NULL)
	{
		bool bValidScale = false;
		FVector RoomScale = InputRoomData.CalculateRoomScale(DungeonTileSize.X,DungeonTileSize.Y,DungeonTileSize.Z,RoomXTiles,RoomYTiles,RoomZTiles,bValidScale);

		//Get the Vector from RoomStartTile
		const FMazeDungeon* Maze;
		if(MazeDungeonMap.Contains(RoomStartTile.Z))
		{
			Maze = &MazeDungeonMap[RoomStartTile.Z].Maze;
		}
		else
		{
			return nullptr;
		}
	
		if(!Maze->IsPointInBounds(RoomStartTile.X,RoomStartTile.Y))
		{
			return nullptr;
		}
		const FMazeCell& StartingCell = Maze->Grid[RoomStartTile.X][RoomStartTile.Y];
	
		FVector StartingPoint = CalculateCellStartPoint(StartingCell,RoomStartTile.Z);    
		AActor* Room = GetWorld()->SpawnActor<AActor>(InputRoomData.ActorSoftClass.Get(),StartingPoint,FRotator(0.0f,0.0f,0.0f));
		
		if(Room)
		{
			FString NameBase = "ar";
			FString NameString = FString(*NameBase);
			NameString.AppendInt(RoomActors.Num());
			FName FinalName = FName(*NameString);
			Room->Tags.Add(FinalName);
			RoomActors.Add(FinalName,Room);
			bSuccess = true;
		}
			

		return nullptr;
	}
	else
	{
		bool bValidLevelInstance = false;
		NewRoom = StreamInRoom(InputRoomData,RoomStartTile,bValidLevelInstance,bDebugWarnings);

		if(!bValidLevelInstance)
		{
			return nullptr;
		}

		bool bValidScale = false;
		FVector RoomScale = InputRoomData.CalculateRoomScale(DungeonTileSize.X,DungeonTileSize.Y,DungeonTileSize.Z,RoomXTiles,RoomYTiles,RoomZTiles,bValidScale);

		if(bValidScale)
		{
			//Level instances CANNOT DEAL WITH SCALING. NEED TO EXTEND FUNCTIONALITY OF LEVELSCRIPT 
			//NewInstance->LevelTransform = NewTransform; will only update translation and rotation!
			RoomLevelInstancesToScale.Add(NewRoom);
			RoomScales.Add(RoomScale);
		}
		NewRoom->OnLevelShown.AddUniqueDynamic(this,&AMazeDungeonBuilder::RoomInstanceShown); //When the level finally streams in
		NewRoom->SetShouldBeLoaded(true);
		bSuccess = true;
	}
	return NewRoom;
}

bool AMazeDungeonBuilder::IsWallDungeonEdge(int32 WallNumber, const FMazeCell& InputCell) const
{
	bool bIsEdge = false;
	
	switch (WallNumber)
	{
	case 0:
		if(InputCell.Row == DungeonRows-1)
		{
			bIsEdge = true;
		}
		break;
	case 1:
		if(InputCell.Column == DungeonColumns-1)
		{
			bIsEdge = true;
		}
		break;
	case 2:
		if(InputCell.Row == 0)
		{
			bIsEdge = true;
		}
		break;
	case 3:
		if(InputCell.Column == 0)
		{
			bIsEdge = true;
		}
		break;
	}
	return bIsEdge;
}

void AMazeDungeonBuilder::MarkMazeRooms()
{
	int32 RoomInstances = 0;
	MazeCellsAdjacentToRooms = 0;
	DungeonFilledPercentage = 0;
	MazeCellsDedicatedToRooms = 0;

	if(!bRoomDataLoaded || !MazeRoomDataTable)
	{
		ReadDataTable();
	}

	for (const FMazeRoom& Room : MazeRoomData)
	{
		int32 NumberPerRoom = Room.NumberOfCopies;
		

		for (int32 i = 0; i < NumberPerRoom; i++)
		{
			

			if(DungeonFilledPercentage >= SpawnBlockPercentage)
			{
				return;
			}
			else
			{
				bool bValidRoom = false;
				GenerateRoom(Room,i,bValidRoom,true);
				if(!bValidRoom)
				{
					continue; //Couldn't find a valid place to place to spawn the room.
				}
			}
			int32 FinalAdjacentCount = 0;
			if(bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage)
			{
				FinalAdjacentCount = MazeCellsAdjacentToRooms;
			}
			DungeonFilledPercentage = (float(MazeCellsDedicatedToRooms + FinalAdjacentCount))/(float(TotalNumberOfMazeCells)) * 100.0f;
			RoomInstances++;
		}
	}
	
}




FIntVector AMazeDungeonBuilder::PickRoomStartTile(const int32 RoomRows, const int32 RoomColumns, const int32 RoomFloors, const TArray<FIntVector>& RoomForcedPoints, const int32 RoomCopyNumber,bool& bValidStartingPoint, bool bIgnoreRoomStatusRestriction)
{
	//2xX mazes have all cells exposed to the edge, no possible spots for rooms. Or room too big
	if(DungeonRows <= 0 || DungeonColumns <= 0 || DungeonFloors <= 0 || RoomRows >= DungeonRows || RoomColumns >= DungeonColumns) 
	{
		bValidStartingPoint = false;
		return FIntVector();
	}

	bValidStartingPoint = true; //testing should assume true
	int32 NumberOfForcedPoints = RoomForcedPoints.Num();
	if(RoomCopyNumber < NumberOfForcedPoints && NumberOfForcedPoints > 0  )
	{	
		//Handle cases where we have some control over where we want the room to be
		//If we are only given one point to test, then we only need to check it.
		//If one axis is restricted, then we should try to fufill it N times, as its possible
		//to fail the first time we try.
		bool bConsiderMultipleAttempts = false; 
		int32 AttemptNumber = 0;
		do
		{

			//LowerLeft
			int32 PotentialStartRow = RoomForcedPoints[RoomCopyNumber].X;
			int32 PotentialStartColumn =  RoomForcedPoints[RoomCopyNumber].Y;
			int32 PotentialStartFloor = RoomForcedPoints[RoomCopyNumber].Z;

			//Allow users to only specify a specific floor/row/or column, and let the rest be random
			if(PotentialStartRow <= -1)
			{
				PotentialStartRow = GlobalRandomStream.RandRange(0,DungeonRows-1);
				bConsiderMultipleAttempts = true;
			}
			else
			{
				GlobalRandomStream.RandRange(0,DungeonRows-1); //preserve seed order
			}
			
			
			if(PotentialStartColumn <= -1)
			{
				PotentialStartColumn = GlobalRandomStream.RandRange(0,DungeonColumns-1);
				bConsiderMultipleAttempts = true;
			}
			else
			{
				GlobalRandomStream.RandRange(0,DungeonColumns-1);
			}
			

			if(PotentialStartFloor <= -1)
			{
				PotentialStartFloor = GlobalRandomStream.RandRange(0,DungeonFloors-1);
				bConsiderMultipleAttempts = true;
			}
			else
			{
				GlobalRandomStream.RandRange(0,DungeonFloors-1);
			}
			

			//UpperRight
			int32 PotentialMaxRow = PotentialStartRow+RoomRows-1; //Max point of a 1x1 room is the starting point.
			int32 PotentialMaxColumn = PotentialStartColumn+RoomColumns-1;
			int32 PotentialMaxFloor = PotentialStartFloor+RoomFloors-1;




			bool bFloorExists = false;
			
			FMazeDungeon* Maze = nullptr;
			if(MazeDungeonMap.Contains(PotentialStartFloor))
			{
				Maze = &MazeDungeonMap[PotentialStartFloor].Maze;
				bFloorExists = true;
			}
			

			if(bFloorExists)
			{
			
				//Need to check if these are in bounds before accessing array
				if(Maze->IsPointInBounds(PotentialStartRow,PotentialStartColumn) && Maze->IsPointInBounds(PotentialMaxRow,PotentialMaxColumn) )
				{
					
						//Check to see if the room has marked space that it isn't allowed to use
						bool bPointPassedZLevelCheck = true;
						bool bPassedStartFloorCheck = false; 
						//if the potential point hasn't been taken
						FIntVector ValidPt = FIntVector(PotentialStartRow,PotentialStartColumn,PotentialStartFloor);
						if(  (Maze->Grid[PotentialStartRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom && Maze->Grid[PotentialMaxRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom) && (Maze->Grid[PotentialStartRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom && Maze->Grid[PotentialMaxRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom) )
						{
							bPassedStartFloorCheck = true;
						}
						


						if( bPassedStartFloorCheck && RoomFloors > 1) //only worth testing here if the given point was valid
						{
							
							for (int32 TF = PotentialStartFloor+1; TF < PotentialMaxFloor+1; TF++ )
							{
								if(!MazeDungeonMap.Contains(TF))
								{
									continue;
								}
								else
								{
									const FMazeDungeon* UpperMaze = &MazeDungeonMap[TF].Maze;
									if(UpperMaze->Grid[PotentialStartRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::PartOfRoom || UpperMaze->Grid[PotentialMaxRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::PartOfRoom  )
									{
										bPointPassedZLevelCheck = false; //Hit a failure condition
										break;
									}
									else if(UpperMaze->Grid[PotentialStartRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::FloorPassage || UpperMaze->Grid[PotentialMaxRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::FloorPassage  )
									{
										bPointPassedZLevelCheck = false; //Hit a failure condition
										break;
									}
									if(UpperMaze->Grid[PotentialStartRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::PartOfRoom || UpperMaze->Grid[PotentialStartRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::PartOfRoom  )
									{
										bPointPassedZLevelCheck = false; //Hit a failure condition
										break;
									}
									else if(UpperMaze->Grid[PotentialMaxRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::FloorPassage || UpperMaze->Grid[PotentialMaxRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::FloorPassage  )
									{
										bPointPassedZLevelCheck = false; //Hit a failure condition
										break;
									}
									
								}
								
							}

						}

						if(bPointPassedZLevelCheck && bPassedStartFloorCheck)
						{
							return ValidPt;
						}
						else if(bIgnoreRoomStatusRestriction)
						{
							return ValidPt;
						}
						
						
						
					
				}
			}
		
		//Reach here, the point we tried to build a room failed. This is the only loop where we consider restricted parameters, before trying the whole dungeon
		AttemptNumber++; 
		} while (bConsiderMultipleAttempts && AttemptNumber < SpawnAttemptsPerRoomFastPicking);
	}
	//If we don't have any forced points or valid FP. Then it fails, reach here and we pick a random one.


	
	if(bReliablyFindStartCellsForRoom) //A bit slow...
	{
		TArray<FIntVector> AllValidStartingPoints = {};

		for (int32 f = 0; f < DungeonFloors; f++)
		{
			const FMazeDungeon* Maze = &MazeDungeonMap[f].Maze;
			TArray<FMazeCell> ValidStartingPoints = Maze->GetValidRoomStartingPointCells(RoomRows,RoomColumns);
			for (const FMazeCell& MC : ValidStartingPoints)
			{
				//ensure the valid points on the current floor don't grow into Rooms that are so tall that they interfere with rooms above them.
				if(RoomFloors > 1)
				{
					bool bPointPassed = true;
					for (int32 TF = f+1; TF < f+RoomFloors+1; TF++ )
					{
						if(!MazeDungeonMap.Contains(TF))
						{
							continue;
						}
						else
						{
							const FMazeDungeon* UpperMaze = &MazeDungeonMap[TF].Maze;
							if(UpperMaze->Grid[MC.Row][MC.Column].RoomStatus == ECellRoomStatus::PartOfRoom || UpperMaze->Grid[MC.Row][MC.Column].RoomStatus == ECellRoomStatus::FloorPassage )
							{
								bPointPassed = false; //Hit a failure condition
								break;
							}
	
						}
						
					}

					if(bPointPassed)
					{
						AllValidStartingPoints.Add(FIntVector(MC.Row,MC.Column,f));
					}

				}
				else //No above rooms to test.
				{
					AllValidStartingPoints.Add(FIntVector(MC.Row,MC.Column,f));
				}
				
				
				
			}
		}
		
		int32 NumberOfPossibleStartingPoints = AllValidStartingPoints.Num();

		if(NumberOfPossibleStartingPoints == 0)
		{
			bValidStartingPoint = false; //We tried the best we could, didn't work out
			return FIntVector();
		}
		int32 RandomIndex = GlobalRandomStream.RandRange(0,NumberOfPossibleStartingPoints-1); 
		//RandRange is inclusive to min/max. Out of bounds error at AllValidStartingPoints[LengthOfThisArray]
		return AllValidStartingPoints[RandomIndex];
		
	}
	else
	{
		
		//Can't let rooms start close enough to the upperRight corner, where they can grow out of bounds
		//In a 3x3 Dungeon, the only place a 1x1 room can fit is at 1,1
		//TODO consider floor limits.
		
		for (int32 i = 0; i < SpawnAttemptsPerRoomFastPicking; i++)
		{
			
			int32 RandomFloor = GlobalRandomStream.RandRange(0,DungeonFloors-1);
			const FMazeDungeon* Maze = &MazeDungeonMap[RandomFloor].Maze;

			if(!Maze)
			{
				continue;
			}

			int32 PotentialStartRow = GlobalRandomStream.RandRange(0,DungeonRows-RoomRows-1);
			int32 PotentialStartColumn = GlobalRandomStream.RandRange(0,DungeonColumns-RoomColumns-1);

			int32 PotentialMaxRow = PotentialStartRow+RoomRows-1; //Max point of a 1x1 room is the starting point.
			int32 PotentialMaxColumn = PotentialStartColumn+RoomColumns-1;

			//Need to check if these are in bounds before accessing array
			if(Maze->IsPointInBounds(PotentialStartRow,PotentialStartColumn) && Maze->IsPointInBounds(PotentialMaxRow,PotentialMaxColumn) && Maze->IsPointInBounds(PotentialStartRow,PotentialMaxColumn) && Maze->IsPointInBounds(PotentialMaxRow,PotentialStartColumn))
			{
				
				//BUGGED?
				
				if(  (Maze->Grid[PotentialStartRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom && Maze->Grid[PotentialMaxRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom)) // && (Maze->Grid[PotentialStartRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom && Maze->Grid[PotentialMaxRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::NotPartOfRoom) )
				{
					//ensure the valid points on the current floor don't grow into Rooms that are so tall that they interfere with rooms above them.
					
					//Account for Z levels
				
					if(RoomFloors > 1)
					{
						bool bPointPassed = true;
						
						for (int32 TF = RandomFloor+1; TF < RandomFloor+RoomFloors+1; TF++ )
						{
							if(!MazeDungeonMap.Contains(TF))
							{
								continue;
							}
							else
							{
								const FMazeDungeon* UpperMaze = &MazeDungeonMap[TF].Maze;

								if(UpperMaze->Grid[PotentialStartRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::PartOfRoom || UpperMaze->Grid[PotentialMaxRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::PartOfRoom  )
								{
									bPointPassed = false; //Hit a failure condition
									break;
								}
								else if(UpperMaze->Grid[PotentialStartRow][PotentialStartColumn].RoomStatus == ECellRoomStatus::FloorPassage || UpperMaze->Grid[PotentialMaxRow][PotentialMaxColumn].RoomStatus == ECellRoomStatus::FloorPassage  )
								{
									bPointPassed = false; //Hit a failure condition
									break;
								}
								
							}
							
						}

						if(bPointPassed)
						{
							bValidStartingPoint = true;
							return FIntVector(PotentialStartRow,PotentialStartColumn,RandomFloor);
						}
						else
						{
							continue;
						}
						
					}
					else
					{
						
						bValidStartingPoint = true;
						return FIntVector(PotentialStartRow,PotentialStartColumn,RandomFloor);
					}
					
					
				}
				
				
			}
			else
			{
				continue; //We failed, try again
			}
			

		}
		
	}
	

	bValidStartingPoint = false; 
	return FIntVector();
	

	

}

void AMazeDungeonBuilder::ReadDataTable()
{
	RoomLevelInstancesToScale.Empty();
	MazeRoomData.Empty(); 

	if(!MazeRoomDataTable)
	{
		bDataTableRead = false;
		return;
	}
	

	//UE_LOG(LogTemp,Warning,TEXT("TEST"))
	/*
	My Library works fine. I can't figure out the packaging errors. So I'll just make a quick version of the function I need.
	*/
	TMap<FName,FMazeRoom> MazeRoomDataMap; // = UUtilityDataFunctionsBPLibrary::CreateDataTableMap<FMazeRoom>(FName("MazeRoom"),MazeRoomDataTable,bDebugWarnings);
	
	
	TArray<FName> InputDataTableRowNames = MazeRoomDataTable->GetRowNames();

	for (FName Row : InputDataTableRowNames)
	{
		FMazeRoom* PointerOfTypeT = MazeRoomDataTable->FindRow<FMazeRoom>(Row, FString(""));
		FMazeRoom StructObject = *PointerOfTypeT; //Deference
		MazeRoomDataMap.Add(Row,StructObject);
		if(bDebugWarnings)
		{
			UE_LOG(LogTemp,Warning,TEXT("Name: %s"), *(Row.ToString()))
		}
		

	}
	
	MazeRoomDataMap.GenerateValueArray(MazeRoomData);
	bDataTableRead = true;
}




ULevelStreamingDynamic* AMazeDungeonBuilder::StreamInRoom(const FMazeRoom& InputRoomData, const FIntVector& StartingTile, bool& bSuccess,bool bShowDebugWarnings)
{
	bSuccess = false;
	const FMazeDungeon* Maze;
	
	if(MazeDungeonMap.Contains(StartingTile.Z))
	{
		Maze = &MazeDungeonMap[StartingTile.Z].Maze;
	}
	else
	{
		return nullptr;
	}
	

	if(!Maze->IsPointInBounds(StartingTile.X,StartingTile.Y))
	{
		
		if(bShowDebugWarnings)
		{
			UE_LOG(LogTemp,Error,TEXT("LoadLevelInstanceBySoftObjectPtr() failed, StartingCell not in bounds"))
		}
		return nullptr;
	}
	const FMazeCell& StartingCell = Maze->Grid[StartingTile.X][StartingTile.Y];
	
	FVector StartingPoint = CalculateCellStartPoint(StartingCell,StartingTile.Z);
	if(!InputRoomData.RoomLevel.IsValid())
	{

		if(bShowDebugWarnings)
		{
			UE_LOG(LogTemp,Error,TEXT("StreamInRoom() failed, InputRoomData.RoomLevel is Null. Did you load the asset in before calling this method?"))
		}
		return nullptr;
	}
	bool bSuccessfulInstanceCreation = false;
	ULevelStreamingDynamic* NewInstance = ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(this,InputRoomData.RoomLevel,StartingPoint,InitialGenerationRotation,bSuccessfulInstanceCreation);
	if(!bSuccessfulInstanceCreation)
	{
		if(bShowDebugWarnings)
		{
			UE_LOG(LogTemp,Error,TEXT("LoadLevelInstanceBySoftObjectPtr() failed, StreamInRoom() failed"))
		}
		
		bSuccess = false;
		return nullptr;
	}
	bSuccess = true;

	//Reach here, we have successfully created a level instance
	NumberOfRoomLevelInstancesCreated++;
	return NewInstance;
	
	
}


//LOADING

void AMazeDungeonBuilder::LoadMazeRoomLevels()
{
	
	FStreamableManager& BaseLoader = UDungeonDataSingleton::Get().AssetLoader; 
	TArray<FSoftObjectPath> MazeRoomSoftObjectPaths = {}; //Items we want to stream
	
	OnAsyncLoadMazeRoomDataInitialized.Broadcast();


	if(!bDataTableRead)
	{
		ReadDataTable();
	}
	

	
	//Convert TSoftObjectPtr<UWorld> to FSoftObjectPath
	for (int32 i = 0; i < MazeRoomData.Num(); i++)
	{
		
		if(MazeRoomData[i].bSpawnRoomAsActorInstead)
		{
			TSoftClassPtr<class AActor> ActorSoftClass = MazeRoomData[i].ActorSoftClass;
			MazeRoomSoftObjectPaths.AddUnique(ActorSoftClass.ToSoftObjectPath()); //Get the SoftObject Paths
		}
		else
		{
			TSoftObjectPtr< UWorld > LevelSoftObjectPtr = MazeRoomData[i].RoomLevel;
			MazeRoomSoftObjectPaths.AddUnique(LevelSoftObjectPtr.ToSoftObjectPath()); //Get the SoftObject Paths
			MazeLevelsSoftPointers.AddUnique(LevelSoftObjectPtr);
		}
		
	}

	if(bStreamInLevelForFloorConnections)
	{
		MazeRoomSoftObjectPaths.AddUnique(StairLevel.RoomLevel.ToSoftObjectPath());
	}

	//Call PostLoadMazeLevels() after all the given levels have been loaded
	BaseLoader.RequestAsyncLoad(MazeRoomSoftObjectPaths,FStreamableDelegate::CreateUObject(this,&AMazeDungeonBuilder::PostLoadMazeLevels ));
	
}

void AMazeDungeonBuilder::PostLoadMazeLevels()
{	
	bRoomDataLoaded = true;
	OnAsyncLoadMazeRoomDataFinished.Broadcast();
	
	//Don't need this, but good to have a reference for what it would look like if I needed the data in a TSoftObjectPtr as soon as possible
	//for (int32 i = 0; i < MazeLevelsSoftPointers; i++)
	//{
		//UWorld* WorldData = MazeLevelsSoftPointers[i].Get();
		//if(WorldData)
		//{
			//Do things we would need to happen for each UWorld after loading.
		//}
	//}
	
}

//Scaling Level Instances
ADungeonLevelScriptActor* AMazeDungeonBuilder::GetDungeonLevelScriptActor(ULevelStreamingDynamic* LevelInstance,bool& bSuccess, bool bShowDebugWarnings )
{
	if(!LevelInstance)
	{
		bSuccess = false;
		return nullptr;
	}
	ALevelScriptActor* LevelScript = LevelInstance->GetLevelScriptActor();
	//Problem GetLevelScriptActor() returns Nullptr, because level hasn't finished loading in yet.
	//Solution: Binding to OnLevelShown, And executing accordingly.
		
	if(!LevelScript)
	{
		bSuccess = false;
		if(bShowDebugWarnings)
		{
			UE_LOG(LogTemp,Error,TEXT("LevelScript is nullptr, GetDungeonLevelScriptActor() failed"))
		}
		return nullptr;
	}
	ADungeonLevelScriptActor* DungeonScript = Cast<ADungeonLevelScriptActor>(LevelScript);
	if(!DungeonScript)
	{
		
		if(bShowDebugWarnings)
		{
			UE_LOG(LogTemp,Error,TEXT("Cast to ADungeonLevelScriptActor failed, GetDungeonLevelScriptActor() failed"))
		}
		bSuccess = false;
		return nullptr;
	}
	//Reach here, we have successfully retrieved the ADungeonLevelScriptActor
	bSuccess = true;
	return DungeonScript;
}

void AMazeDungeonBuilder::RoomInstanceShown()
{
	MazeRoomInstancesShown++;

	if(MazeRoomInstancesShown >= NumberOfRoomLevelInstancesCreated)
	{
		
		//Ensure all level instances are loaded before trying to scale. 
		//Need level instances to be loaded before trying to scale, because I have to scale the 
		//level through its LevelScriptActor. LevelScriptActor is nullptr if the level is not loaded.
		
		ScaleRoomLevelInstances();


	}
}


void AMazeDungeonBuilder::ScaleRoomLevelInstances()
{
	int32 NumLevelToScale = RoomLevelInstancesToScale.Num();
	for (int32 i = 0; i < NumLevelToScale; i++)
	{
		bool bValidDungeonScript = false;
		ADungeonLevelScriptActor* DungeonScript =  GetDungeonLevelScriptActor(RoomLevelInstancesToScale[i],bValidDungeonScript,false);

		if(!DungeonScript)
		{
			continue;
		}
			
		FString NameBase = "r";
		FString NameString = FString(*NameBase);
		NameString.AppendInt(i+1);
		FName FinalName = FName(*NameString);
		DungeonScript->Tags.Add(FinalName);
		RoomMap.Add(FinalName,RoomLevelInstancesToScale[i]);
		DungeonScript->SetLevelScale(RoomScales[i]);


	}

	//Want to contine the naming convention here.
	TArray<FName> RoomActorKey = {};
	RoomActors.GenerateKeyArray(RoomActorKey);
	int32 i = 1;
	for (FName Name : RoomActorKey)
	{
		AActor* R = RoomActors[Name];
		if(R)
		{
			FString NameBase = "r";
			FString NameString = FString(*NameBase);
			NameString.AppendInt(i+NumLevelToScale);
			FName FinalName = FName(*NameString);
			R->Tags.Add(FinalName);
			i++;
		}
	}


	OnAllMazeRoomsFinished.Broadcast();
}
















