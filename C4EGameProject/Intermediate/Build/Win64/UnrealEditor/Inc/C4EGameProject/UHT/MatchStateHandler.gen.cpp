// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/MatchStateHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchStateHandler() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UMatchStateHandler();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UMatchStateHandler_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(IMatchStateHandler::execHandle_End)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_End_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMatchStateHandler::execHandle_MatchStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Handle_MatchStart_Implementation();
		P_NATIVE_END;
	}
	void IMatchStateHandler::Handle_End()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Handle_End instead.");
	}
	void IMatchStateHandler::Handle_MatchStart()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Handle_MatchStart instead.");
	}
	void UMatchStateHandler::StaticRegisterNativesUMatchStateHandler()
	{
		UClass* Class = UMatchStateHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Handle_End", &IMatchStateHandler::execHandle_End },
			{ "Handle_MatchStart", &IMatchStateHandler::execHandle_MatchStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatchStateHandler_Handle_End_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchStateHandler_Handle_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MatchStateHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchStateHandler_Handle_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchStateHandler, nullptr, "Handle_End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchStateHandler_Handle_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchStateHandler_Handle_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchStateHandler_Handle_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchStateHandler_Handle_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MatchStateHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchStateHandler, nullptr, "Handle_MatchStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchStateHandler);
	UClass* Z_Construct_UClass_UMatchStateHandler_NoRegister()
	{
		return UMatchStateHandler::StaticClass();
	}
	struct Z_Construct_UClass_UMatchStateHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchStateHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchStateHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchStateHandler_Handle_End, "Handle_End" }, // 3722583480
		{ &Z_Construct_UFunction_UMatchStateHandler_Handle_MatchStart, "Handle_MatchStart" }, // 1002561925
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchStateHandler_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MatchStateHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchStateHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMatchStateHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchStateHandler_Statics::ClassParams = {
		&UMatchStateHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchStateHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchStateHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchStateHandler()
	{
		if (!Z_Registration_Info_UClass_UMatchStateHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchStateHandler.OuterSingleton, Z_Construct_UClass_UMatchStateHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchStateHandler.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UMatchStateHandler>()
	{
		return UMatchStateHandler::StaticClass();
	}
	UMatchStateHandler::UMatchStateHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchStateHandler);
	UMatchStateHandler::~UMatchStateHandler() {}
	static FName NAME_UMatchStateHandler_Handle_End = FName(TEXT("Handle_End"));
	void IMatchStateHandler::Execute_Handle_End(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMatchStateHandler::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMatchStateHandler_Handle_End);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMatchStateHandler*)(O->GetNativeInterfaceAddress(UMatchStateHandler::StaticClass())))
		{
			I->Handle_End_Implementation();
		}
	}
	static FName NAME_UMatchStateHandler_Handle_MatchStart = FName(TEXT("Handle_MatchStart"));
	void IMatchStateHandler::Execute_Handle_MatchStart(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMatchStateHandler::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMatchStateHandler_Handle_MatchStart);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMatchStateHandler*)(O->GetNativeInterfaceAddress(UMatchStateHandler::StaticClass())))
		{
			I->Handle_MatchStart_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchStateHandler, UMatchStateHandler::StaticClass, TEXT("UMatchStateHandler"), &Z_Registration_Info_UClass_UMatchStateHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchStateHandler), 437658244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_1525405877(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_l021011n_STUDENT_001_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
