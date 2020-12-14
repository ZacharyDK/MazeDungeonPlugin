// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MAZEDUNGEONGENERATORPLUGIN_DungeonLevelScriptActor_generated_h
#error "DungeonLevelScriptActor.generated.h already included, missing '#pragma once' in DungeonLevelScriptActor.h"
#endif
#define MAZEDUNGEONGENERATORPLUGIN_DungeonLevelScriptActor_generated_h

#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_SPARSE_DATA
#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_RPC_WRAPPERS \
	virtual void SetLevelScale_Implementation(FVector const& NewLevelScale); \
 \
	DECLARE_FUNCTION(execSetLevelScale);


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetLevelScale_Implementation(FVector const& NewLevelScale); \
 \
	DECLARE_FUNCTION(execSetLevelScale);


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_EVENT_PARMS \
	struct DungeonLevelScriptActor_eventSetLevelScale_Parms \
	{ \
		FVector NewLevelScale; \
	};


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_CALLBACK_WRAPPERS
#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonLevelScriptActor(); \
	friend struct Z_Construct_UClass_ADungeonLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ADungeonLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeDungeonGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ADungeonLevelScriptActor)


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADungeonLevelScriptActor(); \
	friend struct Z_Construct_UClass_ADungeonLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ADungeonLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeDungeonGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ADungeonLevelScriptActor)


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonLevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonLevelScriptActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonLevelScriptActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonLevelScriptActor(ADungeonLevelScriptActor&&); \
	NO_API ADungeonLevelScriptActor(const ADungeonLevelScriptActor&); \
public:


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonLevelScriptActor(ADungeonLevelScriptActor&&); \
	NO_API ADungeonLevelScriptActor(const ADungeonLevelScriptActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonLevelScriptActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonLevelScriptActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonLevelScriptActor)


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_PRIVATE_PROPERTY_OFFSET
#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_13_PROLOG \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_EVENT_PARMS


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_PRIVATE_PROPERTY_OFFSET \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_SPARSE_DATA \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_RPC_WRAPPERS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_CALLBACK_WRAPPERS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_INCLASS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_PRIVATE_PROPERTY_OFFSET \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_SPARSE_DATA \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_CALLBACK_WRAPPERS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_INCLASS_NO_PURE_DECLS \
	MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEDUNGEONGENERATORPLUGIN_API UClass* StaticClass<class ADungeonLevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MazeDungeonSamp_Plugins_MazeDungeonGeneratorPlugin_Source_MazeDungeonGeneratorPlugin_Public_DungeonLevelScriptActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
