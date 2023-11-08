// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Weapon_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Base() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UFireable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void AWeapon_Base::StaticRegisterNativesAWeapon_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon_Base);
	UClass* Z_Construct_UClass_AWeapon_Base_NoRegister()
	{
		return AWeapon_Base::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Muzzle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__Muzzle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon_Base.h" },
		{ "ModuleRelativePath", "Weapon_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Root_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Root = { "_Root", nullptr, (EPropertyFlags)0x00240800000b001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon_Base, _Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Mesh_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Mesh = { "_Mesh", nullptr, (EPropertyFlags)0x00240800000b001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon_Base, _Mesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Muzzle_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Muzzle = { "_Muzzle", nullptr, (EPropertyFlags)0x00240800000b001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeapon_Base, _Muzzle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Muzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Muzzle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp__Muzzle,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapon_Base_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFireable_NoRegister, (int32)VTABLE_OFFSET(AWeapon_Base, IFireable), false },  // 1118580102
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Base_Statics::ClassParams = {
		&AWeapon_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Base_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Base()
	{
		if (!Z_Registration_Info_UClass_AWeapon_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon_Base.OuterSingleton, Z_Construct_UClass_AWeapon_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon_Base.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<AWeapon_Base>()
	{
		return AWeapon_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Base);
	AWeapon_Base::~AWeapon_Base() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon_Base, AWeapon_Base::StaticClass, TEXT("AWeapon_Base"), &Z_Registration_Info_UClass_AWeapon_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon_Base), 507474965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Base_h_901741771(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Weapon_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
