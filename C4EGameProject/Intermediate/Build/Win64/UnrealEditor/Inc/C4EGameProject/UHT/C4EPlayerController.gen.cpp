// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/C4EPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4EPlayerController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AC4EPlayerController();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AC4EPlayerController_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UMatchStateHandler_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Collectables_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Score_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Targets_NoRegister();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics
	{
		struct _Script_C4EGameProject_eventScoreUpdatedSignature_Parms
		{
			int32 points;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventScoreUpdatedSignature_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4EGameProject, nullptr, "ScoreUpdatedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::_Script_C4EGameProject_eventScoreUpdatedSignature_Parms), Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FScoreUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ScoreUpdatedSignature, int32 points)
{
	struct _Script_C4EGameProject_eventScoreUpdatedSignature_Parms
	{
		int32 points;
	};
	_Script_C4EGameProject_eventScoreUpdatedSignature_Parms Parms;
	Parms.points=points;
	ScoreUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AC4EPlayerController::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AC4EPlayerController_Init = FName(TEXT("Init"));
	void AC4EPlayerController::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC4EPlayerController_Init),NULL);
	}
	void AC4EPlayerController::StaticRegisterNativesAC4EPlayerController()
	{
		UClass* Class = AC4EPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &AC4EPlayerController::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC4EPlayerController_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC4EPlayerController_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4EPlayerController_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4EPlayerController, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC4EPlayerController_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4EPlayerController_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC4EPlayerController_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4EPlayerController_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4EPlayerController);
	UClass* Z_Construct_UClass_AC4EPlayerController_NoRegister()
	{
		return AC4EPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AC4EPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__PawnToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__PawnToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__ScoreWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__ScoreWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__TargetWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__TargetWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__CollectablesWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__CollectablesWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__SeeThisAI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__SeeThisAI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC4EPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC4EPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC4EPlayerController_Init, "Init" }, // 1761686380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "C4EPlayerController.h" },
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__PawnToSpawn_MetaData[] = {
		{ "Category", "C4EPlayerController" },
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__PawnToSpawn = { "_PawnToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EPlayerController, _PawnToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__PawnToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__PawnToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__ScoreWidgetClass_MetaData[] = {
		{ "Category", "C4EPlayerController" },
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__ScoreWidgetClass = { "_ScoreWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EPlayerController, _ScoreWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidget_Score_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__ScoreWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__ScoreWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__TargetWidgetClass_MetaData[] = {
		{ "Category", "C4EPlayerController" },
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__TargetWidgetClass = { "_TargetWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EPlayerController, _TargetWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidget_Targets_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__TargetWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__TargetWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__CollectablesWidgetClass_MetaData[] = {
		{ "Category", "C4EPlayerController" },
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__CollectablesWidgetClass = { "_CollectablesWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EPlayerController, _CollectablesWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidget_Collectables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__CollectablesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__CollectablesWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AC4EPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__SeeThisAI_MetaData[] = {
		{ "Category", "C4EPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C4EPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__SeeThisAI = { "_SeeThisAI", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EPlayerController, _SeeThisAI), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__SeeThisAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__SeeThisAI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC4EPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__PawnToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__ScoreWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__TargetWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__CollectablesWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EPlayerController_Statics::NewProp__SeeThisAI,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AC4EPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMatchStateHandler_NoRegister, (int32)VTABLE_OFFSET(AC4EPlayerController, IMatchStateHandler), false },  // 437658244
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AC4EPlayerController, IGenericTeamAgentInterface), false },  // 3302830175
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC4EPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4EPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4EPlayerController_Statics::ClassParams = {
		&AC4EPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC4EPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AC4EPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC4EPlayerController()
	{
		if (!Z_Registration_Info_UClass_AC4EPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC4EPlayerController.OuterSingleton, Z_Construct_UClass_AC4EPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC4EPlayerController.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<AC4EPlayerController>()
	{
		return AC4EPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC4EPlayerController);
	AC4EPlayerController::~AC4EPlayerController() {}
	struct Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC4EPlayerController, AC4EPlayerController::StaticClass, TEXT("AC4EPlayerController"), &Z_Registration_Info_UClass_AC4EPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4EPlayerController), 1221408188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_106988429(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
