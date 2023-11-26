// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/GameRule_Score.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRule_Score() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_Score();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_Score_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(UGameRule_Score::execHandle_ScoreUpdated)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_ScoreUpdated(Z_Param_points);
		P_NATIVE_END;
	}
	void UGameRule_Score::StaticRegisterNativesUGameRule_Score()
	{
		UClass* Class = UGameRule_Score::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Handle_ScoreUpdated", &UGameRule_Score::execHandle_ScoreUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics
	{
		struct GameRule_Score_eventHandle_ScoreUpdated_Parms
		{
			int32 points;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameRule_Score_eventHandle_ScoreUpdated_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameRule_Score.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRule_Score, nullptr, "Handle_ScoreUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::GameRule_Score_eventHandle_ScoreUpdated_Parms), Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameRule_Score);
	UClass* Z_Construct_UClass_UGameRule_Score_NoRegister()
	{
		return UGameRule_Score::StaticClass();
	}
	struct Z_Construct_UClass_UGameRule_Score_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__PointsToWin_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__PointsToWin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameRule_Score_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameRule,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameRule_Score_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameRule_Score_Handle_ScoreUpdated, "Handle_ScoreUpdated" }, // 3326093492
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Score_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameRule_Score.h" },
		{ "ModuleRelativePath", "GameRule_Score.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Score_Statics::NewProp__PointsToWin_MetaData[] = {
		{ "Category", "GameRule_Score" },
		{ "ModuleRelativePath", "GameRule_Score.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGameRule_Score_Statics::NewProp__PointsToWin = { "_PointsToWin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameRule_Score, _PointsToWin), METADATA_PARAMS(Z_Construct_UClass_UGameRule_Score_Statics::NewProp__PointsToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Score_Statics::NewProp__PointsToWin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameRule_Score_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameRule_Score_Statics::NewProp__PointsToWin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameRule_Score_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameRule_Score>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameRule_Score_Statics::ClassParams = {
		&UGameRule_Score::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameRule_Score_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Score_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameRule_Score_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Score_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameRule_Score()
	{
		if (!Z_Registration_Info_UClass_UGameRule_Score.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameRule_Score.OuterSingleton, Z_Construct_UClass_UGameRule_Score_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameRule_Score.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UGameRule_Score>()
	{
		return UGameRule_Score::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameRule_Score);
	UGameRule_Score::~UGameRule_Score() {}
	struct Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Score_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Score_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameRule_Score, UGameRule_Score::StaticClass, TEXT("UGameRule_Score"), &Z_Registration_Info_UClass_UGameRule_Score, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameRule_Score), 2591930249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Score_h_726972099(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Score_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Score_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
