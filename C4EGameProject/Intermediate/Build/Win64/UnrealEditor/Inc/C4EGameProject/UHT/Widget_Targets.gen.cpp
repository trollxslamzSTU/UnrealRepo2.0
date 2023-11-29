// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Widget_Targets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Targets() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Targets();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Targets_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void UWidget_Targets::StaticRegisterNativesUWidget_Targets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_Targets);
	UClass* Z_Construct_UClass_UWidget_Targets_NoRegister()
	{
		return UWidget_Targets::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Targets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Targets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Targets_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget_Targets.h" },
		{ "ModuleRelativePath", "Widget_Targets.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Targets_Statics::NewProp_TargetText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Targets.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidget_Targets_Statics::NewProp_TargetText = { "TargetText", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidget_Targets, TargetText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Targets_Statics::NewProp_TargetText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Targets_Statics::NewProp_TargetText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Targets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Targets_Statics::NewProp_TargetText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Targets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Targets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Targets_Statics::ClassParams = {
		&UWidget_Targets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_Targets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Targets_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Targets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Targets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Targets()
	{
		if (!Z_Registration_Info_UClass_UWidget_Targets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_Targets.OuterSingleton, Z_Construct_UClass_UWidget_Targets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_Targets.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UWidget_Targets>()
	{
		return UWidget_Targets::StaticClass();
	}
	UWidget_Targets::UWidget_Targets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Targets);
	UWidget_Targets::~UWidget_Targets() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Targets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Targets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_Targets, UWidget_Targets::StaticClass, TEXT("UWidget_Targets"), &Z_Registration_Info_UClass_UWidget_Targets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_Targets), 1478496300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Targets_h_3327646443(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Targets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Targets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
