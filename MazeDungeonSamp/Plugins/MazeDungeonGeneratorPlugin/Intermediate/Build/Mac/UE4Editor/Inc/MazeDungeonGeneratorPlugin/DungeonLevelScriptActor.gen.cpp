// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeDungeonGeneratorPlugin/Public/DungeonLevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLevelScriptActor() {}
// Cross Module References
	MAZEDUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_ADungeonLevelScriptActor_NoRegister();
	MAZEDUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_ADungeonLevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ADungeonLevelScriptActor::execSetLevelScale)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLevelScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelScale_Implementation(Z_Param_Out_NewLevelScale);
		P_NATIVE_END;
	}
	static FName NAME_ADungeonLevelScriptActor_SetLevelScale = FName(TEXT("SetLevelScale"));
	void ADungeonLevelScriptActor::SetLevelScale(FVector const& NewLevelScale)
	{
		DungeonLevelScriptActor_eventSetLevelScale_Parms Parms;
		Parms.NewLevelScale=NewLevelScale;
		ProcessEvent(FindFunctionChecked(NAME_ADungeonLevelScriptActor_SetLevelScale),&Parms);
	}
	void ADungeonLevelScriptActor::StaticRegisterNativesADungeonLevelScriptActor()
	{
		UClass* Class = ADungeonLevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLevelScale", &ADungeonLevelScriptActor::execSetLevelScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLevelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLevelScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::NewProp_NewLevelScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::NewProp_NewLevelScale = { "NewLevelScale", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonLevelScriptActor_eventSetLevelScale_Parms, NewLevelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::NewProp_NewLevelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::NewProp_NewLevelScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::NewProp_NewLevelScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Override this in BP.\n\x09While ULevelStreamingDynamic Objects have a transform, they can only manage translation and rotation. THey can't manage scale. \n\x09We extend the functionality of the level by dealing with it here.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DungeonLevelScriptActor.h" },
		{ "ToolTip", "Override this in BP.\nWhile ULevelStreamingDynamic Objects have a transform, they can only manage translation and rotation. THey can't manage scale.\nWe extend the functionality of the level by dealing with it here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonLevelScriptActor, nullptr, "SetLevelScale", nullptr, nullptr, sizeof(DungeonLevelScriptActor_eventSetLevelScale_Parms), Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADungeonLevelScriptActor_NoRegister()
	{
		return ADungeonLevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonLevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonLevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeDungeonGeneratorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeonLevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonLevelScriptActor_SetLevelScale, "SetLevelScale" }, // 1835219042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonLevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonLevelScriptActor.h" },
		{ "ModuleRelativePath", "Public/DungeonLevelScriptActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonLevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonLevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonLevelScriptActor_Statics::ClassParams = {
		&ADungeonLevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonLevelScriptActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonLevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonLevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonLevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonLevelScriptActor, 3616535151);
	template<> MAZEDUNGEONGENERATORPLUGIN_API UClass* StaticClass<ADungeonLevelScriptActor>()
	{
		return ADungeonLevelScriptActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonLevelScriptActor(Z_Construct_UClass_ADungeonLevelScriptActor, &ADungeonLevelScriptActor::StaticClass, TEXT("/Script/MazeDungeonGeneratorPlugin"), TEXT("ADungeonLevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonLevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
