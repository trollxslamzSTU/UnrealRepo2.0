// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Weapon_Hitscan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Hitscan() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void AWeapon_Hitscan::StaticRegisterNativesAWeapon_Hitscan()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon_Hitscan);
	UClass* Z_Construct_UClass_AWeapon_Hitscan_NoRegister()
	{
		return AWeapon_Hitscan::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Hitscan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__Range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Hitscan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_Hitscan.h" },
		{ "ModuleRelativePath", "Weapon_Hitscan.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Damage_MetaData[] = {
		{ "Category", "Weapon_Hitscan" },
		{ "ModuleRelativePath", "Weapon_Hitscan.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Damage = { "_Damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon_Hitscan, _Damage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Range_MetaData[] = {
		{ "Category", "Weapon_Hitscan" },
		{ "ModuleRelativePath", "Weapon_Hitscan.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Range = { "_Range", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon_Hitscan, _Range), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Range_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Hitscan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp__Range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Hitscan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Hitscan>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Hitscan_Statics::ClassParams = {
		&AWeapon_Hitscan::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Hitscan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Hitscan()
	{
		if (!Z_Registration_Info_UClass_AWeapon_Hitscan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon_Hitscan.OuterSingleton, Z_Construct_UClass_AWeapon_Hitscan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon_Hitscan.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<AWeapon_Hitscan>()
	{
		return AWeapon_Hitscan::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Hitscan);
	AWeapon_Hitscan::~AWeapon_Hitscan() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Hitscan_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Hitscan_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon_Hitscan, AWeapon_Hitscan::StaticClass, TEXT("AWeapon_Hitscan"), &Z_Registration_Info_UClass_AWeapon_Hitscan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon_Hitscan), 325417881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Hitscan_h_4237919809(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Hitscan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Hitscan_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
