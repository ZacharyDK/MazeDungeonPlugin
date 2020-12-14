//Copyright Zachary Kolansky, 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MazeDataStructures.h"
#include "MazeDungeonBuilder.generated.h"


class ULevelStreamingDynamic;
class ADungeonLevelScriptActor;
class USceneComponent;
class UHierarchicalInstancedStaticMeshComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeGenerationEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeLoadEvent);




/*
This class is responsible for generating a Maze, that can be carved into Rooms that are streamed in
*/
UCLASS(HideCategories = InstanceComp)
class MAZEDUNGEONGENERATORPLUGIN_API AMazeDungeonBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMazeDungeonBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*
	EVENTS
	*/

	/*
	Called when all the Level instances representing the room's in the maze have finished streaming in.
	*/
	UPROPERTY(BlueprintAssignable)
	FMazeGenerationEvent OnAllMazeRoomsFinished;

	/*
	Called when all the Level instances representing the room's in the maze have finished streaming in.
	*/
	UPROPERTY(BlueprintAssignable)
	FMazeGenerationEvent OnAllMazeCellsFinished;

	UPROPERTY(BlueprintAssignable)
	FMazeGenerationEvent OnMazeGenerationStart;

	UPROPERTY(BlueprintAssignable)
	FMazeLoadEvent OnAsyncLoadMazeRoomDataInitialized;

	UPROPERTY(BlueprintAssignable)
	FMazeLoadEvent OnAsyncLoadMazeRoomDataFinished;



	/*
	COMPONENTS
	*/

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* MazeRootComponent = nullptr;

	/*
	Must have the sockets WallForward,WallBackward,WallLeft,WallRight
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = InstaneComp)
	UHierarchicalInstancedStaticMeshComponent* FloorMeshes = nullptr;

	/*
	Typical walls
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = InstanceComp)
	UHierarchicalInstancedStaticMeshComponent* ClosedWallMeshes = nullptr;

	/*
	Walls that have an opening for a door
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = InstanceComp)
	UHierarchicalInstancedStaticMeshComponent* OpenWallMeshes = nullptr;


	/*
	Variables
	*/





	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = Cache)
	FVector DoorScale = FVector(1.0f,1.0f,1.0f);


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cache)
	FVector FloorMeshScale = FVector(1.0f,1.0f,1.0f);

	/*
	Set to GetActorLocation at runtime
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cache)
	FVector InitialGenerationLocation = FVector();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cache)
	FRotator InitialGenerationRotation = FRotator();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cache)
	FVector WallMeshScale = FVector(1.0f,1.0f,1.0f);

	/*
	Points on the 3D grid (x,y,z), (r,c,floor) that we will stream in levels to connect floors
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Cache)
	TArray<FIntVector> StairLevelStreamTiles = {};


	/*
	Show Debug Warnings?
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Debug)
	bool bDebugWarnings = false;

	/*
	Can we procede to generate the maze
	*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Debug)
	bool bMazeInitializationPassed = false;


	//DUNGEON
	TMap<int32,FMazeDungeonFloor> MazeDungeonMap;

	/*
	Integer from 0 to 100.
	More open the MazeDungeon is, the more walls will have openings that connect different parts of the dungeon
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonParameters)
	int32 DungeonOpenness = 10;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonSize)
	int32 DungeonRows = 5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonSize)
	int32 DungeonColumns = 5;

	/*
	Number of Z levels to build. The bottom Z level is at zero.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonSize)
	int32 DungeonFloors = 1;

	/*
	Size of a Tile in Ue4 Units.
	Controls how big the Dungeon will be
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonSize)
	FVector DungeonTileSize = FVector(400.0f,400.0f,400.0f);


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonSize)
	FVector FloorMeshSize = FVector(400.0f,400.0f,20.0f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonSize)
	FVector WallMeshSize = FVector(400.0f,20.0f,400.0f);

	/*
	Increase the height where the next floor should spawn
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DungeonSize)
	float DungeonFloorZBuffer = 20.0f;


	/*
	After we generate the Maze, do we call SetWallsAdjacentToRoomCellsAsDoor()
	on each floor? (Note this method is described in the FMazeDungeon struct, and its not exposed to BP)
	NOTE: Tiles must be square for doors to scale properply
	*/
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = Doors)
	bool bGenerateDoors = false;


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = Doors)
	bool bLimitDoorsToRoomStartFloor = true;


	/*
	Door will be scaled to the height of the floor, Width of the DungeonTileSize (Y,Z scaling)
	*/
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = Doors)
	FVector DoorMeshSize = FVector(24.0f,113.0f,211.0f);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = Doors)
	TSubclassOf<class AActor> DoorClass = NULL;



	/*
	TotalNumberOfMazeCells = DungeonColumns*DungeonColumns;
	*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Transient,Category = MazeManagement)
	int32 TotalNumberOfMazeCells = 0;

	/*
	NumberOfMazeCellsNeededToCreate = TotalNumberOfMazeCells-MazeCellsDedicatedToRooms;
	*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Transient,Category = MazeManagement)
	int32 NumberOfMazeCellsNeededToCreate = 0;


	/*
	Whenever we flag a cell as ECellRoomStatus::AdjacentToRoom
	Incremented in GenerateRoom()
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient,Category = MazeManagement)
	int32 MazeCellsAdjacentToRooms = 0;


	/*
	How many maze cells were flagged as ECellRoomStatus::PartOfRoom
	*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Transient,Category = MazeManagement)
	int32 MazeCellsDedicatedToRooms = 0;


	/*
	Incremented whenever a ULevelStreamingDynamic* NewRoom broadcasts the delegate OnLevelShown
	Binding managed in GenerateRoom()
	See RoomInstanceShown()
	*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Transient,Category = MazeManagement)
	int32 MazeRoomInstancesShown = 0;

	/*
	Incremented whenever we call StreamInRoom()
	*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = MazeManagement)
	int32 NumberOfRoomLevelInstancesCreated = 0;



	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = MazeBuildOptions)
	bool bAttemptToPlaceHolesToNextFloorOnEdge = true;


	


	/*
	Should we use the data in StairLevel to build connections between floors, or just have a hole in the dungeon.
	Note: If level streaming fails, there will be an extra hole, and the bottom of the Dungeon can be exposed.
	When we use level streaming for the stairs, I have to create a hole on the current floor, and the floor below it to make room for the level. 
	(I assume, the stair level will have a have a floor mesh. )

	Setting this to false means Level streaming for stair is not done, and there will just be a single hole that connects levels.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = MazeBuildOptions)
	bool bStreamInLevelForFloorConnections = true;

	/*
	If this is false
	walls marked as EWallStatus::OpenWall
	won't be added to the OpenWallMeshes HISM
	*/
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = MazeBuildOptions)
	bool bUseOpenWallMeshForOpenWalls = true;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = MazeBuildOptions)
	int32 NumberOfFloorPassagesPerFloor = 1;

	/*
	Only used if bStreamInLevelForFloorConnections
	You want this to be a 1x1x2 in tile size level.
	*/
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = MazeBuildOptions)
	FMazeRoom StairLevel = FMazeRoom();

	



		/*
	If true, we will ignore the text inputs, and generate new seeds
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RandomSeed)
	bool bGenerateNewRandomSeeds = false;
	
	/*
	Index of this Array is the floor number
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RandomSeed)
	TArray<FName> SeedList = {};

	//Room distribution, where holes linking floors are carved
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = RandomSeed)
	FRandomStream GlobalRandomStream;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RandomSeed)
	FName GlobalRandomSeed = FName("");
	

	/*
	Where we store all the TSoftObjectPtr from MazeRoomDataTable.
	*/
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = RoomData)
	TArray< TSoftObjectPtr<UWorld> > MazeLevelsSoftPointers= {};

	/*
	Read from data table. 
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient, Category = RoomData)
	TArray<FMazeRoom> MazeRoomData = {};

	/*
	Order in this data table is the priority of which rooms will spawn first
	This is default data table if we don't use Dungeon Levels, OR if the given data for a Dungeon level is NOT found.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RoomData)
	UDataTable* MazeRoomDataTable = nullptr;

	/*
	Has the data in MazeRoomDataTable been read into MazeRoomData?
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = RoomManagement)
	bool bDataTableRead = false;
	
	/*
	if false, only maze cells with ECellRoomStatus::PartOfRoom will be used to calculate.
	If true, maze cells with a room status ECellRoomStatus::PartOfRoom and ECellRoomStatus::AdjacentToRoom contribute to DungeonFilledPercentage
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RoomManagement)
	bool bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage = true;

	/*
	Did we async load the required assets?
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = RoomManagement)
	bool bRoomDataLoaded = false;
	

	/*
	If 0, no cells will be marked as adjacent to a room when it generated
	If 1, then each surrounding cell of a room will be marked as adjacent
	to the room.
	If 2, then the surrounding cell AND the next one will marked as adjcent to the room.
	Continues so on.
	Used for spacing out rooms
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RoomManagement)
	int32 DepthToFlagAsAdjacentToRoom = 1;


	/*
	Representation of how filled the Dungeon is
	What percent of the MazeDungeon is filled by cells that do NOT have an ECellRoomStatus::NotPartOfRoom
	0 = Not filled
	100 = Filled.

	Updated whenever we generate a room.
	FinalAdjacentCount depends on 1) DepthToFlagAsAdjacentToRoom, bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage

	DungeonFilledPercentage = (float(MazeCellsDedicatedToRooms + FinalAdjacentCount))/(float(TotalNumberOfMazeCells)) * 100.0f;

	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Transient, Category = RoomManagement)
	float DungeonFilledPercentage = 0;



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient,Category = RoomManagement)
	TArray<ULevelStreamingDynamic*> RoomLevelInstancesToScale = {};

	//Index here matches index in RoomLevelInstancesToScale
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient,Category = RoomManagement)
	TArray<FVector> RoomScales = {};


	/*
	At what DungeonFilledPercentage do we stop attemptong to spawn additional rooms?
	Note: We calculate DungeonFilledPercentage AFTER a room is generated.
	If a DungeonFilledPercentage < SpawnBlockPercentage, then the room is allowed to be created. 
	Note that DungeonFilledPercentage > SpawnBlockPercentage when the last room raises the DungeonFilledPercentage over 
	this threshold.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RoomManagement)
	float SpawnBlockPercentage = 50.0f;

	/*
	How many times do we attempt to find a starting point for a room, if bReliablyFindStartCellsForRoom = false;
	Also used as a limit for how many times we want to try to find a point in the Dungeon, when given free reign over one or more axis
	for RoomForcedPoints in some FMazeRoom data. Free reign over a row (X), column (Y), or floor (Z) is denoted by passing in a negative value.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RoomManagement)
	int32 SpawnAttemptsPerRoomFastPicking = 5;
	

	/*
	I'll find a place to spawn a Room if I can. Note this doesn't guarantee all of your rooms will be spawned.
	I won't know if I picked a valid place for a paticular room that happens to block the spawning of other rooms.
	I.e this doesn't guarantee I find a valid configuration for all rooms, even if one exists. 
	Rather, given the space remaining after each room spawn, I will always
	find a valid space to spawn a room if it exists. 
	Downside: Speed
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RoomManagement)
	bool bReliablyFindStartCellsForRoom = true;


	/*
	FUNCTIONS
	*/

	/*
	Checks to make sure we don't have bad Dungeon Parameters,Sets seeds, ensures meshes have been assigned
	*/
	bool InitializeDungeonGeneration();

	//Door spawning not constructor safe
	void AddMazeFloorToWorld(const FMazeDungeonFloor& MazeFloor,bool bSpawnDoors = false);

	//Door spawning not constructor safe
	void AddMazeCellToWorld(const FMazeCell& InputCell,int32 ZLevel, bool bSpawnDoors = false);

	//bOnlySpawnGrid if true, don't use recursive backtracking, just represent how much space the dungeon will consume in the world
	void BuildMaze(bool bOnlySpawnGrid = false);

	/*
	returns where in the world a cell should
	*/
	FVector CalculateCellStartPoint(const FMazeCell& InputCell, int32 ZLevel = 0) const;

	FVector CalculateDungeonCenter() const;

	bool CarveFloorConnectionDown(int32 x, int32 y, int32 FloorNumber);

	/*
	Calls ClearInstances() on HISM components
	*/
	UFUNCTION(BlueprintCallable, Category = Basic)
	void ClearMazeDungeon();

	/*
	Given Room data,
	use RandomStream
	to pick a Random number tiles to take up in the X (row) and Y (column) Z (floor) directions.
	*/
	void DetermineRoomTileNumber(const FMazeRoom& InputRoomData, int32& RoomXTiles, int32& RoomYTiles, int32& RoomZTiles ) const;



	/*
	Generates the whole dungeon. 
	NOT Constructor safe
	*/
	UFUNCTION(BlueprintCallable, Category = Basic)
	void GenerateMazeDungeon();

	/*
	Constructor version. Doesn't add rooms, but leaves space where they would appear. No doors either.
	bOnlySpawnGrid = true, no recursive back tracking will be done on each floor, so we won't really have a maze.
	Use this to reduce the time it takes to complete the constructor, but still see how much space your dungeon will take in the world.
	Useful when you want to move the Actor around in the world, because the constructor will be called alot
	*/
	UFUNCTION(BlueprintCallable, Category = Basic)
	void GenerateMazeDungeonConstructor(bool bOnlySpawnGrid = false);


	/*
	Reads data in the MazeRoomData array, and iterates through it
	Automatically called by GenerateMazeDungeon()
	*/
	//UFUNCTION(BlueprintCallable, Category = Basic)
	void GenerateMazeRooms();

			/*
	Given Room data,we
	1) Pick the number of tiles we will dedicate to the room
	2) Flag cells in the maze whose position will be replaced by the room
	3) Stream in the Room
	4) Scale the room
	5) Bind OnLevelShown to RoomInstanceShown (for knowing when all the Level Instances representing a room are done)
	6) Calculating the scale of the room, by using how many tiles it will take up. We remember this association in the arrays RoomLevelInstancesToScale and RoomScales
	7) NewRoom->SetShouldBeLoaded(true); 

	bSuccess will be true if we successfully created a leve instance OR if we successfully marked a room when bOnlyMarkRoomsNoStreaming = true.
	bOnlyMarkRoomsNoStreaming = rooms won't be generated, but marked out on the Maze Grid
	bIgnoreRoomStatusRestriction = Passed into PickRoomStartTile()
	*/
	ULevelStreamingDynamic* GenerateRoom(const FMazeRoom& InputRoomData, const int32& RoomCopyNumber, bool& bSuccess, bool bOnlyMarkRoomsNoStreaming = false, bool bIgnoreRoomStatusRestriction = false);

	//Only check square cells
	bool IsWallDungeonEdge(int32 WallNumber, const FMazeCell& InputCell) const;

	//Reads the Room data and marks where rooms would be. Used to mark where rooms will appear for constructor time.
	//Like GenerateMazeRooms() except it doesn't create any instance to stream
	void MarkMazeRooms();





	/*
	Determine where we want a Room start.
	TO FIX. This is bugged
	RoomRows: room size in rows
	RoomColumns: room size in columns
	RoomFloors: Number of floors this room takes up
	RoomForcedPoints: X,Y,Z coordinates on MazeDungeon that we always want the room to appear
	RoomCopyNumber: Current copy we are trying to find a point for. Used to evaulate the index of RoomForcedPoints
	 bIgnoreRoomStatusRestriction = Allows you to place Rooms at a specific location even the room status of the cell in question isn't CellRoomStatus::NotPartOfRoom.
	 Only considered when passing in specific points
	*/
	FIntVector PickRoomStartTile(const int32 RoomRows, const int32 RoomColumns, const int32 RoomFloors, const TArray<FIntVector>& RoomForcedPoints, const int32 RoomCopyNumber,bool& bValidStartingPoint, bool bIgnoreRoomStatusRestriction = false);

	UFUNCTION(BlueprintCallable, Category = Loading)
	void ReadDataTable();



	ULevelStreamingDynamic* StreamInRoom(const FMazeRoom& InputRoomData, const FIntVector& StartingTile, bool& bSuccess,bool bShowDebugWarnings);


	//LOADING

	UFUNCTION(BlueprintCallable, Category = Loading)
	void LoadMazeRoomLevels();

	UFUNCTION()
	void PostLoadMazeLevels();

	//Room Scaling

	ADungeonLevelScriptActor* GetDungeonLevelScriptActor(ULevelStreamingDynamic* LevelInstance,bool& bSuccess, bool bShowDebugWarnings = false );

	UFUNCTION()
	void RoomInstanceShown();

	void ScaleRoomLevelInstances();
};
