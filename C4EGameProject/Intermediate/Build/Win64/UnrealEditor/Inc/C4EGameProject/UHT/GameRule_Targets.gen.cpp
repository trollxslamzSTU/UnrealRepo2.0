// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/GameRule_Targets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRule_Targets() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_Targets();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UGameRule_Targets_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(UGameRule_Targets::execHandle_TargetDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_OBJECT(AController,Z_Param_causer);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_TargetDestroyed(Z_Param_target,Z_Param_causer,Z_Param_points);
		P_NATIVE_END;
	}
	void UGameRule_Targets::StaticRegisterNativesUGameRule_Targets()
	{
		UClass* Class = UGameRule_Targets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Handle_TargetDestroyed", &UGameRule_Targets::execHandle_TargetDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics
	{
		struct GameRule_Targets_eventHandle_TargetDestroyed_Parms
		{
			AActor* target;
			AController* causer;
			int32 points;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_causer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameRule_Targets_eventHandle_TargetDestroyed_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::NewProp_causer = { "causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameRule_Targets_eventHandle_TargetDestroyed_Parms, causer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameRule_Targets_eventHandle_TargetDestroyed_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::NewProp_causer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameRule_Targets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameRule_Targets, nullptr, "Handle_TargetDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::GameRule_Targets_eventHandle_TargetDestroyed_Parms), Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameRule_Targets);
	UClass* Z_Construct_UClass_UGameRule_Targets_NoRegister()
	{
		return UGameRule_Targets::StaticClass();
	}
	struct Z_Construct_UClass_UGameRule_Targets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__Targets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameRule_Targets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameRule,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameRule_Targets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameRule_Targets_Handle_TargetDestroyed, "Handle_TargetDestroyed" }, // 1561246404
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Targets_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameRule_Targets.h" },
		{ "ModuleRelativePath", "GameRule_Targets.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameRule_Targets_Statics::NewProp__Targets_Inner = { "_Targets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameRule_Targets_Statics::NewProp__Targets_MetaData[] = {
		{ "Category", "GameRule_Targets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameRule_Targets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameRule_Targets_Statics::NewProp__Targets = { "_Targets", nullptr, (EPropertyFlags)0x002408800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameRule_Targets, _Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameRule_Targets_Statics::NewProp__Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Targets_Statics::NewProp__Targets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameRule_Targets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameRule_Targets_Statics::NewProp__Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameRule_Targets_Statics::NewProp__Targets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameRule_Targets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameRule_Targets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameRule_Targets_Statics::ClassParams = {
		&UGameRule_Targets::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameRule_Targets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Targets_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameRule_Targets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameRule_Targets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameRule_Targets()
	{
		if (!Z_Registration_Info_UClass_UGameRule_Targets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameRule_Targets.OuterSingleton, Z_Construct_UClass_UGameRule_Targets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameRule_Targets.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UGameRule_Targets>()
	{
		return UGameRule_Targets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameRule_Targets);
	UGameRule_Targets::~UGameRule_Targets() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Targets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Targets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameRule_Targets, UGameRule_Targets::StaticClass, TEXT("UGameRule_Targets"), &Z_Registration_Info_UClass_UGameRule_Targets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameRule_Targets), 3388047169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Targets_h_3404278997(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Targets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_GameRule_Targets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
