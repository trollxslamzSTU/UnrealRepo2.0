// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/BTTask_ClearBlackBoardValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ClearBlackBoardValue() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTTask_ClearBlackBoardValue();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UBTTask_ClearBlackBoardValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void UBTTask_ClearBlackBoardValue::StaticRegisterNativesUBTTask_ClearBlackBoardValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ClearBlackBoardValue);
	UClass* Z_Construct_UClass_UBTTask_ClearBlackBoardValue_NoRegister()
	{
		return UBTTask_ClearBlackBoardValue::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_ClearBlackBoardValue.h" },
		{ "ModuleRelativePath", "BTTask_ClearBlackBoardValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ClearBlackBoardValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics::ClassParams = {
		&UBTTask_ClearBlackBoardValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_ClearBlackBoardValue()
	{
		if (!Z_Registration_Info_UClass_UBTTask_ClearBlackBoardValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ClearBlackBoardValue.OuterSingleton, Z_Construct_UClass_UBTTask_ClearBlackBoardValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_ClearBlackBoardValue.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UBTTask_ClearBlackBoardValue>()
	{
		return UBTTask_ClearBlackBoardValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ClearBlackBoardValue);
	UBTTask_ClearBlackBoardValue::~UBTTask_ClearBlackBoardValue() {}
	struct Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_ClearBlackBoardValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_ClearBlackBoardValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ClearBlackBoardValue, UBTTask_ClearBlackBoardValue::StaticClass, TEXT("UBTTask_ClearBlackBoardValue"), &Z_Registration_Info_UClass_UBTTask_ClearBlackBoardValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ClearBlackBoardValue), 2318665533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_ClearBlackBoardValue_h_675185994(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_ClearBlackBoardValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_BTTask_ClearBlackBoardValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
