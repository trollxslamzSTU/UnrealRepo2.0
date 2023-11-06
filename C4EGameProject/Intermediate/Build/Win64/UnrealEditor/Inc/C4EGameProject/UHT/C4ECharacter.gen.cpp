// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/C4ECharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4ECharacter() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AC4ECharacter();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AC4ECharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void AC4ECharacter::StaticRegisterNativesAC4ECharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4ECharacter);
	UClass* Z_Construct_UClass_AC4ECharacter_NoRegister()
	{
		return AC4ECharacter::StaticClass();
	}
	struct Z_Construct_UClass_AC4ECharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC4ECharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C4ECharacter.h" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC4ECharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4ECharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4ECharacter_Statics::ClassParams = {
		&AC4ECharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC4ECharacter()
	{
		if (!Z_Registration_Info_UClass_AC4ECharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC4ECharacter.OuterSingleton, Z_Construct_UClass_AC4ECharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC4ECharacter.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<AC4ECharacter>()
	{
		return AC4ECharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC4ECharacter);
	AC4ECharacter::~AC4ECharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC4ECharacter, AC4ECharacter::StaticClass, TEXT("AC4ECharacter"), &Z_Registration_Info_UClass_AC4ECharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4ECharacter), 1967303765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_657438498(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
