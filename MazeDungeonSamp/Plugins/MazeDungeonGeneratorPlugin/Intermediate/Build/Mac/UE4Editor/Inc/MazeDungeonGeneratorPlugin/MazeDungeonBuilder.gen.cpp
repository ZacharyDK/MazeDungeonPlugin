// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeDungeonGeneratorPlugin/Public/MazeDungeonBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeDungeonBuilder() {}
// Cross Module References
	MAZEDUNGEONGENERATORPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
	MAZEDUNGEONGENERATORPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature();
	MAZEDUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_AMazeDungeonBuilder_NoRegister();
	MAZEDUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_AMazeDungeonBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MAZEDUNGEONGENERATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMazeRoom();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin, nullptr, "MazeLoadEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin, nullptr, "MazeGenerationEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMazeDungeonBuilder::execRoomInstanceShown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RoomInstanceShown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeDungeonBuilder::execPostLoadMazeLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadMazeLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeDungeonBuilder::execLoadMazeRoomLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMazeRoomLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeDungeonBuilder::execReadDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeDungeonBuilder::execGenerateMazeDungeonConstructor)
	{
		P_GET_UBOOL(Z_Param_bOnlySpawnGrid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMazeDungeonConstructor(Z_Param_bOnlySpawnGrid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeDungeonBuilder::execGenerateMazeDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMazeDungeon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMazeDungeonBuilder::execClearMazeDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMazeDungeon();
		P_NATIVE_END;
	}
	void AMazeDungeonBuilder::StaticRegisterNativesAMazeDungeonBuilder()
	{
		UClass* Class = AMazeDungeonBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMazeDungeon", &AMazeDungeonBuilder::execClearMazeDungeon },
			{ "GenerateMazeDungeon", &AMazeDungeonBuilder::execGenerateMazeDungeon },
			{ "GenerateMazeDungeonConstructor", &AMazeDungeonBuilder::execGenerateMazeDungeonConstructor },
			{ "LoadMazeRoomLevels", &AMazeDungeonBuilder::execLoadMazeRoomLevels },
			{ "PostLoadMazeLevels", &AMazeDungeonBuilder::execPostLoadMazeLevels },
			{ "ReadDataTable", &AMazeDungeonBuilder::execReadDataTable },
			{ "RoomInstanceShown", &AMazeDungeonBuilder::execRoomInstanceShown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Basic" },
		{ "Comment", "/*\n\x09""Calls ClearInstances() on HISM components\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Calls ClearInstances() on HISM components" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeDungeonBuilder, nullptr, "ClearMazeDungeon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Basic" },
		{ "Comment", "/*\n\x09Generates the whole dungeon. \n\x09NOT Constructor safe\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Generates the whole dungeon.\nNOT Constructor safe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeDungeonBuilder, nullptr, "GenerateMazeDungeon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics
	{
		struct MazeDungeonBuilder_eventGenerateMazeDungeonConstructor_Parms
		{
			bool bOnlySpawnGrid;
		};
		static void NewProp_bOnlySpawnGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlySpawnGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::NewProp_bOnlySpawnGrid_SetBit(void* Obj)
	{
		((MazeDungeonBuilder_eventGenerateMazeDungeonConstructor_Parms*)Obj)->bOnlySpawnGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::NewProp_bOnlySpawnGrid = { "bOnlySpawnGrid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeDungeonBuilder_eventGenerateMazeDungeonConstructor_Parms), &Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::NewProp_bOnlySpawnGrid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::NewProp_bOnlySpawnGrid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Basic" },
		{ "Comment", "/*\n\x09""Constructor version. Doesn't add rooms, but leaves space where they would appear. No doors either.\n\x09""bOnlySpawnGrid = true, no recursive back tracking will be done on each floor, so we won't really have a maze.\n\x09Use this to reduce the time it takes to complete the constructor, but still see how much space your dungeon will take in the world.\n\x09Useful when you want to move the Actor around in the world, because the constructor will be called alot\n\x09*/" },
		{ "CPP_Default_bOnlySpawnGrid", "false" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Constructor version. Doesn't add rooms, but leaves space where they would appear. No doors either.\nbOnlySpawnGrid = true, no recursive back tracking will be done on each floor, so we won't really have a maze.\nUse this to reduce the time it takes to complete the constructor, but still see how much space your dungeon will take in the world.\nUseful when you want to move the Actor around in the world, because the constructor will be called alot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeDungeonBuilder, nullptr, "GenerateMazeDungeonConstructor", nullptr, nullptr, sizeof(MazeDungeonBuilder_eventGenerateMazeDungeonConstructor_Parms), Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "Comment", "//LOADING\n" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "LOADING" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeDungeonBuilder, nullptr, "LoadMazeRoomLevels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeDungeonBuilder, nullptr, "PostLoadMazeLevels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeDungeonBuilder, nullptr, "ReadDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeDungeonBuilder, nullptr, "RoomInstanceShown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMazeDungeonBuilder_NoRegister()
	{
		return AMazeDungeonBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AMazeDungeonBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReliablyFindStartCellsForRoom_MetaData[];
#endif
		static void NewProp_bReliablyFindStartCellsForRoom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReliablyFindStartCellsForRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAttemptsPerRoomFastPicking_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnAttemptsPerRoomFastPicking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBlockPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnBlockPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomScales_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomScales;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomScales_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomLevelInstancesToScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomLevelInstancesToScale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomLevelInstancesToScale_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DungeonFilledPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DungeonFilledPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthToFlagAsAdjacentToRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DepthToFlagAsAdjacentToRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoomDataLoaded_MetaData[];
#endif
		static void NewProp_bRoomDataLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoomDataLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage_MetaData[];
#endif
		static void NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDataTableRead_MetaData[];
#endif
		static void NewProp_bDataTableRead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDataTableRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeRoomDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeRoomDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeRoomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MazeRoomData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MazeRoomData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeLevelsSoftPointers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MazeLevelsSoftPointers;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MazeLevelsSoftPointers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GlobalRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalRandomStream;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SeedList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeedList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateNewRandomSeeds_MetaData[];
#endif
		static void NewProp_bGenerateNewRandomSeeds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateNewRandomSeeds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StairLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StairLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfFloorPassagesPerFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfFloorPassagesPerFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOpenWallMeshForOpenWalls_MetaData[];
#endif
		static void NewProp_bUseOpenWallMeshForOpenWalls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOpenWallMeshForOpenWalls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStreamInLevelForFloorConnections_MetaData[];
#endif
		static void NewProp_bStreamInLevelForFloorConnections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStreamInLevelForFloorConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttemptToPlaceHolesToNextFloorOnEdge_MetaData[];
#endif
		static void NewProp_bAttemptToPlaceHolesToNextFloorOnEdge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttemptToPlaceHolesToNextFloorOnEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfRoomLevelInstancesCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfRoomLevelInstancesCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeRoomInstancesShown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MazeRoomInstancesShown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeCellsDedicatedToRooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MazeCellsDedicatedToRooms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeCellsAdjacentToRooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MazeCellsAdjacentToRooms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfMazeCellsNeededToCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfMazeCellsNeededToCreate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNumberOfMazeCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNumberOfMazeCells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DoorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorMeshSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorMeshSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitDoorsToRoomStartFloor_MetaData[];
#endif
		static void NewProp_bLimitDoorsToRoomStartFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitDoorsToRoomStartFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateDoors_MetaData[];
#endif
		static void NewProp_bGenerateDoors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateDoors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DungeonFloorZBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DungeonFloorZBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMeshSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallMeshSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMeshSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorMeshSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DungeonTileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DungeonTileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DungeonFloors_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DungeonFloors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DungeonColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DungeonColumns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DungeonRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DungeonRows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DungeonOpenness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DungeonOpenness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMazeInitializationPassed_MetaData[];
#endif
		static void NewProp_bMazeInitializationPassed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMazeInitializationPassed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugWarnings_MetaData[];
#endif
		static void NewProp_bDebugWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugWarnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StairLevelStreamTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StairLevelStreamTiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StairLevelStreamTiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialGenerationRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialGenerationRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialGenerationLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialGenerationLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenWallMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenWallMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosedWallMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClosedWallMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAsyncLoadMazeRoomDataFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAsyncLoadMazeRoomDataFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAsyncLoadMazeRoomDataInitialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAsyncLoadMazeRoomDataInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMazeGenerationStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMazeGenerationStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAllMazeCellsFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllMazeCellsFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAllMazeRoomsFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllMazeRoomsFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeDungeonBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMazeDungeonBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeDungeonBuilder_ClearMazeDungeon, "ClearMazeDungeon" }, // 1037254594
		{ &Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeon, "GenerateMazeDungeon" }, // 836227794
		{ &Z_Construct_UFunction_AMazeDungeonBuilder_GenerateMazeDungeonConstructor, "GenerateMazeDungeonConstructor" }, // 1828746052
		{ &Z_Construct_UFunction_AMazeDungeonBuilder_LoadMazeRoomLevels, "LoadMazeRoomLevels" }, // 2681286799
		{ &Z_Construct_UFunction_AMazeDungeonBuilder_PostLoadMazeLevels, "PostLoadMazeLevels" }, // 2400088536
		{ &Z_Construct_UFunction_AMazeDungeonBuilder_ReadDataTable, "ReadDataTable" }, // 444416836
		{ &Z_Construct_UFunction_AMazeDungeonBuilder_RoomInstanceShown, "RoomInstanceShown" }, // 3769076969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nThis class is responsible for generating a Maze, that can be carved into Rooms that are streamed in\n*/" },
		{ "HideCategories", "InstanceComp" },
		{ "IncludePath", "MazeDungeonBuilder.h" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "This class is responsible for generating a Maze, that can be carved into Rooms that are streamed in" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bReliablyFindStartCellsForRoom_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09I'll find a place to spawn a Room if I can. Note this doesn't guarantee all of your rooms will be spawned.\n\x09I won't know if I picked a valid place for a paticular room that happens to block the spawning of other rooms.\n\x09I.e this doesn't guarantee I find a valid configuration for all rooms, even if one exists. \n\x09Rather, given the space remaining after each room spawn, I will always\n\x09""find a valid space to spawn a room if it exists. \n\x09""Downside: Speed\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "I'll find a place to spawn a Room if I can. Note this doesn't guarantee all of your rooms will be spawned.\nI won't know if I picked a valid place for a paticular room that happens to block the spawning of other rooms.\nI.e this doesn't guarantee I find a valid configuration for all rooms, even if one exists.\nRather, given the space remaining after each room spawn, I will always\nfind a valid space to spawn a room if it exists.\nDownside: Speed" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bReliablyFindStartCellsForRoom_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bReliablyFindStartCellsForRoom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bReliablyFindStartCellsForRoom = { "bReliablyFindStartCellsForRoom", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bReliablyFindStartCellsForRoom_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bReliablyFindStartCellsForRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bReliablyFindStartCellsForRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnAttemptsPerRoomFastPicking_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09How many times do we attempt to find a starting point for a room, if bReliablyFindStartCellsForRoom = false;\n\x09""Also used as a limit for how many times we want to try to find a point in the Dungeon, when given free reign over one or more axis\n\x09""for RoomForcedPoints in some FMazeRoom data. Free reign over a row (X), column (Y), or floor (Z) is denoted by passing in a negative value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "How many times do we attempt to find a starting point for a room, if bReliablyFindStartCellsForRoom = false;\nAlso used as a limit for how many times we want to try to find a point in the Dungeon, when given free reign over one or more axis\nfor RoomForcedPoints in some FMazeRoom data. Free reign over a row (X), column (Y), or floor (Z) is denoted by passing in a negative value." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnAttemptsPerRoomFastPicking = { "SpawnAttemptsPerRoomFastPicking", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, SpawnAttemptsPerRoomFastPicking), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnAttemptsPerRoomFastPicking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnAttemptsPerRoomFastPicking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnBlockPercentage_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09""At what DungeonFilledPercentage do we stop attemptong to spawn additional rooms?\n\x09Note: We calculate DungeonFilledPercentage AFTER a room is generated.\n\x09If a DungeonFilledPercentage < SpawnBlockPercentage, then the room is allowed to be created. \n\x09Note that DungeonFilledPercentage > SpawnBlockPercentage when the last room raises the DungeonFilledPercentage over \n\x09this threshold.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "At what DungeonFilledPercentage do we stop attemptong to spawn additional rooms?\nNote: We calculate DungeonFilledPercentage AFTER a room is generated.\nIf a DungeonFilledPercentage < SpawnBlockPercentage, then the room is allowed to be created.\nNote that DungeonFilledPercentage > SpawnBlockPercentage when the last room raises the DungeonFilledPercentage over\nthis threshold." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnBlockPercentage = { "SpawnBlockPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, SpawnBlockPercentage), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnBlockPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnBlockPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomScales_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "//Index here matches index in RoomLevelInstancesToScale\n" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Index here matches index in RoomLevelInstancesToScale" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomScales = { "RoomScales", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, RoomScales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomScales_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomScales_Inner = { "RoomScales", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomLevelInstancesToScale_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomLevelInstancesToScale = { "RoomLevelInstancesToScale", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, RoomLevelInstancesToScale), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomLevelInstancesToScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomLevelInstancesToScale_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomLevelInstancesToScale_Inner = { "RoomLevelInstancesToScale", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFilledPercentage_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09Representation of how filled the Dungeon is\n\x09What percent of the MazeDungeon is filled by cells that do NOT have an ECellRoomStatus::NotPartOfRoom\n\x09""0 = Not filled\n\x09""100 = Filled.\n\n\x09Updated whenever we generate a room.\n\x09""FinalAdjacentCount depends on 1) DepthToFlagAsAdjacentToRoom, bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage\n\n\x09""DungeonFilledPercentage = (float(MazeCellsDedicatedToRooms + FinalAdjacentCount))/(float(TotalNumberOfMazeCells)) * 100.0f;\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Representation of how filled the Dungeon is\nWhat percent of the MazeDungeon is filled by cells that do NOT have an ECellRoomStatus::NotPartOfRoom\n0 = Not filled\n100 = Filled.\n\nUpdated whenever we generate a room.\nFinalAdjacentCount depends on 1) DepthToFlagAsAdjacentToRoom, bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage\n\nDungeonFilledPercentage = (float(MazeCellsDedicatedToRooms + FinalAdjacentCount))/(float(TotalNumberOfMazeCells)) * 100.0f;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFilledPercentage = { "DungeonFilledPercentage", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DungeonFilledPercentage), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFilledPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFilledPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DepthToFlagAsAdjacentToRoom_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09If 0, no cells will be marked as adjacent to a room when it generated\n\x09If 1, then each surrounding cell of a room will be marked as adjacent\n\x09to the room.\n\x09If 2, then the surrounding cell AND the next one will marked as adjcent to the room.\n\x09""Continues so on.\n\x09Used for spacing out rooms\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "If 0, no cells will be marked as adjacent to a room when it generated\nIf 1, then each surrounding cell of a room will be marked as adjacent\nto the room.\nIf 2, then the surrounding cell AND the next one will marked as adjcent to the room.\nContinues so on.\nUsed for spacing out rooms" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DepthToFlagAsAdjacentToRoom = { "DepthToFlagAsAdjacentToRoom", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DepthToFlagAsAdjacentToRoom), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DepthToFlagAsAdjacentToRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DepthToFlagAsAdjacentToRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bRoomDataLoaded_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09""Did we async load the required assets?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Did we async load the required assets?" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bRoomDataLoaded_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bRoomDataLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bRoomDataLoaded = { "bRoomDataLoaded", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bRoomDataLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bRoomDataLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bRoomDataLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09if false, only maze cells with ECellRoomStatus::PartOfRoom will be used to calculate.\n\x09If true, maze cells with a room status ECellRoomStatus::PartOfRoom and ECellRoomStatus::AdjacentToRoom contribute to DungeonFilledPercentage\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "if false, only maze cells with ECellRoomStatus::PartOfRoom will be used to calculate.\nIf true, maze cells with a room status ECellRoomStatus::PartOfRoom and ECellRoomStatus::AdjacentToRoom contribute to DungeonFilledPercentage" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage = { "bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDataTableRead_MetaData[] = {
		{ "Category", "RoomManagement" },
		{ "Comment", "/*\n\x09Has the data in MazeRoomDataTable been read into MazeRoomData?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Has the data in MazeRoomDataTable been read into MazeRoomData?" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDataTableRead_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bDataTableRead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDataTableRead = { "bDataTableRead", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDataTableRead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDataTableRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDataTableRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomDataTable_MetaData[] = {
		{ "Category", "RoomData" },
		{ "Comment", "/*\n\x09Order in this data table is the priority of which rooms will spawn first\n\x09This is default data table if we don't use Dungeon Levels, OR if the given data for a Dungeon level is NOT found.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Order in this data table is the priority of which rooms will spawn first\nThis is default data table if we don't use Dungeon Levels, OR if the given data for a Dungeon level is NOT found." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomDataTable = { "MazeRoomDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, MazeRoomDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomData_MetaData[] = {
		{ "Category", "RoomData" },
		{ "Comment", "/*\n\x09Read from data table. \n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Read from data table." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomData = { "MazeRoomData", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, MazeRoomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomData_Inner = { "MazeRoomData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMazeRoom, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeLevelsSoftPointers_MetaData[] = {
		{ "Category", "RoomData" },
		{ "Comment", "/*\n\x09Where we store all the TSoftObjectPtr from MazeRoomDataTable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Where we store all the TSoftObjectPtr from MazeRoomDataTable." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeLevelsSoftPointers = { "MazeLevelsSoftPointers", nullptr, (EPropertyFlags)0x0014000000030015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, MazeLevelsSoftPointers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeLevelsSoftPointers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeLevelsSoftPointers_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeLevelsSoftPointers_Inner = { "MazeLevelsSoftPointers", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomSeed_MetaData[] = {
		{ "Category", "RandomSeed" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomSeed = { "GlobalRandomSeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, GlobalRandomSeed), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomStream_MetaData[] = {
		{ "Category", "RandomSeed" },
		{ "Comment", "//Room distribution, where holes linking floors are carved\n" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Room distribution, where holes linking floors are carved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomStream = { "GlobalRandomStream", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, GlobalRandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomStream_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SeedList_MetaData[] = {
		{ "Category", "RandomSeed" },
		{ "Comment", "/*\n\x09Index of this Array is the floor number\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Index of this Array is the floor number" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SeedList = { "SeedList", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, SeedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SeedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SeedList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SeedList_Inner = { "SeedList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateNewRandomSeeds_MetaData[] = {
		{ "Category", "RandomSeed" },
		{ "Comment", "/*\n\x09If true, we will ignore the text inputs, and generate new seeds\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "If true, we will ignore the text inputs, and generate new seeds" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateNewRandomSeeds_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bGenerateNewRandomSeeds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateNewRandomSeeds = { "bGenerateNewRandomSeeds", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateNewRandomSeeds_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateNewRandomSeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateNewRandomSeeds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevel_MetaData[] = {
		{ "Category", "MazeBuildOptions" },
		{ "Comment", "/*\n\x09Only used if bStreamInLevelForFloorConnections\n\x09You want this to be a 1x1x2 in tile size level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Only used if bStreamInLevelForFloorConnections\nYou want this to be a 1x1x2 in tile size level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevel = { "StairLevel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, StairLevel), Z_Construct_UScriptStruct_FMazeRoom, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfFloorPassagesPerFloor_MetaData[] = {
		{ "Category", "MazeBuildOptions" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfFloorPassagesPerFloor = { "NumberOfFloorPassagesPerFloor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, NumberOfFloorPassagesPerFloor), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfFloorPassagesPerFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfFloorPassagesPerFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bUseOpenWallMeshForOpenWalls_MetaData[] = {
		{ "Category", "MazeBuildOptions" },
		{ "Comment", "/*\n\x09If this is false\n\x09walls marked as EWallStatus::OpenWall\n\x09won't be added to the OpenWallMeshes HISM\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "If this is false\nwalls marked as EWallStatus::OpenWall\nwon't be added to the OpenWallMeshes HISM" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bUseOpenWallMeshForOpenWalls_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bUseOpenWallMeshForOpenWalls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bUseOpenWallMeshForOpenWalls = { "bUseOpenWallMeshForOpenWalls", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bUseOpenWallMeshForOpenWalls_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bUseOpenWallMeshForOpenWalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bUseOpenWallMeshForOpenWalls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bStreamInLevelForFloorConnections_MetaData[] = {
		{ "Category", "MazeBuildOptions" },
		{ "Comment", "/*\n\x09Should we use the data in StairLevel to build connections between floors, or just have a hole in the dungeon.\n\x09Note: If level streaming fails, there will be an extra hole, and the bottom of the Dungeon can be exposed.\n\x09When we use level streaming for the stairs, I have to create a hole on the current floor, and the floor below it to make room for the level. \n\x09(I assume, the stair level will have a have a floor mesh. )\n\n\x09Setting this to false means Level streaming for stair is not done, and there will just be a single hole that connects levels.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Should we use the data in StairLevel to build connections between floors, or just have a hole in the dungeon.\nNote: If level streaming fails, there will be an extra hole, and the bottom of the Dungeon can be exposed.\nWhen we use level streaming for the stairs, I have to create a hole on the current floor, and the floor below it to make room for the level.\n(I assume, the stair level will have a have a floor mesh. )\n\nSetting this to false means Level streaming for stair is not done, and there will just be a single hole that connects levels." },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bStreamInLevelForFloorConnections_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bStreamInLevelForFloorConnections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bStreamInLevelForFloorConnections = { "bStreamInLevelForFloorConnections", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bStreamInLevelForFloorConnections_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bStreamInLevelForFloorConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bStreamInLevelForFloorConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bAttemptToPlaceHolesToNextFloorOnEdge_MetaData[] = {
		{ "Category", "MazeBuildOptions" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bAttemptToPlaceHolesToNextFloorOnEdge_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bAttemptToPlaceHolesToNextFloorOnEdge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bAttemptToPlaceHolesToNextFloorOnEdge = { "bAttemptToPlaceHolesToNextFloorOnEdge", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bAttemptToPlaceHolesToNextFloorOnEdge_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bAttemptToPlaceHolesToNextFloorOnEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bAttemptToPlaceHolesToNextFloorOnEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfRoomLevelInstancesCreated_MetaData[] = {
		{ "Category", "MazeManagement" },
		{ "Comment", "/*\n\x09Incremented whenever we call StreamInRoom()\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Incremented whenever we call StreamInRoom()" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfRoomLevelInstancesCreated = { "NumberOfRoomLevelInstancesCreated", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, NumberOfRoomLevelInstancesCreated), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfRoomLevelInstancesCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfRoomLevelInstancesCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomInstancesShown_MetaData[] = {
		{ "Category", "MazeManagement" },
		{ "Comment", "/*\n\x09Incremented whenever a ULevelStreamingDynamic* NewRoom broadcasts the delegate OnLevelShown\n\x09""Binding managed in GenerateRoom()\n\x09See RoomInstanceShown()\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Incremented whenever a ULevelStreamingDynamic* NewRoom broadcasts the delegate OnLevelShown\nBinding managed in GenerateRoom()\nSee RoomInstanceShown()" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomInstancesShown = { "MazeRoomInstancesShown", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, MazeRoomInstancesShown), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomInstancesShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomInstancesShown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsDedicatedToRooms_MetaData[] = {
		{ "Category", "MazeManagement" },
		{ "Comment", "/*\n\x09How many maze cells were flagged as ECellRoomStatus::PartOfRoom\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "How many maze cells were flagged as ECellRoomStatus::PartOfRoom" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsDedicatedToRooms = { "MazeCellsDedicatedToRooms", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, MazeCellsDedicatedToRooms), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsDedicatedToRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsDedicatedToRooms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsAdjacentToRooms_MetaData[] = {
		{ "Category", "MazeManagement" },
		{ "Comment", "/*\n\x09Whenever we flag a cell as ECellRoomStatus::AdjacentToRoom\n\x09Incremented in GenerateRoom()\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Whenever we flag a cell as ECellRoomStatus::AdjacentToRoom\nIncremented in GenerateRoom()" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsAdjacentToRooms = { "MazeCellsAdjacentToRooms", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, MazeCellsAdjacentToRooms), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsAdjacentToRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsAdjacentToRooms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfMazeCellsNeededToCreate_MetaData[] = {
		{ "Category", "MazeManagement" },
		{ "Comment", "/*\n\x09NumberOfMazeCellsNeededToCreate = TotalNumberOfMazeCells-MazeCellsDedicatedToRooms;\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "NumberOfMazeCellsNeededToCreate = TotalNumberOfMazeCells-MazeCellsDedicatedToRooms;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfMazeCellsNeededToCreate = { "NumberOfMazeCellsNeededToCreate", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, NumberOfMazeCellsNeededToCreate), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfMazeCellsNeededToCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfMazeCellsNeededToCreate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_TotalNumberOfMazeCells_MetaData[] = {
		{ "Category", "MazeManagement" },
		{ "Comment", "/*\n\x09TotalNumberOfMazeCells = DungeonColumns*DungeonColumns;\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "TotalNumberOfMazeCells = DungeonColumns*DungeonColumns;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_TotalNumberOfMazeCells = { "TotalNumberOfMazeCells", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, TotalNumberOfMazeCells), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_TotalNumberOfMazeCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_TotalNumberOfMazeCells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorClass_MetaData[] = {
		{ "Category", "Doors" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorClass = { "DoorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DoorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorMeshSize_MetaData[] = {
		{ "Category", "Doors" },
		{ "Comment", "/*\n\x09""Door will be scaled to the height of the floor, Width of the DungeonTileSize (Y,Z scaling)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Door will be scaled to the height of the floor, Width of the DungeonTileSize (Y,Z scaling)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorMeshSize = { "DoorMeshSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DoorMeshSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorMeshSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorMeshSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bLimitDoorsToRoomStartFloor_MetaData[] = {
		{ "Category", "Doors" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bLimitDoorsToRoomStartFloor_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bLimitDoorsToRoomStartFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bLimitDoorsToRoomStartFloor = { "bLimitDoorsToRoomStartFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bLimitDoorsToRoomStartFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bLimitDoorsToRoomStartFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bLimitDoorsToRoomStartFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateDoors_MetaData[] = {
		{ "Category", "Doors" },
		{ "Comment", "/*\n\x09""After we generate the Maze, do we call SetWallsAdjacentToRoomCellsAsDoor()\n\x09on each floor? (Note this method is described in the FMazeDungeon struct, and its not exposed to BP)\n\x09NOTE: Tiles must be square for doors to scale properply\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "After we generate the Maze, do we call SetWallsAdjacentToRoomCellsAsDoor()\non each floor? (Note this method is described in the FMazeDungeon struct, and its not exposed to BP)\nNOTE: Tiles must be square for doors to scale properply" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateDoors_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bGenerateDoors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateDoors = { "bGenerateDoors", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateDoors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateDoors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateDoors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloorZBuffer_MetaData[] = {
		{ "Category", "DungeonSize" },
		{ "Comment", "/*\n\x09Increase the height where the next floor should spawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Increase the height where the next floor should spawn" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloorZBuffer = { "DungeonFloorZBuffer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DungeonFloorZBuffer), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloorZBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloorZBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshSize_MetaData[] = {
		{ "Category", "DungeonSize" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshSize = { "WallMeshSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, WallMeshSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshSize_MetaData[] = {
		{ "Category", "DungeonSize" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshSize = { "FloorMeshSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, FloorMeshSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonTileSize_MetaData[] = {
		{ "Category", "DungeonSize" },
		{ "Comment", "/*\n\x09Size of a Tile in Ue4 Units.\n\x09""Controls how big the Dungeon will be\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Size of a Tile in Ue4 Units.\nControls how big the Dungeon will be" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonTileSize = { "DungeonTileSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DungeonTileSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonTileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloors_MetaData[] = {
		{ "Category", "DungeonSize" },
		{ "Comment", "/*\n\x09Number of Z levels to build. The bottom Z level is at zero.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Number of Z levels to build. The bottom Z level is at zero." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloors = { "DungeonFloors", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DungeonFloors), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonColumns_MetaData[] = {
		{ "Category", "DungeonSize" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonColumns = { "DungeonColumns", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DungeonColumns), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonColumns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonRows_MetaData[] = {
		{ "Category", "DungeonSize" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonRows = { "DungeonRows", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DungeonRows), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonRows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonOpenness_MetaData[] = {
		{ "Category", "DungeonParameters" },
		{ "Comment", "/*\n\x09Integer from 0 to 100.\n\x09More open the MazeDungeon is, the more walls will have openings that connect different parts of the dungeon\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Integer from 0 to 100.\nMore open the MazeDungeon is, the more walls will have openings that connect different parts of the dungeon" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonOpenness = { "DungeonOpenness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DungeonOpenness), METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonOpenness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonOpenness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bMazeInitializationPassed_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/*\n\x09""Can we procede to generate the maze\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Can we procede to generate the maze" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bMazeInitializationPassed_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bMazeInitializationPassed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bMazeInitializationPassed = { "bMazeInitializationPassed", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bMazeInitializationPassed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bMazeInitializationPassed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bMazeInitializationPassed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDebugWarnings_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/*\n\x09Show Debug Warnings?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Show Debug Warnings?" },
	};
#endif
	void Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDebugWarnings_SetBit(void* Obj)
	{
		((AMazeDungeonBuilder*)Obj)->bDebugWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDebugWarnings = { "bDebugWarnings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMazeDungeonBuilder), &Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDebugWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDebugWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDebugWarnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevelStreamTiles_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/*\n\x09Points on the 3D grid (x,y,z), (r,c,floor) that we will stream in levels to connect floors\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Points on the 3D grid (x,y,z), (r,c,floor) that we will stream in levels to connect floors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevelStreamTiles = { "StairLevelStreamTiles", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, StairLevelStreamTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevelStreamTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevelStreamTiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevelStreamTiles_Inner = { "StairLevelStreamTiles", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshScale_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshScale = { "WallMeshScale", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, WallMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationRotation_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationRotation = { "InitialGenerationRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, InitialGenerationRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationLocation_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/*\n\x09Set to GetActorLocation at runtime\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Set to GetActorLocation at runtime" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationLocation = { "InitialGenerationLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, InitialGenerationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshScale_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshScale = { "FloorMeshScale", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, FloorMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorScale_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/*\n\x09Variables\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorScale = { "DoorScale", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, DoorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OpenWallMeshes_MetaData[] = {
		{ "Category", "InstanceComp" },
		{ "Comment", "/*\n\x09Walls that have an opening for a door\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Walls that have an opening for a door" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OpenWallMeshes = { "OpenWallMeshes", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, OpenWallMeshes), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OpenWallMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OpenWallMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_ClosedWallMeshes_MetaData[] = {
		{ "Category", "InstanceComp" },
		{ "Comment", "/*\n\x09Typical walls\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Typical walls" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_ClosedWallMeshes = { "ClosedWallMeshes", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, ClosedWallMeshes), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_ClosedWallMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_ClosedWallMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshes_MetaData[] = {
		{ "Category", "InstaneComp" },
		{ "Comment", "/*\n\x09Must have the sockets WallForward,WallBackward,WallLeft,WallRight\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Must have the sockets WallForward,WallBackward,WallLeft,WallRight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshes = { "FloorMeshes", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, FloorMeshes), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRootComponent_MetaData[] = {
		{ "Category", "MazeDungeonBuilder" },
		{ "Comment", "/*\n\x09""COMPONENTS\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "COMPONENTS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRootComponent = { "MazeRootComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, MazeRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataFinished = { "OnAsyncLoadMazeRoomDataFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, OnAsyncLoadMazeRoomDataFinished), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataInitialized = { "OnAsyncLoadMazeRoomDataInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, OnAsyncLoadMazeRoomDataInitialized), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnMazeGenerationStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnMazeGenerationStart = { "OnMazeGenerationStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, OnMazeGenerationStart), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnMazeGenerationStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnMazeGenerationStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeCellsFinished_MetaData[] = {
		{ "Comment", "/*\n\x09""Called when all the Level instances representing the room's in the maze have finished streaming in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Called when all the Level instances representing the room's in the maze have finished streaming in." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeCellsFinished = { "OnAllMazeCellsFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, OnAllMazeCellsFinished), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeCellsFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeCellsFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeRoomsFinished_MetaData[] = {
		{ "Comment", "/*\n\x09""Called when all the Level instances representing the room's in the maze have finished streaming in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MazeDungeonBuilder.h" },
		{ "ToolTip", "Called when all the Level instances representing the room's in the maze have finished streaming in." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeRoomsFinished = { "OnAllMazeRoomsFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeDungeonBuilder, OnAllMazeRoomsFinished), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_MazeGenerationEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeRoomsFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeRoomsFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeDungeonBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bReliablyFindStartCellsForRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnAttemptsPerRoomFastPicking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SpawnBlockPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomScales,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomScales_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomLevelInstancesToScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_RoomLevelInstancesToScale_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFilledPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DepthToFlagAsAdjacentToRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bRoomDataLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bIncludeAdjacentCellsWhenCalculatingDungeonFilledPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDataTableRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeLevelsSoftPointers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeLevelsSoftPointers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_GlobalRandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SeedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_SeedList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateNewRandomSeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfFloorPassagesPerFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bUseOpenWallMeshForOpenWalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bStreamInLevelForFloorConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bAttemptToPlaceHolesToNextFloorOnEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfRoomLevelInstancesCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRoomInstancesShown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsDedicatedToRooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeCellsAdjacentToRooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_NumberOfMazeCellsNeededToCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_TotalNumberOfMazeCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorMeshSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bLimitDoorsToRoomStartFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bGenerateDoors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloorZBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonTileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonFloors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DungeonOpenness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bMazeInitializationPassed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_bDebugWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevelStreamTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_StairLevelStreamTiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_WallMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_InitialGenerationLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_DoorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OpenWallMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_ClosedWallMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_FloorMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_MazeRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAsyncLoadMazeRoomDataInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnMazeGenerationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeCellsFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeDungeonBuilder_Statics::NewProp_OnAllMazeRoomsFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeDungeonBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeDungeonBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeDungeonBuilder_Statics::ClassParams = {
		&AMazeDungeonBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMazeDungeonBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMazeDungeonBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeDungeonBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeDungeonBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeDungeonBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeDungeonBuilder, 2673498980);
	template<> MAZEDUNGEONGENERATORPLUGIN_API UClass* StaticClass<AMazeDungeonBuilder>()
	{
		return AMazeDungeonBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeDungeonBuilder(Z_Construct_UClass_AMazeDungeonBuilder, &AMazeDungeonBuilder::StaticClass, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("AMazeDungeonBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeDungeonBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
