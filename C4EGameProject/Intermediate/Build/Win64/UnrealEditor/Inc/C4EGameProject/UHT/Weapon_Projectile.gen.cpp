// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Weapon_Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Projectile() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AC4EGameProjectProjectile_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Projectile();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Projectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void AWeapon_Projectile::StaticRegisterNativesAWeapon_Projectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon_Projectile);
	UClass* Z_Construct_UClass_AWeapon_Projectile_NoRegister()
	{
		return AWeapon_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_Projectile.h" },
		{ "ModuleRelativePath", "Weapon_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Projectile_Statics::NewProp__Projectile_MetaData[] = {
		{ "Category", "Weapon_Projectile" },
		{ "ModuleRelativePath", "Weapon_Projectile.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_Projectile_Statics::NewProp__Projectile = { "_Projectile", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon_Projectile, _Projectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AC4EGameProjectProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Projectile_Statics::NewProp__Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Projectile_Statics::NewProp__Projectile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Projectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Projectile_Statics::NewProp__Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Projectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Projectile_Statics::ClassParams = {
		&AWeapon_Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Projectile_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Projectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Projectile()
	{
		if (!Z_Registration_Info_UClass_AWeapon_Projectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon_Projectile.OuterSingleton, Z_Construct_UClass_AWeapon_Projectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon_Projectile.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<AWeapon_Projectile>()
	{
		return AWeapon_Projectile::StaticClass();
	}
	AWeapon_Projectile::AWeapon_Projectile() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Projectile);
	AWeapon_Projectile::~AWeapon_Projectile() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Projectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Projectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon_Projectile, AWeapon_Projectile::StaticClass, TEXT("AWeapon_Projectile"), &Z_Registration_Info_UClass_AWeapon_Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon_Projectile), 3957891407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Projectile_h_1338135080(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Projectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
