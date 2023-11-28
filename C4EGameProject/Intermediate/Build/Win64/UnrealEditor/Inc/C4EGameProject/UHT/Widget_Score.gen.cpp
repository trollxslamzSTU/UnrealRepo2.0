// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Widget_Score.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Score() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Score();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UWidget_Score_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	void UWidget_Score::StaticRegisterNativesUWidget_Score()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_Score);
	UClass* Z_Construct_UClass_UWidget_Score_NoRegister()
	{
		return UWidget_Score::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Score_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScoreText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Score_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Score_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget_Score.h" },
		{ "ModuleRelativePath", "Widget_Score.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Score_Statics::NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Score.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidget_Score_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidget_Score, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Score_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Score_Statics::NewProp_ScoreText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Score_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Score_Statics::NewProp_ScoreText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Score_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Score>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Score_Statics::ClassParams = {
		&UWidget_Score::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_Score_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Score_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Score_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Score_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Score()
	{
		if (!Z_Registration_Info_UClass_UWidget_Score.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_Score.OuterSingleton, Z_Construct_UClass_UWidget_Score_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_Score.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UWidget_Score>()
	{
		return UWidget_Score::StaticClass();
	}
	UWidget_Score::UWidget_Score(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Score);
	UWidget_Score::~UWidget_Score() {}
	struct Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_Widget_Score_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_Widget_Score_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_Score, UWidget_Score::StaticClass, TEXT("UWidget_Score"), &Z_Registration_Info_UClass_UWidget_Score, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_Score), 1305665458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_Widget_Score_h_1060604587(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_Widget_Score_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C4EGameProject_Source_C4EGameProject_Widget_Score_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
