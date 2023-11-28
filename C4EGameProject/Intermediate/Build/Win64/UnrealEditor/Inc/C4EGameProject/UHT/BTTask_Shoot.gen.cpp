// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/BTTask_Shoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Shoot() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTTask_Shoot();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTTask_Shoot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void UBTTask_Shoot::StaticRegisterNativesUBTTask_Shoot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Shoot);
	UClass* Z_Construct_UClass_UBTTask_Shoot_NoRegister()
	{
		return UBTTask_Shoot::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Shoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Shoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Shoot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_Shoot.h" },
		{ "ModuleRelativePath", "BTTask_Shoot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Shoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Shoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Shoot_Statics::ClassParams = {
		&UBTTask_Shoot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Shoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Shoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Shoot()
	{
		if (!Z_Registration_Info_UClass_UBTTask_Shoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Shoot.OuterSingleton, Z_Construct_UClass_UBTTask_Shoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_Shoot.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UBTTask_Shoot>()
	{
		return UBTTask_Shoot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Shoot);
	UBTTask_Shoot::~UBTTask_Shoot() {}
	struct Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_Shoot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_Shoot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Shoot, UBTTask_Shoot::StaticClass, TEXT("UBTTask_Shoot"), &Z_Registration_Info_UClass_UBTTask_Shoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Shoot), 1659745194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_Shoot_h_2274957120(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_Shoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_Shoot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
