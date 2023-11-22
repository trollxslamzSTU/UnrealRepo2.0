// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Collectable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectable() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_ACollectable();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	C4EGAMEPROJECT_API UFunction* Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics
	{
		struct _Script_C4EGameProject_eventCollectedSignature_Parms
		{
			ACollectable* subject;
			AController* causer;
			int32 points;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_subject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_causer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::NewProp_subject = { "subject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventCollectedSignature_Parms, subject), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::NewProp_causer = { "causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventCollectedSignature_Parms, causer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_C4EGameProject_eventCollectedSignature_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::NewProp_subject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::NewProp_causer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C4EGameProject, nullptr, "CollectedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::_Script_C4EGameProject_eventCollectedSignature_Parms), Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCollectedSignature_DelegateWrapper(const FMulticastScriptDelegate& CollectedSignature, ACollectable* subject, AController* causer, int32 points)
{
	struct _Script_C4EGameProject_eventCollectedSignature_Parms
	{
		ACollectable* subject;
		AController* causer;
		int32 points;
	};
	_Script_C4EGameProject_eventCollectedSignature_Parms Parms;
	Parms.subject=subject;
	Parms.causer=causer;
	Parms.points=points;
	CollectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACollectable::execBroadcastCollected)
	{
		P_GET_OBJECT(AController,Z_Param_causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastCollected(Z_Param_causer);
		P_NATIVE_END;
	}
	void ACollectable::StaticRegisterNativesACollectable()
	{
		UClass* Class = ACollectable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastCollected", &ACollectable::execBroadcastCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics
	{
		struct Collectable_eventBroadcastCollected_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::NewProp_causer = { "causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Collectable_eventBroadcastCollected_Parms, causer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::NewProp_causer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectable, nullptr, "BroadcastCollected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::Collectable_eventBroadcastCollected_Parms), Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectable_BroadcastCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollectable_BroadcastCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectable);
	UClass* Z_Construct_UClass_ACollectable_NoRegister()
	{
		return ACollectable::StaticClass();
	}
	struct Z_Construct_UClass_ACollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCollected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__SphereCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__SphereCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollectable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectable_BroadcastCollected, "BroadcastCollected" }, // 126961994
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collectable.h" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollected_MetaData[] = {
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollected = { "OnCollected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollectable, OnCollected), Z_Construct_UDelegateFunction_C4EGameProject_CollectedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollected_MetaData)) }; // 4047237742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp__SphereCollision_MetaData[] = {
		{ "Category", "Collectable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp__SphereCollision = { "_SphereCollision", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollectable, _SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp__SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp__SphereCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectable_Statics::NewProp_points_MetaData[] = {
		{ "Category", "Collectable" },
		{ "ModuleRelativePath", "Collectable.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACollectable_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollectable, points), METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::NewProp_points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_OnCollected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp__SphereCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectable_Statics::NewProp_points,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectable_Statics::ClassParams = {
		&ACollectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectable()
	{
		if (!Z_Registration_Info_UClass_ACollectable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectable.OuterSingleton, Z_Construct_UClass_ACollectable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollectable.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<ACollectable>()
	{
		return ACollectable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectable);
	ACollectable::~ACollectable() {}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Collectable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Collectable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollectable, ACollectable::StaticClass, TEXT("ACollectable"), &Z_Registration_Info_UClass_ACollectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectable), 1945579807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Collectable_h_2883557517(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Collectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_002_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Collectable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
