// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C4EGameProject/Fireable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireable() {}
// Cross Module References
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UFireable();
	C4EGAMEPROJECT_API UClass* Z_Construct_UClass_UFireable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_C4EGameProject();
// End Cross Module References
	DEFINE_FUNCTION(IFireable::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Fire_Implementation();
		P_NATIVE_END;
	}
	struct Fireable_eventFire_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Fireable_eventFire_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IFireable::Fire()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Fire instead.");
		Fireable_eventFire_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFireable::StaticRegisterNativesUFireable()
	{
		UClass* Class = UFireable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &IFireable::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFireable_Fire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Fireable_eventFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Fireable_eventFire_Parms), &Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFireable_Fire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireable_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fireable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireable_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireable, nullptr, "Fire", nullptr, nullptr, sizeof(Fireable_eventFire_Parms), Z_Construct_UFunction_UFireable_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireable_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireable_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireable_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireable_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFireable_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireable);
	UClass* Z_Construct_UClass_UFireable_NoRegister()
	{
		return UFireable::StaticClass();
	}
	struct Z_Construct_UClass_UFireable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_C4EGameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFireable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireable_Fire, "Fire" }, // 558605113
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fireable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFireable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireable_Statics::ClassParams = {
		&UFireable::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireable()
	{
		if (!Z_Registration_Info_UClass_UFireable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireable.OuterSingleton, Z_Construct_UClass_UFireable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFireable.OuterSingleton;
	}
	template<> C4EGAMEPROJECT_API UClass* StaticClass<UFireable>()
	{
		return UFireable::StaticClass();
	}
	UFireable::UFireable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireable);
	UFireable::~UFireable() {}
	static FName NAME_UFireable_Fire = FName(TEXT("Fire"));
	bool IFireable::Execute_Fire(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFireable::StaticClass()));
		Fireable_eventFire_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFireable_Fire);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFireable*)(O->GetNativeInterfaceAddress(UFireable::StaticClass())))
		{
			Parms.ReturnValue = I->Fire_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFireable, UFireable::StaticClass, TEXT("UFireable"), &Z_Registration_Info_UClass_UFireable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireable), 1118580102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_54077279(TEXT("/Script/C4EGameProject"),
		Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
