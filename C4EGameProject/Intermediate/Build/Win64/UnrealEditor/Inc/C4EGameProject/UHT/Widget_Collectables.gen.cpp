// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Widget_Collectables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Collectables() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Collectables();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Collectables_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void UWidget_Collectables::StaticRegisterNativesUWidget_Collectables()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_Collectables);
	UClass* Z_Construct_UClass_UWidget_Collectables_NoRegister()
	{
		return UWidget_Collectables::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Collectables_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectableText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollectableText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Collectables_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Collectables_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget_Collectables.h" },
		{ "ModuleRelativePath", "Widget_Collectables.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Collectables_Statics::NewProp_CollectableText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Collectables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidget_Collectables_Statics::NewProp_CollectableText = { "CollectableText", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidget_Collectables, CollectableText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Collectables_Statics::NewProp_CollectableText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Collectables_Statics::NewProp_CollectableText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Collectables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Collectables_Statics::NewProp_CollectableText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Collectables_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Collectables>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Collectables_Statics::ClassParams = {
		&UWidget_Collectables::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_Collectables_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Collectables_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Collectables_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Collectables_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Collectables()
	{
		if (!Z_Registration_Info_UClass_UWidget_Collectables.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_Collectables.OuterSingleton, Z_Construct_UClass_UWidget_Collectables_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_Collectables.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UWidget_Collectables>()
	{
		return UWidget_Collectables::StaticClass();
	}
	UWidget_Collectables::UWidget_Collectables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Collectables);
	UWidget_Collectables::~UWidget_Collectables() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Collectables_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Collectables_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_Collectables, UWidget_Collectables::StaticClass, TEXT("UWidget_Collectables"), &Z_Registration_Info_UClass_UWidget_Collectables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_Collectables), 3585034742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Collectables_h_2915404314(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Collectables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Widget_Collectables_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
