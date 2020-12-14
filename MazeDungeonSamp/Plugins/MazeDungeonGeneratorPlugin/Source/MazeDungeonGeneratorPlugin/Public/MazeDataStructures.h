//Copyright Zachary Kolansky, 2020

#pragma once
#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Math/IntPoint.h"
#include "MazeDataStructures.generated.h"


/*
NOWALL : nothing on the side
ClosedWall : Blocked
OpenWall : WallWithADoorHole
DungeonDoor : InteractableDoor
*/
UENUM(BlueprintType)
enum class EWallStatus : uint8 {NOWALL,ClosedWall,OpenWall,DungeonDoor};

UENUM(BlueprintType)
enum class ECellRoomStatus : uint8 {NotPartOfRoom,PartOfRoom,AdjacentToRoom,FloorPassage};

/*
A single cell in a maze. Typically a Square in a grid. 
*/
USTRUCT(BlueprintType)
struct FMazeCell
{
	GENERATED_BODY()

    /*
    Visited by the generation algorithm?
    */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVisited = false;

    /*
    Location on the Grid
    */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Row = 0;

    /*
    Location on the Grid
    */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Column = 0;


    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ECellRoomStatus RoomStatus = ECellRoomStatus::NotPartOfRoom;

    /*
    Number of sides a cell has.
    Assumed to be an equilateral polygon
    I only support square cells right now. 
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumberOfSides = 4;

     /*
    Walls numbered 0 to n-1. n = number of sides
    0 = Positive X direction
    1 = Positive Y direction
    2 = continue circling shape, clockwise looking down from Z axis
    */


    /*
    For hashing
    */
    int32 ID = 0;


    //Emptied Upon construction
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<int32,EWallStatus> WallMap;

	FMazeCell()
	{   
        WallMap.Empty(0);
		for (int32 i = 0; i < NumberOfSides; i++)
        {
            WallMap.Add(i,EWallStatus::ClosedWall);
        }
	}
    FMazeCell(int32 InputRow, int32 InputColumn) //Simple constructor for generating points that we want to check are in a maze. 
    {
        Row = InputRow;
		Column = InputColumn;
    }
	FMazeCell(int32 InputRow, int32 InputColumn, int32 InputID, int32 InputNumberOfSides = 4, bool bInputVisited = false)
	{
		Row = InputRow;
		Column = InputColumn;
		bVisited = bInputVisited;
        NumberOfSides = InputNumberOfSides;
        ID = InputID;

        if(NumberOfSides <= 0)
        {
            NumberOfSides = 4;
        }

        for (int32 i = 0; i < NumberOfSides; i++)
        {
            WallMap.Add(i,EWallStatus::ClosedWall);
        }


	
	}
    bool ChangeWallStatus(int32 WallNumber, EWallStatus NewWallStatus )
    {
        if(WallNumber < 0 || WallNumber >= NumberOfSides)
        {
            return false;
        }
        WallMap.Add(WallNumber,NewWallStatus);
        return true;
    }
    int32 GetOppositeWall(int32 WallNumber)
    {
        if(NumberOfSides == 0 || WallNumber < 0 || WallNumber >= NumberOfSides)
        {
            return -1; //No idea 
        }
        return (WallNumber + NumberOfSides/2) % NumberOfSides;

    }
    FORCEINLINE bool operator==(const FMazeCell &Other) const 
    {
        if(Row == Other.Row && Column == Other.Column) 
        {
            return true;
        }
        return false;
    }
    FORCEINLINE bool operator<(const FMazeCell &Other) const
    {
        if (ID < Other.ID) 
        {
            return true;
        }
        return false;
    }

    friend FORCEINLINE uint32 GetTypeHash(const FMazeCell& Other)
    {
        return GetTypeHash(Other.ID);
    }
    
};

/*
A Grid that we can alter to make a maze. 
Contains methods relating to finding adjacent FMazeCell objects,
Changing FMazeCell objects, and testing if FMazeCell objects are on 
the grid.
*/
struct FMazeDungeon
{
	int32 Rows = 0;
	int32 Columns = 0;

