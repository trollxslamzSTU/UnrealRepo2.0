// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/BTTask_WanderAndPatrol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_WanderAndPatrol() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTTask_WanderAndPatrol();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTTask_WanderAndPatrol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void UBTTask_WanderAndPatrol::StaticRegisterNativesUBTTask_WanderAndPatrol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_WanderAndPatrol);
	UClass* Z_Construct_UClass_UBTTask_WanderAndPatrol_NoRegister()
	{
		return UBTTask_WanderAndPatrol::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_WanderAndPatrol.h" },
		{ "ModuleRelativePath", "BTTask_WanderAndPatrol.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::NewProp_PatrolRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTTask_WanderAndPatrol" },
		{ "ModuleRelativePath", "BTTask_WanderAndPatrol.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_WanderAndPatrol, PatrolRadius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::NewProp_PatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::NewProp_PatrolRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::NewProp_PatrolRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_WanderAndPatrol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::ClassParams = {
		&UBTTask_WanderAndPatrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_WanderAndPatrol()
	{
		if (!Z_Registration_Info_UClass_UBTTask_WanderAndPatrol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_WanderAndPatrol.OuterSingleton, Z_Construct_UClass_UBTTask_WanderAndPatrol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_WanderAndPatrol.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UBTTask_WanderAndPatrol>()
	{
		return UBTTask_WanderAndPatrol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_WanderAndPatrol);
	UBTTask_WanderAndPatrol::~UBTTask_WanderAndPatrol() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTTask_WanderAndPatrol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTTask_WanderAndPatrol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_WanderAndPatrol, UBTTask_WanderAndPatrol::StaticClass, TEXT("UBTTask_WanderAndPatrol"), &Z_Registration_Info_UClass_UBTTask_WanderAndPatrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_WanderAndPatrol), 2578724641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTTask_WanderAndPatrol_h_4032246917(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTTask_WanderAndPatrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTTask_WanderAndPatrol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
