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
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(AC4ECharacter::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AC4ECharacter_Init = FName(TEXT("Init"));
	void AC4ECharacter::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC4ECharacter_Init),NULL);
	}
	void AC4ECharacter::StaticRegisterNativesAC4ECharacter()
	{
		UClass* Class = AC4ECharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &AC4ECharacter::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC4ECharacter_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC4ECharacter_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4ECharacter_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4ECharacter, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC4ECharacter_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4ECharacter_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC4ECharacter_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4ECharacter_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4ECharacter);
	UClass* Z_Construct_UClass_AC4ECharacter_NoRegister()
	{
		return AC4ECharacter::StaticClass();
	}
	struct Z_Construct_UClass_AC4ECharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__WeaponAttachPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__WeaponAttachPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__DefaultWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__DefaultWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__FireableRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__FireableRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC4ECharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC4ECharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC4ECharacter_Init, "Init" }, // 792193374
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C4ECharacter.h" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp__Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C4ECharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp__Camera = { "_Camera", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, _Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp__WeaponAttachPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C4ECharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp__WeaponAttachPoint = { "_WeaponAttachPoint", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, _WeaponAttachPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__WeaponAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__WeaponAttachPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp_PlayerMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp_PlayerMappingContext = { "PlayerMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, PlayerMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_PlayerMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_PlayerMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp_ShootAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_ShootAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_ShootAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp__DefaultWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp__DefaultWeapon = { "_DefaultWeapon", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, _DefaultWeapon), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__DefaultWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__DefaultWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4ECharacter_Statics::NewProp__FireableRef_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "C4ECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AC4ECharacter_Statics::NewProp__FireableRef = { "_FireableRef", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4ECharacter, _FireableRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__FireableRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::NewProp__FireableRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC4ECharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp__Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp__WeaponAttachPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp_PlayerMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp_ShootAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp__DefaultWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4ECharacter_Statics::NewProp__FireableRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC4ECharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4ECharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4ECharacter_Statics::ClassParams = {
		&AC4ECharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC4ECharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC4ECharacter_Statics::PropPointers),
		0,
		0x009000A5u,
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
	struct Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC4ECharacter, AC4ECharacter::StaticClass, TEXT("AC4ECharacter"), &Z_Registration_Info_UClass_AC4ECharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4ECharacter), 2375525103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_2214290782(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4ECharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
