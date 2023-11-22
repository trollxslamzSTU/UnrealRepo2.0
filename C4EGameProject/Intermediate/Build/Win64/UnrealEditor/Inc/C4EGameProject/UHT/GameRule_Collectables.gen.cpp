// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/GameRule_Collectables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRule_Collectables() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_Collectables();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_Collectables_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(UGameRule_Collectables::execHandle_Collected)
	{
		P_GET_OBJECT(ACollectable,Z_Param_subject);
		P_GET_OBJECT(AController,Z_Param_causer);
		P_GET_PROPERTY(FIntProperty,Z_Param_PointsToAward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_Collected(Z_Param_subject,Z_Param_causer,Z_Param_PointsToAward);
		P_NATIVE_END;
	}
	void UGameRule_Collectables::StaticRegisterNativesUGameRule_Collectables()
	{
		UClass* Class = UGameRule_Collectables::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Handle_Collected", &UGameRule_Collectables::execHandle_Collected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics
	{
		struct GameRule_Collectables_eventHandle_Collected_Parms
		{
			ACollectable* subject;
			AController* causer;
			int32 PointsToAward;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_subject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_causer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PointsToAward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::NewProp_subject = { "subject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameRule_Collectables_eventHandle_Collected_Parms, subject), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::NewProp_causer = { "causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameRule_Collectables_eventHandle_Collected_Parms, causer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::NewProp_PointsToAward = { "PointsToAward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameRule_Collectables_eventHandle_Collected_Parms, PointsToAward), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::NewProp_subject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::NewProp_causer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::NewProp_PointsToAward,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameRule_Collectables.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRule_Collectables, nullptr, "Handle_Collected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::GameRule_Collectables_eventHandle_Collected_Parms), Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameRule_Collectables);
	UClass* Z_Construct_UClass_UGameRule_Collectables_NoRegister()
	{
		return UGameRule_Collectables::StaticClass();
	}
	struct Z_Construct_UClass_UGameRule_Collectables_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__Collectables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Collectables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__Collectables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameRule_Collectables_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameRule,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameRule_Collectables_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameRule_Collectables_Handle_Collected, "Handle_Collected" }, // 1330162665
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Collectables_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameRule_Collectables.h" },
		{ "ModuleRelativePath", "GameRule_Collectables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameRule_Collectables_Statics::NewProp__Collectables_Inner = { "_Collectables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Collectables_Statics::NewProp__Collectables_MetaData[] = {
		{ "Category", "GameRule_Collectables" },
		{ "ModuleRelativePath", "GameRule_Collectables.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameRule_Collectables_Statics::NewProp__Collectables = { "_Collectables", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameRule_Collectables, _Collectables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameRule_Collectables_Statics::NewProp__Collectables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Collectables_Statics::NewProp__Collectables_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameRule_Collectables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameRule_Collectables_Statics::NewProp__Collectables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameRule_Collectables_Statics::NewProp__Collectables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameRule_Collectables_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameRule_Collectables>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameRule_Collectables_Statics::ClassParams = {
		&UGameRule_Collectables::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameRule_Collectables_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Collectables_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameRule_Collectables_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Collectables_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameRule_Collectables()
	{
		if (!Z_Registration_Info_UClass_UGameRule_Collectables.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameRule_Collectables.OuterSingleton, Z_Construct_UClass_UGameRule_Collectables_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameRule_Collectables.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UGameRule_Collectables>()
	{
		return UGameRule_Collectables::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameRule_Collectables);
	UGameRule_Collectables::~UGameRule_Collectables() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Collectables_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Collectables_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameRule_Collectables, UGameRule_Collectables::StaticClass, TEXT("UGameRule_Collectables"), &Z_Registration_Info_UClass_UGameRule_Collectables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameRule_Collectables), 1392057711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Collectables_h_2771870431(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Collectables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Collectables_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
