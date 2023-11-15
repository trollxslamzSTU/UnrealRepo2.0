// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/GameRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRule() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_NoRegister();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics
	{
		struct _Script_C4EGameProject_eventGameRuleCompletedSignature_Parms
		{
			UGameRule* rule;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::NewProp_rule_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::NewProp_rule = { "rule", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventGameRuleCompletedSignature_Parms, rule), Z_Construct_UClass_UGameRule_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::NewProp_rule_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::NewProp_rule_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::NewProp_rule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameRule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4EGameProject, nullptr, "GameRuleCompletedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::_Script_C4EGameProject_eventGameRuleCompletedSignature_Parms), Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4EGameProject_GameRuleCompletedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameRuleCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& GameRuleCompletedSignature, UGameRule* rule)
{
	struct _Script_C4EGameProject_eventGameRuleCompletedSignature_Parms
	{
		UGameRule* rule;
	};
	_Script_C4EGameProject_eventGameRuleCompletedSignature_Parms Parms;
	Parms.rule=rule;
	GameRuleCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics
	{
		struct _Script_C4EGameProject_eventGameRulePointsScoredSignature_Parms
		{
			AController* scorer;
			int32 points;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scorer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::NewProp_scorer = { "scorer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventGameRulePointsScoredSignature_Parms, scorer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventGameRulePointsScoredSignature_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::NewProp_scorer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameRule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4EGameProject, nullptr, "GameRulePointsScoredSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::_Script_C4EGameProject_eventGameRulePointsScoredSignature_Parms), Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4EGameProject_GameRulePointsScoredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameRulePointsScoredSignature_DelegateWrapper(const FMulticastScriptDelegate& GameRulePointsScoredSignature, AController* scorer, int32 points)
{
	struct _Script_C4EGameProject_eventGameRulePointsScoredSignature_Parms
	{
		AController* scorer;
		int32 points;
	};
	_Script_C4EGameProject_eventGameRulePointsScoredSignature_Parms Parms;
	Parms.scorer=scorer;
	Parms.points=points;
	GameRulePointsScoredSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGameRule::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	void UGameRule::StaticRegisterNativesUGameRule()
	{
		UClass* Class = UGameRule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UGameRule::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameRule_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRule_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameRule.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRule_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRule, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameRule_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRule_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameRule_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRule_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameRule);
	UClass* Z_Construct_UClass_UGameRule_NoRegister()
	{
		return UGameRule::StaticClass();
	}
	struct Z_Construct_UClass_UGameRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__IsOptional_MetaData[];
#endif
		static void NewProp__IsOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__IsOptional;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameRule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameRule_Init, "Init" }, // 3929424846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameRule.h" },
		{ "ModuleRelativePath", "GameRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Statics::NewProp__IsOptional_MetaData[] = {
		{ "Category", "GameRule" },
		{ "ModuleRelativePath", "GameRule.h" },
	};
#endif
	void Z_Construct_UClass_UGameRule_Statics::NewProp__IsOptional_SetBit(void* Obj)
	{
		((UGameRule*)Obj)->_IsOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameRule_Statics::NewProp__IsOptional = { "_IsOptional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameRule), &Z_Construct_UClass_UGameRule_Statics::NewProp__IsOptional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameRule_Statics::NewProp__IsOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Statics::NewProp__IsOptional_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameRule_Statics::NewProp__IsOptional,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameRule_Statics::ClassParams = {
		&UGameRule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGameRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameRule()
	{
		if (!Z_Registration_Info_UClass_UGameRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameRule.OuterSingleton, Z_Construct_UClass_UGameRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameRule.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UGameRule>()
	{
		return UGameRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameRule);
	UGameRule::~UGameRule() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameRule, UGameRule::StaticClass, TEXT("UGameRule"), &Z_Registration_Info_UClass_UGameRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameRule), 110070493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_h_4258870953(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
