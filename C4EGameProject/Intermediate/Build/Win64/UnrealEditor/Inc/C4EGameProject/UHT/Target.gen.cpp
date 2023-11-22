// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Target.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UTarget();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UTarget_NoRegister();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics
	{
		struct _Script_C4EGameProject_eventTargetDestroyedSignature_Parms
		{
			AActor* target;
			AController* delegateInstigator;
			int32 points;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_delegateInstigator;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventTargetDestroyedSignature_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::NewProp_delegateInstigator = { "delegateInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventTargetDestroyedSignature_Parms, delegateInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventTargetDestroyedSignature_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::NewProp_delegateInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4EGameProject, nullptr, "TargetDestroyedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::_Script_C4EGameProject_eventTargetDestroyedSignature_Parms), Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTargetDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& TargetDestroyedSignature, AActor* target, AController* delegateInstigator, int32 points)
{
	struct _Script_C4EGameProject_eventTargetDestroyedSignature_Parms
	{
		AActor* target;
		AController* delegateInstigator;
		int32 points;
	};
	_Script_C4EGameProject_eventTargetDestroyedSignature_Parms Parms;
	Parms.target=target;
	Parms.delegateInstigator=delegateInstigator;
	Parms.points=points;
	TargetDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTarget::execHandle_Dead)
	{
		P_GET_OBJECT(AController,Z_Param_causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_Dead(Z_Param_causer);
		P_NATIVE_END;
	}
	void UTarget::StaticRegisterNativesUTarget()
	{
		UClass* Class = UTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Handle_Dead", &UTarget::execHandle_Dead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTarget_Handle_Dead_Statics
	{
		struct Target_eventHandle_Dead_Parms
		{
			AController* causer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_causer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTarget_Handle_Dead_Statics::NewProp_causer = { "causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Target_eventHandle_Dead_Parms, causer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTarget_Handle_Dead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTarget_Handle_Dead_Statics::NewProp_causer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTarget_Handle_Dead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTarget_Handle_Dead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTarget, nullptr, "Handle_Dead", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTarget_Handle_Dead_Statics::Target_eventHandle_Dead_Parms), Z_Construct_UFunction_UTarget_Handle_Dead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTarget_Handle_Dead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTarget_Handle_Dead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTarget_Handle_Dead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTarget_Handle_Dead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTarget_Handle_Dead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTarget);
	UClass* Z_Construct_UClass_UTarget_NoRegister()
	{
		return UTarget::StaticClass();
	}
	struct Z_Construct_UClass_UTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__HealthComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__HealthComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsToAward_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PointsToAward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTarget_Handle_Dead, "Handle_Dead" }, // 3062009558
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Target.h" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTarget_Statics::NewProp_OnTargetDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTarget_Statics::NewProp_OnTargetDestroyed = { "OnTargetDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTarget, OnTargetDestroyed), Z_Construct_UDelegateFunction_C4EGameProject_TargetDestroyedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTarget_Statics::NewProp_OnTargetDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTarget_Statics::NewProp_OnTargetDestroyed_MetaData)) }; // 3370108894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTarget_Statics::NewProp__HealthComp_MetaData[] = {
		{ "Category", "Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTarget_Statics::NewProp__HealthComp = { "_HealthComp", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTarget, _HealthComp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTarget_Statics::NewProp__HealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTarget_Statics::NewProp__HealthComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTarget_Statics::NewProp_PointsToAward_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTarget_Statics::NewProp_PointsToAward = { "PointsToAward", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTarget, PointsToAward), METADATA_PARAMS(Z_Construct_UClass_UTarget_Statics::NewProp_PointsToAward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTarget_Statics::NewProp_PointsToAward_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTarget_Statics::NewProp_OnTargetDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTarget_Statics::NewProp__HealthComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTarget_Statics::NewProp_PointsToAward,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTarget_Statics::ClassParams = {
		&UTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTarget_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTarget()
	{
		if (!Z_Registration_Info_UClass_UTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTarget.OuterSingleton, Z_Construct_UClass_UTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTarget.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UTarget>()
	{
		return UTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTarget);
	UTarget::~UTarget() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Target_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Target_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTarget, UTarget::StaticClass, TEXT("UTarget"), &Z_Registration_Info_UClass_UTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTarget), 3943296429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Target_h_2687578663(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Target_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Target_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
