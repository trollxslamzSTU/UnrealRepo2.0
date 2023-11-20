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
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(AC4EGameProjectGameMode::execHandle_GameRulePointsScored)
	{
		P_GET_OBJECT(AController,Z_Param_scorer);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_GameRulePointsScored(Z_Param_scorer,Z_Param_points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC4EGameProjectGameMode::execHandle_GameRuleCompleted)
	{
		P_GET_OBJECT(UGameRule,Z_Param_rule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_GameRuleCompleted(Z_Param_rule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC4EGameProjectGameMode::execDecreaseCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseCountdown();
		P_NATIVE_END;
	}
	void AC4EGameProjectGameMode::StaticRegisterNativesAC4EGameProjectGameMode()
	{
		UClass* Class = AC4EGameProjectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseCountdown", &AC4EGameProjectGameMode::execDecreaseCountdown },
			{ "Handle_GameRuleCompleted", &AC4EGameProjectGameMode::execHandle_GameRuleCompleted },
			{ "Handle_GameRulePointsScored", &AC4EGameProjectGameMode::execHandle_GameRulePointsScored },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4EGameProjectGameMode, nullptr, "DecreaseCountdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics
	{
		struct C4EGameProjectGameMode_eventHandle_GameRuleCompleted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::NewProp_rule_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::NewProp_rule = { "rule", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C4EGameProjectGameMode_eventHandle_GameRuleCompleted_Parms, rule), Z_Construct_UClass_UGameRule_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::NewProp_rule_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::NewProp_rule_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::NewProp_rule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4EGameProjectGameMode, nullptr, "Handle_GameRuleCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::C4EGameProjectGameMode_eventHandle_GameRuleCompleted_Parms), Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics
	{
		struct C4EGameProjectGameMode_eventHandle_GameRulePointsScored_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::NewProp_scorer = { "scorer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C4EGameProjectGameMode_eventHandle_GameRulePointsScored_Parms, scorer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C4EGameProjectGameMode_eventHandle_GameRulePointsScored_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::NewProp_scorer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC4EGameProjectGameMode, nullptr, "Handle_GameRulePointsScored", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::C4EGameProjectGameMode_eventHandle_GameRulePointsScored_Parms), Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC4EGameProjectGameMode);
	UClass* Z_Construct_UClass_AC4EGameProjectGameMode_NoRegister()
	{
		return AC4EGameProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AC4EGameProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__PlayerControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__PlayerControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__PlayerControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__CountDownTimer_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__CountDownTimer;
		static const UECodeGen_Private::FBoolPropertyParams NewProp__GameRuleManagers_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__GameRuleManagers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__GameRuleManagers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp__GameRuleManagers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC4EGameProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC4EGameProjectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC4EGameProjectGameMode_DecreaseCountdown, "DecreaseCountdown" }, // 2760006586
		{ &Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRuleCompleted, "Handle_GameRuleCompleted" }, // 3787284203
		{ &Z_Construct_UFunction_AC4EGameProjectGameMode_Handle_GameRulePointsScored, "Handle_GameRulePointsScored" }, // 241027766
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EGameProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "C4EGameProjectGameMode.h" },
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__PlayerControllers_Inner = { "_PlayerControllers", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__PlayerControllers_MetaData[] = {
		{ "Category", "C4EGameProjectGameMode" },
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__PlayerControllers = { "_PlayerControllers", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EGameProjectGameMode, _PlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__PlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__PlayerControllers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__CountDownTimer_MetaData[] = {
		{ "Category", "MatchManagement" },
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__CountDownTimer = { "_CountDownTimer", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EGameProjectGameMode, _CountDownTimer), METADATA_PARAMS(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__CountDownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__CountDownTimer_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers_ValueProp = { "_GameRuleManagers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers_Key_KeyProp = { "_GameRuleManagers_Key", nullptr, (EPropertyFlags)0x0004000000080001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers_MetaData[] = {
		{ "Category", "C4EGameProjectGameMode" },
		{ "ModuleRelativePath", "C4EGameProjectGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers = { "_GameRuleManagers", nullptr, (EPropertyFlags)0x0020088000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC4EGameProjectGameMode, _GameRuleManagers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC4EGameProjectGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__PlayerControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__PlayerControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__CountDownTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC4EGameProjectGameMode_Statics::NewProp__GameRuleManagers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC4EGameProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC4EGameProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC4EGameProjectGameMode_Statics::ClassParams = {
		&AC4EGameProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC4EGameProjectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC4EGameProjectGameMode_Statics::PropPointers),
		0,
		0x008802ADu,
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
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC4EGameProjectGameMode, AC4EGameProjectGameMode::StaticClass, TEXT("AC4EGameProjectGameMode"), &Z_Registration_Info_UClass_AC4EGameProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC4EGameProjectGameMode), 2623216738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_1945333733(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_C4EGameProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
