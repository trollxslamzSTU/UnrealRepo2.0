// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/BTService_UpdatePlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdatePlayerLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void UBTService_UpdatePlayerLocation::StaticRegisterNativesUBTService_UpdatePlayerLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_UpdatePlayerLocation);
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation_NoRegister()
	{
		return UBTService_UpdatePlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_UpdatePlayerLocation.h" },
		{ "ModuleRelativePath", "BTService_UpdatePlayerLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdatePlayerLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::ClassParams = {
		&UBTService_UpdatePlayerLocation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation()
	{
		if (!Z_Registration_Info_UClass_UBTService_UpdatePlayerLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdatePlayerLocation.OuterSingleton, Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_UpdatePlayerLocation.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UBTService_UpdatePlayerLocation>()
	{
		return UBTService_UpdatePlayerLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdatePlayerLocation);
	UBTService_UpdatePlayerLocation::~UBTService_UpdatePlayerLocation() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTService_UpdatePlayerLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTService_UpdatePlayerLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdatePlayerLocation, UBTService_UpdatePlayerLocation::StaticClass, TEXT("UBTService_UpdatePlayerLocation"), &Z_Registration_Info_UClass_UBTService_UpdatePlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdatePlayerLocation), 920781205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTService_UpdatePlayerLocation_h_2389342128(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTService_UpdatePlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_BTService_UpdatePlayerLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
