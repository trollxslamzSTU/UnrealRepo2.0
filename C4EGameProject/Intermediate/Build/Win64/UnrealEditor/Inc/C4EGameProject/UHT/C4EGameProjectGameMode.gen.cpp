// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/C4EGameProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4EGameProjectGameMode() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AC4EGameProjectGameMode();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_AC4EGameProjectGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void AC4EGameProjectGameMode::StaticRegisterNativesAC4EGameProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4EGameProjectGameMode);
	UClass* Z_Construct_UClass_AC4EGameProjectGameMode_NoRegister()
	{
		return AC4EGameProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AC4EGameProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC4EGameProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EGameProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "C4EGameProjectGameMode.h" },
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC4EGameProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4EGameProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::ClassParams = {
		&AC4EGameProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC4EGameProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AC4EGameProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC4EGameProjectGameMode.OuterSingleton, Z_Construct_UClass_AC4EGameProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC4EGameProjectGameMode.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<AC4EGameProjectGameMode>()
	{
		return AC4EGameProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC4EGameProjectGameMode);
	AC4EGameProjectGameMode::~AC4EGameProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC4EGameProjectGameMode, AC4EGameProjectGameMode::StaticClass, TEXT("AC4EGameProjectGameMode"), &Z_Registration_Info_UClass_AC4EGameProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4EGameProjectGameMode), 4076755561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_916237946(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
