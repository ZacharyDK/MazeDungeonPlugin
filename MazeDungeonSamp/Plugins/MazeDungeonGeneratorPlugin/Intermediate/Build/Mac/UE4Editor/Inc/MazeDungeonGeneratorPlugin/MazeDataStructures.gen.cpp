// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeDungeonGeneratorPlugin/Public/MazeDataStructures.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeDataStructures() {}
// Cross Module References
	MAZEDUNGEONGENERATORPLUGIN_API UEnum* Z_Construct_UEnum_MazeDungeonGeneratorPlugin_ECellRoomStatus();
	UPackage* Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
	MAZEDUNGEONGENERATORPLUGIN_API UEnum* Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EWallStatus();
	MAZEDUNGEONGENERATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMazeRoom();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MAZEDUNGEONGENERATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMazeCell();
// End Cross Module References
	static UEnum* ECellRoomStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MazeDungeonGeneratorPlugin_ECellRoomStatus, Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin(), TEXT("ECellRoomStatus"));
		}
		return Singleton;
	}
	template<> MAZEDUNGEONGENERATORPLUGIN_API UEnum* StaticEnum<ECellRoomStatus>()
	{
		return ECellRoomStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECellRoomStatus(ECellRoomStatus_StaticEnum, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("ECellRoomStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MazeDungeonGeneratorPlugin_ECellRoomStatus_Hash() { return 44200764U; }
	UEnum* Z_Construct_UEnum_MazeDungeonGeneratorPlugin_ECellRoomStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECellRoomStatus"), 0, Get_Z_Construct_UEnum_MazeDungeonGeneratorPlugin_ECellRoomStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECellRoomStatus::NotPartOfRoom", (int64)ECellRoomStatus::NotPartOfRoom },
				{ "ECellRoomStatus::PartOfRoom", (int64)ECellRoomStatus::PartOfRoom },
				{ "ECellRoomStatus::AdjacentToRoom", (int64)ECellRoomStatus::AdjacentToRoom },
				{ "ECellRoomStatus::FloorPassage", (int64)ECellRoomStatus::FloorPassage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AdjacentToRoom.Name", "ECellRoomStatus::AdjacentToRoom" },
				{ "BlueprintType", "true" },
				{ "FloorPassage.Name", "ECellRoomStatus::FloorPassage" },
				{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
				{ "NotPartOfRoom.Name", "ECellRoomStatus::NotPartOfRoom" },
				{ "PartOfRoom.Name", "ECellRoomStatus::PartOfRoom" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
				nullptr,
				"ECellRoomStatus",
				"ECellRoomStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWallStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EWallStatus, Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin(), TEXT("EWallStatus"));
		}
		return Singleton;
	}
	template<> MAZEDUNGEONGENERATORPLUGIN_API UEnum* StaticEnum<EWallStatus>()
	{
		return EWallStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWallStatus(EWallStatus_StaticEnum, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("EWallStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EWallStatus_Hash() { return 3236479931U; }
	UEnum* Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EWallStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWallStatus"), 0, Get_Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EWallStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWallStatus::NOWALL", (int64)EWallStatus::NOWALL },
				{ "EWallStatus::ClosedWall", (int64)EWallStatus::ClosedWall },
				{ "EWallStatus::OpenWall", (int64)EWallStatus::OpenWall },
				{ "EWallStatus::DungeonDoor", (int64)EWallStatus::DungeonDoor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClosedWall.Name", "EWallStatus::ClosedWall" },
				{ "Comment", "/*\nNOWALL : nothing on the side\nClosedWall : Blocked\nOpenWall : WallWithADoorHole\nDungeonDoor : InteractableDoor\n*/" },
				{ "DungeonDoor.Name", "EWallStatus::DungeonDoor" },
				{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
				{ "NOWALL.Name", "EWallStatus::NOWALL" },
				{ "OpenWall.Name", "EWallStatus::OpenWall" },
				{ "ToolTip", "NOWALL : nothing on the side\nClosedWall : Blocked\nOpenWall : WallWithADoorHole\nDungeonDoor : InteractableDoor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
				nullptr,
				"EWallStatus",
				"EWallStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMazeRoom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAZEDUNGEONGENERATORPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMazeRoom_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMazeRoom, Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin(), TEXT("MazeRoom"), sizeof(FMazeRoom), Get_Z_Construct_UScriptStruct_FMazeRoom_Hash());
	}
	return Singleton;
}
template<> MAZEDUNGEONGENERATORPLUGIN_API UScriptStruct* StaticStruct<FMazeRoom>()
{
	return FMazeRoom::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMazeRoom(FMazeRoom::StaticStruct, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("MazeRoom"), false, nullptr, nullptr);
static struct FScriptStruct_MazeDungeonGeneratorPlugin_StaticRegisterNativesFMazeRoom
{
	FScriptStruct_MazeDungeonGeneratorPlugin_StaticRegisterNativesFMazeRoom()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MazeRoom")),new UScriptStruct::TCppStructOps<FMazeRoom>);
	}
} ScriptStruct_MazeDungeonGeneratorPlugin_StaticRegisterNativesFMazeRoom;
	struct Z_Construct_UScriptStruct_FMazeRoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceRoomLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForceRoomLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceRoomLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnsureRoomIsSquareXY_MetaData[];
#endif
		static void NewProp_bEnsureRoomIsSquareXY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnsureRoomIsSquareXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleRoomToUsedFloorHeight_MetaData[];
#endif
		static void NewProp_bScaleRoomToUsedFloorHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleRoomToUsedFloorHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumZTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumZTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumZTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumZTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumYTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumYTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumYTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumYTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumXTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumXTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumXTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumXTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCopies_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCopies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RoomType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoomZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoomY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoomX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RoomLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nAll the Data we need to spawn a Room into FMazeDungeon. Effectively carving the dungeon\n*/" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "All the Data we need to spawn a Room into FMazeDungeon. Effectively carving the dungeon" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMazeRoom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMazeRoom>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_ForceRoomLocations_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    X represents the Row\n    Y represents the Column\n    Use these points instead of a picking a place randomly.\n    If this point is not available, then a random one will be selected.\n    Each index corresponds to the location of the n-1th copy of the room, meaning\n    Index 0 would be the location of the first copy.\n    Setting X,Y, or Z (Row,Column,or Floor) to -1 lets the generator decide that value, while abiding by given parameters.\n    Ex. (-1,-1,3) means that the given room can be anywhere on fourth floor. (0 is the bottom floor) \n    Note that if a given point isn't valid for a room, the room will try to spawn anywhere. \n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "X represents the Row\nY represents the Column\nUse these points instead of a picking a place randomly.\nIf this point is not available, then a random one will be selected.\nEach index corresponds to the location of the n-1th copy of the room, meaning\nIndex 0 would be the location of the first copy.\nSetting X,Y, or Z (Row,Column,or Floor) to -1 lets the generator decide that value, while abiding by given parameters.\nEx. (-1,-1,3) means that the given room can be anywhere on fourth floor. (0 is the bottom floor)\nNote that if a given point isn't valid for a room, the room will try to spawn anywhere." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_ForceRoomLocations = { "ForceRoomLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, ForceRoomLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_ForceRoomLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_ForceRoomLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_ForceRoomLocations_Inner = { "ForceRoomLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bEnsureRoomIsSquareXY_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    If this is true, then rooms can only be 1x1, 2x2, 3x3 etc\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "If this is true, then rooms can only be 1x1, 2x2, 3x3 etc" },
	};
#endif
	void Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bEnsureRoomIsSquareXY_SetBit(void* Obj)
	{
		((FMazeRoom*)Obj)->bEnsureRoomIsSquareXY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bEnsureRoomIsSquareXY = { "bEnsureRoomIsSquareXY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMazeRoom), &Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bEnsureRoomIsSquareXY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bEnsureRoomIsSquareXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bEnsureRoomIsSquareXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bScaleRoomToUsedFloorHeight_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    If this is true, the final transform will take the Dungeon's Z tile height into account. \n    If false, calculations will ignore Z scaling.\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "If this is true, the final transform will take the Dungeon's Z tile height into account.\nIf false, calculations will ignore Z scaling." },
	};
#endif
	void Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bScaleRoomToUsedFloorHeight_SetBit(void* Obj)
	{
		((FMazeRoom*)Obj)->bScaleRoomToUsedFloorHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bScaleRoomToUsedFloorHeight = { "bScaleRoomToUsedFloorHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMazeRoom), &Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bScaleRoomToUsedFloorHeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bScaleRoomToUsedFloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bScaleRoomToUsedFloorHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumZTiles_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Maximum Amount Of Floors we will use\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Maximum Amount Of Floors we will use" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumZTiles = { "MaximumZTiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, MaximumZTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumZTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumZTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumZTiles_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Minimum Amount Of Floors we will use\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Minimum Amount Of Floors we will use" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumZTiles = { "MinimumZTiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, MinimumZTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumZTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumZTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumYTiles_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Maximum Amount Of Tiles we want to take in the Y direction. (Columns)\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Maximum Amount Of Tiles we want to take in the Y direction. (Columns)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumYTiles = { "MaximumYTiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, MaximumYTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumYTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumYTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumYTiles_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Minimum Amount Of Tiles we want to take in the Y direction. (Columns)\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Minimum Amount Of Tiles we want to take in the Y direction. (Columns)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumYTiles = { "MinimumYTiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, MinimumYTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumYTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumYTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumXTiles_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Maximum Amount Of Tiles we want to take in the X direction. (Rows)\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Maximum Amount Of Tiles we want to take in the X direction. (Rows)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumXTiles = { "MaximumXTiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, MaximumXTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumXTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumXTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumXTiles_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Minimum Amount Of Tiles we want to take in the X direction. (Rows)\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Minimum Amount Of Tiles we want to take in the X direction. (Rows)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumXTiles = { "MinimumXTiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, MinimumXTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumXTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumXTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_NumberOfCopies_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Number of this RoomLevel we want to create instances of.\n    Each instance will have its own number of tiles. \n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Number of this RoomLevel we want to create instances of.\nEach instance will have its own number of tiles." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_NumberOfCopies = { "NumberOfCopies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, NumberOfCopies), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_NumberOfCopies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_NumberOfCopies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomType_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Name denoting the type of room we want the level to respresent\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Name denoting the type of room we want the level to respresent" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, RoomType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomZ_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    From the edge of the room at (0,0,0) to the farthest reaching point on\n    the Z axis. (0,0,Z)\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "From the edge of the room at (0,0,0) to the farthest reaching point on\nthe Z axis. (0,0,Z)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomZ = { "RoomZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, RoomZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomY_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    From the edge of the room at (0,0,0) to the farthest reaching point on\n    the Y axis. (0,Y,0)\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "From the edge of the room at (0,0,0) to the farthest reaching point on\nthe Y axis. (0,Y,0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomY = { "RoomY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, RoomY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomX_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    From the edge of the room at (0,0,0) to the farthest reaching point on\n    the X axis. (X,0,0)\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "From the edge of the room at (0,0,0) to the farthest reaching point on\nthe X axis. (X,0,0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomX = { "RoomX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, RoomX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomLevel_MetaData[] = {
		{ "Category", "MazeRoom" },
		{ "Comment", "/*\n    Reference to Level object. Note that we want the floor of the room to\n    be positioned at 0,0,0. No walls are necessary as it is going to be taking the place of\n    N cells.\n    NOTE: Async load this asset before use.\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Reference to Level object. Note that we want the floor of the room to\nbe positioned at 0,0,0. No walls are necessary as it is going to be taking the place of\nN cells.\nNOTE: Async load this asset before use." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeRoom, RoomLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMazeRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_ForceRoomLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_ForceRoomLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bEnsureRoomIsSquareXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_bScaleRoomToUsedFloorHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumZTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumZTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumYTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumYTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MaximumXTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_MinimumXTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_NumberOfCopies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeRoom_Statics::NewProp_RoomLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMazeRoom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MazeRoom",
		sizeof(FMazeRoom),
		alignof(FMazeRoom),
		Z_Construct_UScriptStruct_FMazeRoom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeRoom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeRoom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMazeRoom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMazeRoom_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MazeRoom"), sizeof(FMazeRoom), Get_Z_Construct_UScriptStruct_FMazeRoom_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMazeRoom_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMazeRoom_Hash() { return 1666339996U; }
class UScriptStruct* FMazeCell::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAZEDUNGEONGENERATORPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMazeCell_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMazeCell, Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin(), TEXT("MazeCell"), sizeof(FMazeCell), Get_Z_Construct_UScriptStruct_FMazeCell_Hash());
	}
	return Singleton;
}
template<> MAZEDUNGEONGENERATORPLUGIN_API UScriptStruct* StaticStruct<FMazeCell>()
{
	return FMazeCell::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMazeCell(FMazeCell::StaticStruct, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("MazeCell"), false, nullptr, nullptr);
static struct FScriptStruct_MazeDungeonGeneratorPlugin_StaticRegisterNativesFMazeCell
{
	FScriptStruct_MazeDungeonGeneratorPlugin_StaticRegisterNativesFMazeCell()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MazeCell")),new UScriptStruct::TCppStructOps<FMazeCell>);
	}
} ScriptStruct_MazeDungeonGeneratorPlugin_StaticRegisterNativesFMazeCell;
	struct Z_Construct_UScriptStruct_FMazeCell_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WallMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WallMap_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WallMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WallMap_ValueProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSides_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoomStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoomStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Column;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisited_MetaData[];
#endif
		static void NewProp_bVisited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisited;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nA single cell in a maze. Typically a Square in a grid. \n*/" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "A single cell in a maze. Typically a Square in a grid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMazeCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMazeCell>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_MetaData[] = {
		{ "Category", "MazeCell" },
		{ "Comment", "//Emptied Upon construction\n" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Emptied Upon construction" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap = { "WallMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeCell, WallMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_Key_KeyProp = { "WallMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_ValueProp = { "WallMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EWallStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_NumberOfSides_MetaData[] = {
		{ "Category", "MazeCell" },
		{ "Comment", "/*\n    Number of sides a cell has.\n    Assumed to be an equilateral polygon\n    I only support square cells right now. \n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Number of sides a cell has.\nAssumed to be an equilateral polygon\nI only support square cells right now." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_NumberOfSides = { "NumberOfSides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeCell, NumberOfSides), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_NumberOfSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_NumberOfSides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_RoomStatus_MetaData[] = {
		{ "Category", "MazeCell" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_RoomStatus = { "RoomStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeCell, RoomStatus), Z_Construct_UEnum_MazeDungeonGeneratorPlugin_ECellRoomStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_RoomStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_RoomStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_RoomStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "MazeCell" },
		{ "Comment", "/*\n    Location on the Grid\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Location on the Grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeCell, Column), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Column_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "MazeCell" },
		{ "Comment", "/*\n    Location on the Grid\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Location on the Grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeCell, Row), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited_MetaData[] = {
		{ "Category", "MazeCell" },
		{ "Comment", "/*\n    Visited by the generation algorithm?\n    */" },
		{ "ModuleRelativePath", "Public/MazeDataStructures.h" },
		{ "ToolTip", "Visited by the generation algorithm?" },
	};
#endif
	void Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited_SetBit(void* Obj)
	{
		((FMazeCell*)Obj)->bVisited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited = { "bVisited", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMazeCell), &Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMazeCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_WallMap_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_NumberOfSides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_RoomStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_RoomStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Column,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_Row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCell_Statics::NewProp_bVisited,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMazeCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
		nullptr,
		&NewStructOps,
		"MazeCell",
		sizeof(FMazeCell),
		alignof(FMazeCell),
		Z_Construct_UScriptStruct_FMazeCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMazeCell()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMazeCell_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MazeCell"), sizeof(FMazeCell), Get_Z_Construct_UScriptStruct_FMazeCell_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMazeCell_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMazeCell_Hash() { return 1915917486U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
