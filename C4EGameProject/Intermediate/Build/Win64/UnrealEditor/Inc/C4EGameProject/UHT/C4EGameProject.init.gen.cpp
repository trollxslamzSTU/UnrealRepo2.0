// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC4EGameProject_init() {}
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_HealthComponentDamagedSignature__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_HealthComponentDeadSignature__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_OnPickUp__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_C4EGameProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_C4EGameProject()
	{
		if (!Z_Registration_Info_UPackage__Script_C4EGameProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_HealthComponentDamagedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_HealthComponentDeadSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_ScoreUpdatedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/C4EGameProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBCF67697,
				0xEEAC74BB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_C4EGameProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_C4EGameProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_C4EGameProject(Z_Construct_UPackage__Script_C4EGameProject, TEXT("/Script/C4EGameProject"), Z_Registration_Info_UPackage__Script_C4EGameProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBCF67697, 0xEEAC74BB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
