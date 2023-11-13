// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fireable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4EGAMEPROJECT_Fireable_generated_h
#error "Fireable.generated.h already included, missing '#pragma once' in Fireable.h"
#endif
#define C4EGAMEPROJECT_Fireable_generated_h

#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_SPARSE_DATA
#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_RPC_WRAPPERS \
	virtual bool Fire_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execFire);


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Fire_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execFire);


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_ACCESSORS
#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_CALLBACK_WRAPPERS
#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFireable(UFireable&&); \
	NO_API UFireable(const UFireable&); \
public: \
	NO_API virtual ~UFireable();


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFireable(UFireable&&); \
	NO_API UFireable(const UFireable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireable) \
	NO_API virtual ~UFireable();


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFireable(); \
	friend struct Z_Construct_UClass_UFireable_Statics; \
public: \
	DECLARE_CLASS(UFireable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/C4EGameProject"), NO_API) \
	DECLARE_SERIALIZER(UFireable)


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFireable() {} \
public: \
	typedef UFireable UClassType; \
	typedef IFireable ThisClass; \
	static bool Execute_Fire(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IFireable() {} \
public: \
	typedef UFireable UClassType; \
	typedef IFireable ThisClass; \
	static bool Execute_Fire(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_8_PROLOG
#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_SPARSE_DATA \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_RPC_WRAPPERS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_ACCESSORS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_CALLBACK_WRAPPERS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_SPARSE_DATA \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_ACCESSORS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_CALLBACK_WRAPPERS \
	FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4EGAMEPROJECT_API UClass* StaticClass<class UFireable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_l021011n_STUDENT_003_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_Fireable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
