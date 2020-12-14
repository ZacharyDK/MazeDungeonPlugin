// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEDUNGEONGENERATORPLUGIN_MazeDungeonBuilder_generated_h
#error "MazeDungeonBuilder.generated.h already included, missing '#pragma once' in MazeDungeonBuilder.h"
#endif
#define MAZEDUNGEONGENERATORPLUGIN_MazeDungeonBuilder_generated_h

#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_17_DELEGATE \
static inline void FMazeLoadEvent_DelegateWrapper(const FMulticastScriptDelegate& MazeLoadEvent) \
{ \
	MazeLoadEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_16_DELEGATE \
static inline void FMazeGenerationEvent_DelegateWrapper(const FMulticastScriptDelegate& MazeGenerationEvent) \
{ \
	MazeGenerationEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_SPARSE_DATA
#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRoomInstanceShown); \
	DECLARE_FUNCTION(execPostLoadMazeLevels); \
	DECLARE_FUNCTION(execLoadMazeRoomLevels); \
	DECLARE_FUNCTION(execReadDataTable); \
	DECLARE_FUNCTION(execGenerateMazeDungeonConstructor); \
	DECLARE_FUNCTION(execGenerateMazeDungeon); \
	DECLARE_FUNCTION(execClearMazeDungeon);


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRoomInstanceShown); \
	DECLARE_FUNCTION(execPostLoadMazeLevels); \
	DECLARE_FUNCTION(execLoadMazeRoomLevels); \
	DECLARE_FUNCTION(execReadDataTable); \
	DECLARE_FUNCTION(execGenerateMazeDungeonConstructor); \
	DECLARE_FUNCTION(execGenerateMazeDungeon); \
	DECLARE_FUNCTION(execClearMazeDungeon);


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeDungeonBuilder(); \
	friend struct Z_Construct_UClass_AMazeDungeonBuilder_Statics; \
public: \
	DECLARE_CLASS(AMazeDungeonBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeDungeonGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMazeDungeonBuilder)


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAMazeDungeonBuilder(); \
	friend struct Z_Construct_UClass_AMazeDungeonBuilder_Statics; \
public: \
	DECLARE_CLASS(AMazeDungeonBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeDungeonGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMazeDungeonBuilder)


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeDungeonBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeDungeonBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeDungeonBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeDungeonBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeDungeonBuilder(AMazeDungeonBuilder&&); \
	NO_API AMazeDungeonBuilder(const AMazeDungeonBuilder&); \
public:


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeDungeonBuilder(AMazeDungeonBuilder&&); \
	NO_API AMazeDungeonBuilder(const AMazeDungeonBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeDungeonBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeDungeonBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeDungeonBuilder)


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_PRIVATE_PROPERTY_OFFSET
#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_25_PROLOG
#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_PRIVATE_PROPERTY_OFFSET \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_SPARSE_DATA \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_RPC_WRAPPERS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_INCLASS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_PRIVATE_PROPERTY_OFFSET \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_SPARSE_DATA \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_INCLASS_NO_PURE_DECLS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEDUNGEONGENERATORPLUGIN_API UClass* StaticClass<class AMazeDungeonBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_MazeDungeonBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