    int32 NumberOfSidesPerCell=4;

	TArray< TArray<FMazeCell> > Grid;

    TArray<FMazeCell> RoomCells = {}; //Cells that were flagged as ECellRoomStatus::PartOfRoom. Used to manage when we build doors

	FMazeDungeon()
	{

	}
	FMazeDungeon(int32 InputRows, int32 InputColumns, int32 InputNumberOfSidesPerCell = 4)
	{
		if(InputRows < 0)
        {
            Rows = 0;
        }
        if(InputColumns < 0)
        {
            Columns = 0;
        }
        if(InputNumberOfSidesPerCell < 4)
        {
            NumberOfSidesPerCell = 4;
        }
        
        int32 CellsGenerated = 0;
        Rows = InputRows;
		Columns = InputColumns;
		for (int32 r = 0; r < Rows; r++) 
		{
			TArray<FMazeCell> ListRow = {};
			for (int32 c = 0; c < Columns; c++)
			{
				FMazeCell Cell = FMazeCell(r,c,CellsGenerated,InputNumberOfSidesPerCell);
				ListRow.Add(Cell);
                CellsGenerated++;
			}
			Grid.Add(ListRow);
		}
	}
    /*
    Is Cell within the bounds of the maze?
    */

    bool IsCellInBounds(const FMazeCell& TestCell) const
    {
        if(TestCell.Row < 0 || TestCell.Column < 0 || TestCell.Row >= Rows || TestCell.Column >= Columns)
        {
            return false;
        }
        return true;
    }
    bool IsPointInBounds(int32 Row, int32 Column) const
    {
        if(Row < 0 || Column < 0 || Row >= Rows || Column >= Columns)
        {
            return false;
        }
        return true;
    }
    bool IsValidRoomPointArray(const TArray<FMazeCell>& RoomPointArray) const //Array of the corners of the room.
    {
        for(FMazeCell RoomCorner : RoomPointArray )
        {
            if(!IsCellInBounds(RoomCorner)) //If a RoomCorner cell is out of bounds, then the room is out of bounds.
            {
                return false;
            }
        }
        return true;
    }
    /*
    Changes the given CellToChange
    If the cell is in bounds of the grid, use its Row,Column to look up the cell in the grid and propogate changes to the grid.
    */
	void ChangeCellState(FMazeCell& CellToChange, int32 WallNumberToChange, EWallStatus NewWallStatus, bool bVisitCell = true)
	{
        if(IsCellInBounds(CellToChange))
        {   
            if(bVisitCell)
            {
                CellToChange.bVisited = true;
                Grid[CellToChange.Row][CellToChange.Column].bVisited = true;
            }
            CellToChange.ChangeWallStatus(WallNumberToChange,NewWallStatus);
            Grid[CellToChange.Row][CellToChange.Column].ChangeWallStatus(WallNumberToChange,NewWallStatus);
        }
        
	}
    /*
    Changes the given CellToChange
    If the cell is in bounds of the grid, use its Row,Column to look up the cell in the grid and propogate changes to the grid.
    */
	void ChangeCellRoomStatus(FMazeCell& CellToChange, ECellRoomStatus NewRoomStatus)
	{	
        CellToChange.RoomStatus = NewRoomStatus;
        if(IsCellInBounds(CellToChange))
        {
            Grid[CellToChange.Row][CellToChange.Column].RoomStatus = NewRoomStatus;

            if(NewRoomStatus == ECellRoomStatus::PartOfRoom)
            {
                RoomCells.Add(Grid[CellToChange.Row][CellToChange.Column]);
            }
        }

	}
    void ChangeCellRoomStatusByIndex(int32 CellRow, int32 CellColumn,ECellRoomStatus NewRoomStatus, bool bAddCellsToRoomList = true)
    {
        if(IsPointInBounds(CellRow,CellColumn))
        {
            Grid[CellRow][CellColumn].RoomStatus = NewRoomStatus;
        }

        if(NewRoomStatus == ECellRoomStatus::PartOfRoom && bAddCellsToRoomList)
        {
            RoomCells.Add(Grid[CellRow][CellColumn]);
        }
    }
    /*
    RowTilesNeeded,ColumnTilesNeeded are how many tiles in total a Room will need.
    A Room that takes up a 1x1 needs RowTilesNeeded = 1, ColumnTilesNeeded = 1 to be flagged properly
    */
    void FlagCells(const FMazeCell& StartingCell, const int32 RowTilesNeeded,const int32 ColumnTilesNeeded, ECellRoomStatus NewRoomStatus)
    {
        int32 InitialColumn = StartingCell.Column;
        int32 InitialRow = StartingCell.Row;

        int32 EndColumn = InitialColumn+ColumnTilesNeeded; //Note, EndRow/EndColumn isn't included in the Room. Excluded by < in for loop
        int32 EndRow = InitialRow+RowTilesNeeded;


        for (int32 r = InitialRow; r < EndRow; r++)
        {
            for (int32 c = InitialColumn; c < EndColumn; c++)
            {
                ChangeCellRoomStatusByIndex(r,c,NewRoomStatus);
            }
        }


    }
    /*
    Mark the room in a rectange starting from the starting cell.
    Mark the adjacentCells around the room with a thickness of buffer
    */
    void FlagRoomAndAdjacentCells(const FMazeCell& StartingCell, const int32 RowTilesNeeded,const int32 ColumnTilesNeeded, int32& NumberOfCellsFlaggedAsAdjacent, int32 Buffer = 1, bool bAddCellsToRoomList = true)
    {
        FMazeCell TotalStartingCell = FMazeCell(StartingCell.Row-Buffer,StartingCell.Column-Buffer);
        int32 TotalRowTilesNeeded = RowTilesNeeded + Buffer*2;
        int32 TotalColumnTilesNeeded = ColumnTilesNeeded + Buffer*2;

        for (int32 r = TotalStartingCell.Row; r < TotalStartingCell.Row + TotalRowTilesNeeded; r++)
        {
            for (int32 c = TotalStartingCell.Column; c < TotalStartingCell.Column + TotalColumnTilesNeeded; c++)
            {
                if( r >= StartingCell.Row && r < StartingCell.Row+RowTilesNeeded && c >= StartingCell.Column && c < StartingCell.Column + ColumnTilesNeeded && c >= 0)
                {
                    ChangeCellRoomStatusByIndex(r,c,ECellRoomStatus::PartOfRoom,bAddCellsToRoomList);
                }
                else
                {
                    if(IsPointInBounds(r,c))
                    {
                        if (Grid[r][c].RoomStatus != ECellRoomStatus::PartOfRoom) //if the proposed adjacent cell hasn't already been marked as a room...
                        {
                             ChangeCellRoomStatusByIndex(r,c,ECellRoomStatus::AdjacentToRoom);
                             NumberOfCellsFlaggedAsAdjacent++;
                        }
                    }
                    
                   
                }
                
            }
        }

    }
    /*
    Let q be the index in the output array.
    AdjacentWallNumbers array keeps track of which wall number on the StartingCell the FMazeCell AdjacentCells[q] is adjacent to.

    if bIncludeVisitedCells = true, we only check if the adjacent cell is valid
    bIncludeVisitedCells = false, the cell must be valid, and it must NOT have been visited before
    */
    TArray<FMazeCell> GetAllAdjacentCells(FMazeCell& StartingCell, TArray<int32>& AdjacentWallNumbers, bool bIncludeVisitedCells = false) const
    {
        TArray<FMazeCell> AdjacentCells = {};
        AdjacentWallNumbers.Empty();
        
        for(int32 i = 0; i < StartingCell.NumberOfSides; i++)
        {
            bool bValidCell = false;
            FMazeCell OutputCell = GetAdjacentCell(StartingCell,i,bValidCell);
            if(bValidCell && bIncludeVisitedCells)
            {
                AdjacentCells.Add(OutputCell);
                AdjacentWallNumbers.Add(i);
            }
            else if(bValidCell && OutputCell.bVisited == false)
            {
                AdjacentCells.Add(OutputCell);
                AdjacentWallNumbers.Add(i);
            }
        }
        return AdjacentCells;
    }
    FMazeCell GetAdjacentCell(FMazeCell& StartingCell, int32 WallNumber, bool& bValidCell ) const
    {
        FMazeCell OutputCell = FMazeCell();
        //Need a dummy Output for cases when there is no adjacent cell

        int32 AdjacentRow = 0;
        int32 AdjacentColumn = 0;

        if(WallNumber < 0 || WallNumber > StartingCell.NumberOfSides)
        {
            bValidCell = false;
            return OutputCell;
        }
        bool bContinue = true; //Keep going with the method?

        if(StartingCell.NumberOfSides == 4) 
        {
            switch (WallNumber)
            {
            case(0): //forward
                AdjacentRow = StartingCell.Row + 1; //(0,0 lower left, Cells in maze generated forward)
                AdjacentColumn = StartingCell.Column;
                break;
            case(1): //right
                AdjacentRow = StartingCell.Row;
                AdjacentColumn = StartingCell.Column+1; //Inverted
                break;
            case(2):// down
                AdjacentRow = StartingCell.Row-1;
                AdjacentColumn = StartingCell.Column;
                break;
            case(3): //left
                AdjacentRow = StartingCell.Row;
                AdjacentColumn = StartingCell.Column-1; //inverted
                break;
            default:
                bContinue = false;
                //No idea what the hell you want, so I give you an invalid cell.
                break;
            }
        }
        else //TODO. Consider Hexagonal cells
        {
            bContinue = false;
            /*
            Forward 0, Backward = 3
            if Column Even, Right = 2. Column Odd, Right = 1
            */


        }

        if(!bContinue)
        {
            bValidCell = false;
            return OutputCell;
        }
    
        /*
        Assign the AdjacentRow and AdjacentColumn to the dummy
        cell so we have something to test
        */
        OutputCell.Row = AdjacentRow;
        OutputCell.Column = AdjacentColumn;
        if(!IsCellInBounds(OutputCell)) 
        {
            bValidCell = false;
            return OutputCell;
        }
        /*
        If we reach this point, the AdjacentColumn and AdjacentRow are in bounds of the grid
        */
        bValidCell = true;
        return Grid[AdjacentRow][AdjacentColumn];


    }
    /*
    RoomRows How many tiles in a given row a room needs to spawn. (RoomXTiles)
    RoomColumns How many tiles in a give column a room needs to spawn (RoomYTiles)

    From the InitialCell, Rooms generate from the zero direction (Positive X on 4 square) and the one direction. (Positive 1 on a square)
    */
    TArray<FMazeCell> GetValidRoomStartingPointCells (int32 RoomRows, int32 RoomColumns) const
    {
        TArray<FMazeCell> ValidMazeCells = {};
       
        if(Rows <= 1 || Columns <= 1 || RoomRows >=Rows || RoomColumns >= Columns) //If maze is too small or Room too big
        {
            return ValidMazeCells; //No room cells will be exposed to the edge.
        }
        
        
        /*
        Highest number index in the maze that
        */
        int32 MaxRowNumber = Rows-RoomRows;
        int32 MaxColumnNumber = Columns-RoomColumns;

        for (int32 r = 1; r < MaxRowNumber; r++) 
		{
			for (int32 c = 1; c < MaxColumnNumber; c++)
			{
                const FMazeCell& Cell = Grid[r][c];  //Lower left
                if(IsPointInBounds(r+RoomRows-1,c+RoomColumns-1)) //if the max possible point a room will grow into is on the grid. Max point of a 1x1 room is the starting point.
                {
                    const FMazeCell& MaxPoint = Grid[r+RoomRows-1][c+RoomColumns-1]; //UpperRight
                    const FMazeCell& MaxRow = Grid[r+RoomRows-1][c]; //UpperLeft
                    const FMazeCell& MaxCol = Grid[r][c+RoomColumns-1]; //Lower right

                    if(Cell.RoomStatus == ECellRoomStatus::NotPartOfRoom && MaxPoint.RoomStatus == ECellRoomStatus::NotPartOfRoom && MaxRow.RoomStatus == ECellRoomStatus::NotPartOfRoom && MaxCol.RoomStatus == ECellRoomStatus::NotPartOfRoom)
                    {
                        ValidMazeCells.Add(Cell);
                    }
                }
                
			}
		}


        return ValidMazeCells;


    }
    void SetWallsAdjacentToRoomCellsAsDoor() //Call after generated all rooms
    {
        for (FMazeCell Cell : RoomCells)
        {
            for (int32 n = 0; n < NumberOfSidesPerCell; n++)
            {
                bool bValidCell = true;
                FMazeCell AdjCell = GetAdjacentCell(Cell,n,bValidCell);
                if(!bValidCell || AdjCell.RoomStatus == ECellRoomStatus::PartOfRoom)
                {
                    continue; //Don't want a cell outside the grid, Don't want a cell that is part of a room
                }
                
                
                int32 OppositeWallNumber = AdjCell.GetOppositeWall(n); //Wall that faces toward the room cell in question
                if(AdjCell.WallMap[OppositeWallNumber] != EWallStatus::ClosedWall )
                {
                    ChangeCellState(AdjCell,OppositeWallNumber,EWallStatus::DungeonDoor,false);
                }
                

            }
        }
    }

};


