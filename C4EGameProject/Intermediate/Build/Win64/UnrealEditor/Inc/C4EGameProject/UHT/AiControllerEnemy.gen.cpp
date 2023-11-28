// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/AiControllerEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiControllerEnemy() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AAiControllerEnemy();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AAiControllerEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void AAiControllerEnemy::StaticRegisterNativesAAiControllerEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAiControllerEnemy);
	UClass* Z_Construct_UClass_AAiControllerEnemy_NoRegister()
	{
		return AAiControllerEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAiControllerEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiControllerEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AiControllerEnemy.h" },
		{ "ModuleRelativePath", "AiControllerEnemy.h" },
	};
#endif
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
		nullptr,
		Z_Construct_UClass_AAiControllerEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	struct Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAiControllerEnemy, AAiControllerEnemy::StaticClass, TEXT("AAiControllerEnemy"), &Z_Registration_Info_UClass_AAiControllerEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAiControllerEnemy), 1345898669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_3839869587(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_AiControllerEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
