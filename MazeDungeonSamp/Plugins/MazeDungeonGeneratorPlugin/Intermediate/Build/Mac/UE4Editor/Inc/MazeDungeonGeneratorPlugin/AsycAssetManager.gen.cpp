// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeDungeonGeneratorPlugin/Public/AsycAssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsycAssetManager() {}
// Cross Module References
	MAZEDUNGEONGENERATORPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
	MAZEDUNGEONGENERATORPLUGIN_API UEnum* Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EAsycLoadType();
	MAZEDUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_UAsycAssetManager_NoRegister();
	MAZEDUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_UAsycAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin, nullptr, "AsycAssetLoadEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAsycLoadType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EAsycLoadType, Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin(), TEXT("EAsycLoadType"));
		}
		return Singleton;
	}
	template<> MAZEDUNGEONGENERATORPLUGIN_API UEnum* StaticEnum<EAsycLoadType>()
	{
		return EAsycLoadType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAsycLoadType(EAsycLoadType_StaticEnum, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("EAsycLoadType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EAsycLoadType_Hash() { return 2279344068U; }
	UEnum* Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EAsycLoadType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAsycLoadType"), 0, Get_Z_Construct_UEnum_MazeDungeonGeneratorPlugin_EAsycLoadType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAsycLoadType::LoadAll", (int64)EAsycLoadType::LoadAll },
				{ "EAsycLoadType::LoadGivenIndex", (int64)EAsycLoadType::LoadGivenIndex },
				{ "EAsycLoadType::LoadRandomIndex", (int64)EAsycLoadType::LoadRandomIndex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoadAll.Name", "EAsycLoadType::LoadAll" },
				{ "LoadGivenIndex.Name", "EAsycLoadType::LoadGivenIndex" },
				{ "LoadRandomIndex.Name", "EAsycLoadType::LoadRandomIndex" },
				{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
				nullptr,
				"EAsycLoadType",
				"EAsycLoadType",
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
	DEFINE_FUNCTION(UAsycAssetManager::execPostLoadUObjectSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadUObjectSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execPostLoadTextureSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadTextureSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execPostLoadSoundCueSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadSoundCueSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execPostLoadMaterialSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadMaterialSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execPostLoadFXSystemSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadFXSystemSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execPostLoadActorSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadActorSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execLoadUObjectSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadUObjectSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execLoadTextureSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadTextureSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execLoadSoundCueSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSoundCueSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execLoadMaterialSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMaterialSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execLoadFXSystemSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFXSystemSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execLoadAllSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAllSoftReferences();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsycAssetManager::execLoadActorSoftReferences)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadActorSoftReferences();
		P_NATIVE_END;
	}
	void UAsycAssetManager::StaticRegisterNativesUAsycAssetManager()
	{
		UClass* Class = UAsycAssetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadActorSoftReferences", &UAsycAssetManager::execLoadActorSoftReferences },
			{ "LoadAllSoftReferences", &UAsycAssetManager::execLoadAllSoftReferences },
			{ "LoadFXSystemSoftReferences", &UAsycAssetManager::execLoadFXSystemSoftReferences },
			{ "LoadMaterialSoftReferences", &UAsycAssetManager::execLoadMaterialSoftReferences },
			{ "LoadSoundCueSoftReferences", &UAsycAssetManager::execLoadSoundCueSoftReferences },
			{ "LoadTextureSoftReferences", &UAsycAssetManager::execLoadTextureSoftReferences },
			{ "LoadUObjectSoftReferences", &UAsycAssetManager::execLoadUObjectSoftReferences },
			{ "PostLoadActorSoftReferences", &UAsycAssetManager::execPostLoadActorSoftReferences },
			{ "PostLoadFXSystemSoftReferences", &UAsycAssetManager::execPostLoadFXSystemSoftReferences },
			{ "PostLoadMaterialSoftReferences", &UAsycAssetManager::execPostLoadMaterialSoftReferences },
			{ "PostLoadSoundCueSoftReferences", &UAsycAssetManager::execPostLoadSoundCueSoftReferences },
			{ "PostLoadTextureSoftReferences", &UAsycAssetManager::execPostLoadTextureSoftReferences },
			{ "PostLoadUObjectSoftReferences", &UAsycAssetManager::execPostLoadUObjectSoftReferences },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "LoadActorSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "LoadAllSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "LoadFXSystemSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "LoadMaterialSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "LoadSoundCueSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "LoadTextureSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Loading" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "LoadUObjectSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "PostLoadActorSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "PostLoadFXSystemSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "PostLoadMaterialSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "PostLoadSoundCueSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "PostLoadTextureSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsycAssetManager, nullptr, "PostLoadUObjectSoftReferences", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsycAssetManager_NoRegister()
	{
		return UAsycAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UAsycAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UObjectReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UObjectReferences;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_UObjectReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftTextureReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoftTextureReferences;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftTextureReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftSoundCueReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoftSoundCueReferences;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSoundCueReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftMaterialReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoftMaterialReferences;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftMaterialReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftFXSystemReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoftFXSystemReferences;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftFXSystemReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSoftClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorSoftClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorSoftClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUObjectReferencesLoadFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUObjectReferencesLoadFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextureReferencesLoadFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextureReferencesLoadFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSoundCueReferencesLoadFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSoundCueReferencesLoadFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaterialReferencesLoadFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaterialReferencesLoadFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFXSystemLoadFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFXSystemLoadFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorReferencesLoadFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorReferencesLoadFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsycAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsycAssetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsycAssetManager_LoadActorSoftReferences, "LoadActorSoftReferences" }, // 1492689250
		{ &Z_Construct_UFunction_UAsycAssetManager_LoadAllSoftReferences, "LoadAllSoftReferences" }, // 628506853
		{ &Z_Construct_UFunction_UAsycAssetManager_LoadFXSystemSoftReferences, "LoadFXSystemSoftReferences" }, // 4051371156
		{ &Z_Construct_UFunction_UAsycAssetManager_LoadMaterialSoftReferences, "LoadMaterialSoftReferences" }, // 1526629805
		{ &Z_Construct_UFunction_UAsycAssetManager_LoadSoundCueSoftReferences, "LoadSoundCueSoftReferences" }, // 1874887776
		{ &Z_Construct_UFunction_UAsycAssetManager_LoadTextureSoftReferences, "LoadTextureSoftReferences" }, // 203956012
		{ &Z_Construct_UFunction_UAsycAssetManager_LoadUObjectSoftReferences, "LoadUObjectSoftReferences" }, // 3218120088
		{ &Z_Construct_UFunction_UAsycAssetManager_PostLoadActorSoftReferences, "PostLoadActorSoftReferences" }, // 1262361845
		{ &Z_Construct_UFunction_UAsycAssetManager_PostLoadFXSystemSoftReferences, "PostLoadFXSystemSoftReferences" }, // 944328199
		{ &Z_Construct_UFunction_UAsycAssetManager_PostLoadMaterialSoftReferences, "PostLoadMaterialSoftReferences" }, // 935882928
		{ &Z_Construct_UFunction_UAsycAssetManager_PostLoadSoundCueSoftReferences, "PostLoadSoundCueSoftReferences" }, // 1240746313
		{ &Z_Construct_UFunction_UAsycAssetManager_PostLoadTextureSoftReferences, "PostLoadTextureSoftReferences" }, // 3452531701
		{ &Z_Construct_UFunction_UAsycAssetManager_PostLoadUObjectSoftReferences, "PostLoadUObjectSoftReferences" }, // 3614129192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\nThe purpose of this component is to asyncronously load various soft pointers\n*/" },
		{ "IncludePath", "AsycAssetManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
		{ "ToolTip", "The purpose of this component is to asyncronously load various soft pointers" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_UObjectReferences_MetaData[] = {
		{ "Category", "SoftObjectReferences" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_UObjectReferences = { "UObjectReferences", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, UObjectReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_UObjectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_UObjectReferences_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_UObjectReferences_Inner = { "UObjectReferences", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftTextureReferences_MetaData[] = {
		{ "Category", "SoftObjectReferences" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftTextureReferences = { "SoftTextureReferences", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, SoftTextureReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftTextureReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftTextureReferences_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftTextureReferences_Inner = { "SoftTextureReferences", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftSoundCueReferences_MetaData[] = {
		{ "Category", "SoftObjectReferences" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftSoundCueReferences = { "SoftSoundCueReferences", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, SoftSoundCueReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftSoundCueReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftSoundCueReferences_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftSoundCueReferences_Inner = { "SoftSoundCueReferences", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftMaterialReferences_MetaData[] = {
		{ "Category", "SoftObjectReferences" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftMaterialReferences = { "SoftMaterialReferences", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, SoftMaterialReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftMaterialReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftMaterialReferences_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftMaterialReferences_Inner = { "SoftMaterialReferences", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftFXSystemReferences_MetaData[] = {
		{ "Category", "SoftObjectReferences" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftFXSystemReferences = { "SoftFXSystemReferences", nullptr, (EPropertyFlags)0x001400800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, SoftFXSystemReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftFXSystemReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftFXSystemReferences_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftFXSystemReferences_Inner = { "SoftFXSystemReferences", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_ActorSoftClasses_MetaData[] = {
		{ "Category", "SoftClassReferences" },
		{ "Comment", "/*\n\x09Variables\n\x09*/" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_ActorSoftClasses = { "ActorSoftClasses", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, ActorSoftClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_ActorSoftClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_ActorSoftClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_ActorSoftClasses_Inner = { "ActorSoftClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnUObjectReferencesLoadFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnUObjectReferencesLoadFinish = { "OnUObjectReferencesLoadFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, OnUObjectReferencesLoadFinish), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnUObjectReferencesLoadFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnUObjectReferencesLoadFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnTextureReferencesLoadFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnTextureReferencesLoadFinish = { "OnTextureReferencesLoadFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, OnTextureReferencesLoadFinish), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnTextureReferencesLoadFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnTextureReferencesLoadFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnSoundCueReferencesLoadFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnSoundCueReferencesLoadFinish = { "OnSoundCueReferencesLoadFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, OnSoundCueReferencesLoadFinish), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnSoundCueReferencesLoadFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnSoundCueReferencesLoadFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnMaterialReferencesLoadFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnMaterialReferencesLoadFinish = { "OnMaterialReferencesLoadFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, OnMaterialReferencesLoadFinish), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnMaterialReferencesLoadFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnMaterialReferencesLoadFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnFXSystemLoadFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnFXSystemLoadFinish = { "OnFXSystemLoadFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, OnFXSystemLoadFinish), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnFXSystemLoadFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnFXSystemLoadFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnActorReferencesLoadFinish_MetaData[] = {
		{ "Comment", "/*\n\x09""EVENTS\n\x09*/" },
		{ "ModuleRelativePath", "Public/AsycAssetManager.h" },
		{ "ToolTip", "EVENTS" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnActorReferencesLoadFinish = { "OnActorReferencesLoadFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsycAssetManager, OnActorReferencesLoadFinish), Z_Construct_UDelegateFunction_MazeDungeonGeneratorPlugin_AsycAssetLoadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnActorReferencesLoadFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnActorReferencesLoadFinish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsycAssetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_UObjectReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_UObjectReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftTextureReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftTextureReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftSoundCueReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftSoundCueReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftMaterialReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftMaterialReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftFXSystemReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_SoftFXSystemReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_ActorSoftClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_ActorSoftClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnUObjectReferencesLoadFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnTextureReferencesLoadFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnSoundCueReferencesLoadFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnMaterialReferencesLoadFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnFXSystemLoadFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsycAssetManager_Statics::NewProp_OnActorReferencesLoadFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsycAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsycAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsycAssetManager_Statics::ClassParams = {
		&UAsycAssetManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsycAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAsycAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsycAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsycAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsycAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsycAssetManager, 2187550284);
	template<> MAZEDUNGEONGENERATORPLUGIN_API UClass* StaticClass<UAsycAssetManager>()
	{
		return UAsycAssetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsycAssetManager(Z_Construct_UClass_UAsycAssetManager, &UAsycAssetManager::StaticClass, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("UAsycAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsycAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