/*
All the Data we need to spawn a Room into FMazeDungeon. Effectively carving the dungeon
*/
USTRUCT(BlueprintType)
struct FMazeRoom : public FTableRowBase
{

    GENERATED_BODY()

    /*
    Reference to Level object. Note that we want the floor of the room to
    be positioned at 0,0,0. No walls are necessary as it is going to be taking the place of
    N cells.
    NOTE: Async load this asset before use.
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr< UWorld > RoomLevel;

    /*
    From the edge of the room at (0,0,0) to the farthest reaching point on
    the X axis. (X,0,0)
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RoomX = 400.0f;

    /*
    From the edge of the room at (0,0,0) to the farthest reaching point on
    the Y axis. (0,Y,0)
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RoomY = 400.0f;

    /*
    From the edge of the room at (0,0,0) to the farthest reaching point on
    the Z axis. (0,0,Z)
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RoomZ = 400.0f;

    /*
    Name denoting the type of room we want the level to respresent
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName RoomType = FName("");

    /*
    Number of this RoomLevel we want to create instances of.
    Each instance will have its own number of tiles. 
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 NumberOfCopies = 1;

    /*
    Minimum Amount Of Tiles we want to take in the X direction. (Rows)
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MinimumXTiles = 1;

    /*
    Maximum Amount Of Tiles we want to take in the X direction. (Rows)
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumXTiles = 1;

    /*
    Minimum Amount Of Tiles we want to take in the Y direction. (Columns)
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MinimumYTiles = 1;

    /*
    Maximum Amount Of Tiles we want to take in the Y direction. (Columns)
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumYTiles = 1;


    /*
    Minimum Amount Of Floors we will use
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MinimumZTiles = 1;

    /*
    Maximum Amount Of Floors we will use
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumZTiles = 1;


    /*
    If this is true, the final transform will take the Dungeon's Z tile height into account. 
    If false, calculations will ignore Z scaling.
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bScaleRoomToUsedFloorHeight = false; 

    /*
    If this is true, then rooms can only be 1x1, 2x2, 3x3 etc
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bEnsureRoomIsSquareXY = false;

    /*
    X represents the Row
    Y represents the Column
    Use these points instead of a picking a place randomly.
    If this point is not available, then a random one will be selected.
    Each index corresponds to the location of the n-1th copy of the room, meaning
    Index 0 would be the location of the first copy.
    Setting X,Y, or Z (Row,Column,or Floor) to -1 lets the generator decide that value, while abiding by given parameters.
    Ex. (-1,-1,3) means that the given room can be anywhere on fourth floor. (0 is the bottom floor) 
    Note that if a given point isn't valid for a room, the room will try to spawn anywhere. 
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FIntVector> ForceRoomLocations = {};

    
    FMazeRoom()
    {

    }

    /*
    Returns a FVector, so the RoomLevel is scaled to fit a hole in FMazeDungeon appropiately. 

    Dungeon$TileSize = Tile size of the dungeon in a given axis. 
    XTiles = tiles to use in the X direction.
    YTiles = tiles to use in the Y direction
    ZTiles = tiles to use in the Z direction (Floors)

    bValidScale= out parameter to determine if the returned transform is valid.
    only false if any of the input parameters is less than or equal to zero.
    */
    FVector CalculateRoomScale(float DungeonXTileSize,float DungeonYTileSize, float DungeonZTileSize, int32 XTiles, int32 YTiles, int32 ZTiles, bool& bValidScale) const
    {
        if(DungeonXTileSize <= 0 || DungeonYTileSize <= 0 || DungeonZTileSize <= 0 || XTiles <= 0 || YTiles <= 0  || ZTiles <= 0)
        {
            bValidScale = false;
            return FVector();
        }

        bValidScale = true;
        float DungeonTotalX = DungeonXTileSize*XTiles;
        float DungeonTotalY = DungeonYTileSize*YTiles;
        
        float DungeonXScale = DungeonTotalX/RoomX;
        float DungeonYScale = DungeonTotalY/RoomY;
        float DungeonZScale = 1.0f;


        if(bScaleRoomToUsedFloorHeight)
        {
            float DungeonTotalZ = DungeonZTileSize*ZTiles;
            DungeonZScale = DungeonTotalZ/RoomZ;
        }

        return FVector(DungeonXScale,DungeonYScale,DungeonZScale);

    }
};


