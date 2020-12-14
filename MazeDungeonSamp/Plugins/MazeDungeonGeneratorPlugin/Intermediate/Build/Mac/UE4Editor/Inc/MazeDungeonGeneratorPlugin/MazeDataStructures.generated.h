// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEDUNGEONGENERATORPLUGIN_MazeDataStructures_generated_h
#error "MazeDataStructures.generated.h already included, missing '#pragma once' in MazeDataStructures.h"
#endif
#define MAZEDUNGEONGENERATORPLUGIN_MazeDataStructures_generated_h

#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDataStructures_h_531_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeRoom_Statics; \
	MAZEDUNGEONGENERATORPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MAZEDUNGEONGENERATORPLUGIN_API UScriptStruct* StaticStruct<struct FMazeRoom>();

#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDataStructures_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeCell_Statics; \
	MAZEDUNGEONGENERATORPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MAZEDUNGEONGENERATORPLUGIN_API UScriptStruct* StaticStruct<struct FMazeCell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDataStructures_h


#define FOREACH_ENUM_ECELLROOMSTATUS(op) \
	op(ECellRoomStatus::NotPartOfRoom) \
	op(ECellRoomStatus::PartOfRoom) \
	op(ECellRoomStatus::AdjacentToRoom) \
	op(ECellRoomStatus::FloorPassage) 

enum class ECellRoomStatus : uint8;
template<> MAZEDUNGEONGENERATORPLUGIN_API UEnum* StaticEnum<ECellRoomStatus>();

#define FOREACH_ENUM_EWALLSTATUS(op) \
	op(EWallStatus::NOWALL) \
	op(EWallStatus::ClosedWall) \
	op(EWallStatus::OpenWall) \
	op(EWallStatus::DungeonDoor) 

enum class EWallStatus : uint8;
template<> MAZEDUNGEONGENERATORPLUGIN_API UEnum* StaticEnum<EWallStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
