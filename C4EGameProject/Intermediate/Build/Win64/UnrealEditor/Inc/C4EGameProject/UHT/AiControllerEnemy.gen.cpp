// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/AiControllerEnemy.h"
#include "../../AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiControllerEnemy() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AAiControllerEnemy();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AAiControllerEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(AAiControllerEnemy::execHandle_TargetPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_TargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void AAiControllerEnemy::StaticRegisterNativesAAiControllerEnemy()
	{
		UClass* Class = AAiControllerEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Handle_TargetPerceptionUpdated", &AAiControllerEnemy::execHandle_TargetPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics
	{
		struct AiControllerEnemy_eventHandle_TargetPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AiControllerEnemy_eventHandle_TargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AiControllerEnemy_eventHandle_TargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AiControllerEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAiControllerEnemy, nullptr, "Handle_TargetPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::AiControllerEnemy_eventHandle_TargetPerceptionUpdated_Parms), Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAiControllerEnemy);
	UClass* Z_Construct_UClass_AAiControllerEnemy_NoRegister()
	{
		return AAiControllerEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAiControllerEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__AIPerception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__AIPerception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTreeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackboardComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAiControllerEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAiControllerEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAiControllerEnemy_Handle_TargetPerceptionUpdated, "Handle_TargetPerceptionUpdated" }, // 4056981961
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiControllerEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AiControllerEnemy.h" },
		{ "ModuleRelativePath", "AiControllerEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp__AIPerception_MetaData[] = {
		{ "Category", "AiControllerEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AiControllerEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp__AIPerception = { "_AIPerception", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAiControllerEnemy, _AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp__AIPerception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp__AIPerception_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AiControllerEnemy" },
		{ "ModuleRelativePath", "AiControllerEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAiControllerEnemy, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AiControllerEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AiControllerEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x00440000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAiControllerEnemy, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTreeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AiControllerEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AiControllerEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x00440000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAiControllerEnemy, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BlackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BlackboardComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAiControllerEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp__AIPerception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BehaviorTreeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiControllerEnemy_Statics::NewProp_BlackboardComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAiControllerEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAiControllerEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAiControllerEnemy_Statics::ClassParams = {
		&AAiControllerEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAiControllerEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAiControllerEnemy_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAiControllerEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAiControllerEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAiControllerEnemy()
	{
		if (!Z_Registration_Info_UClass_AAiControllerEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAiControllerEnemy.OuterSingleton, Z_Construct_UClass_AAiControllerEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAiControllerEnemy.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<AAiControllerEnemy>()
	{
		return AAiControllerEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAiControllerEnemy);
	AAiControllerEnemy::~AAiControllerEnemy() {}
	struct Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAiControllerEnemy, AAiControllerEnemy::StaticClass, TEXT("AAiControllerEnemy"), &Z_Registration_Info_UClass_AAiControllerEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAiControllerEnemy), 1765236919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_185018967(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