/*
All the data we need to represent one layer of the whole Dungeon
*/
struct FMazeDungeonFloor
{
    //GENERATED_BODY()

    FMazeDungeon Maze;

    int32 FloorNumber = 1;
    
    TArray<FMazeCell> Stack = {};
    
    int32 MazeOpenness = 10;


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = RandomSeed)
	FRandomStream DungeonRandomStream;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RandomSeed)
	FName DungeonRandomSeed = FName("");



    /*
    Methods to port over. 
    PickRandomStartingCell()
    RecursivelyGenerateMaze()
    OpenMazeDungeon()
    */

    FMazeDungeonFloor()
    {

    }
    FMazeDungeonFloor(int32 FloorRows,int32 FloorColumns, int32 InputFloorNumber, bool bGenerateNewRandomSeed = true)
    {
        if(FloorRows < 1 || FloorColumns < 1)
        {
            FloorRows = 2;
            FloorColumns = 2;
        }
        FloorNumber = InputFloorNumber;
        Maze = FMazeDungeon(FloorRows,FloorColumns);

        if(bGenerateNewRandomSeed)
        {
            DungeonRandomStream.GenerateNewSeed();
	

		    DungeonRandomSeed = FName(*FString::FromInt(DungeonRandomStream.GetInitialSeed()));
		
        }

    }
    FMazeDungeonFloor(int32 FloorRows,int32 FloorColumns, int32 InputFloorNumber,FName InputDungeonRandomSeed)
    {
        if(FloorRows < 1 || FloorColumns < 1)
        {
            FloorRows = 2;
            FloorColumns = 2;
        }
        FloorNumber = InputFloorNumber;
        Maze = FMazeDungeon(FloorRows,FloorColumns);
        DungeonRandomSeed = InputDungeonRandomSeed;
    

        DungeonRandomStream.Initialize(DungeonRandomSeed);
	
    }
    FMazeCell PickRandomStartingCell() const
    {
        int32 RandomRow = DungeonRandomStream.RandRange(0,Maze.Rows-1);
	    int32 RandomColumn = DungeonRandomStream.RandRange(0,Maze.Columns-1);
	    return Maze.Grid[RandomRow][RandomColumn];
    }
    void RecursivelyGenerateMaze(FMazeCell& StartingCell) //Use recursive back tracking
    {
        TArray<int32> AdjacentWallNumbers = {};
        TArray<FMazeCell> AdjacentCells = Maze.GetAllAdjacentCells(StartingCell,AdjacentWallNumbers);

        int32 NumberOfAdjacentCells = AdjacentCells.Num();

        if(NumberOfAdjacentCells > 0) 
        {
            int32 RandomIndex = DungeonRandomStream.RandRange(0,NumberOfAdjacentCells-1);
            FMazeCell RandomNotVisitedCell = AdjacentCells[RandomIndex];
            int32 AdjacentWallOnStartingCell = AdjacentWallNumbers[RandomIndex];
            int32 WallOnConnectingCell = StartingCell.GetOppositeWall(AdjacentWallOnStartingCell);//We assume the grid is made of tiles with the same number of sides

            Maze.ChangeCellState(StartingCell,AdjacentWallOnStartingCell,EWallStatus::NOWALL,true); 
            Maze.ChangeCellState(RandomNotVisitedCell,WallOnConnectingCell,EWallStatus::NOWALL,true);

            Stack.Add(RandomNotVisitedCell);
            RecursivelyGenerateMaze(RandomNotVisitedCell);

        }
        else //Cell does not have any valid adjacent cells.
        {
            Stack.Pop(true); //Remove this cell from the array
            if(Stack.Num() < 1)
            {
                return; //Stack is empty, we are done.
            }
            else
            {
                RecursivelyGenerateMaze(Stack[Stack.Num()-1]);
            }
            
        }
        
    }
    //Change the wall in some amount of cells to be EWallStatus::OpenWall
    void OpenMazeFloor()
    {
        if(MazeOpenness <= 0)
        {
            return;
        }
        int32 NumberOfCellWalls = 4; //Maybe one day I'll consider mazes with a hexagonal cell. 
        int32 MaxCellWallNumber = NumberOfCellWalls-1;

        //Don't include the edges of the maze. Don't want holes in the edges of the dungeon!
        for (int32 r = 1; r < Maze.Rows-1;r++)
        {
            for (int32 c = 1; c < Maze.Columns-1;c++)
            {
                int32 RandomNumber = DungeonRandomStream.RandRange(0,100);
                int32 RandomSide = DungeonRandomStream.RandRange(0,MaxCellWallNumber); 
                if(MazeOpenness >= RandomNumber)
                {
                    FMazeCell CurrentCell = Maze.Grid[r][c];
                    if(CurrentCell.WallMap[RandomSide] == EWallStatus::NOWALL)
                    {
                        continue;
                    }

                    int32 OppositeSide = CurrentCell.GetOppositeWall(RandomSide);
                    bool bValidCell = false;
                    FMazeCell AdjacentCell = Maze.GetAdjacentCell(CurrentCell,RandomSide,bValidCell);
                    if(bValidCell)
                    {
                        Maze.ChangeCellState(CurrentCell,RandomSide,EWallStatus::OpenWall,false);
                        Maze.ChangeCellState(AdjacentCell,OppositeSide,EWallStatus::OpenWall,false);
                    }
                    
                }
            }
        }
        
    }


    void Generate()
    {
        FMazeCell StartingCell = PickRandomStartingCell();
	    Stack.Empty();
	    Stack.Add(StartingCell);

	    RecursivelyGenerateMaze(StartingCell);
        Stack.Empty();
    }

};




/*
struct contains the valid data we want to manipulate to control how the Dungeon changes as it levels up
Meant to be used as the value of a TMap, with the key being the DungeonLevel (as an integer)
*/
/*
USTRUCT(BlueprintType)
struct FDungeonLevel
{
    GENERATED_BODY()

    
    //Data table must be a type FMazeRoom
    //This data table defines what rooms will be present in the dungeon at a given level.
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* DungeonMazeRooms = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 DungeonRows = 5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 DungeonColumns = 5;

    FDungeonLevel()
    {

    }
};
*/