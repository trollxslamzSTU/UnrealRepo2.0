// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MatchStateHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4EGAMEPROJECT_MatchStateHandler_generated_h
#error "MatchStateHandler.generated.h already included, missing '#pragma once' in MatchStateHandler.h"
#endif
#define C4EGAMEPROJECT_MatchStateHandler_generated_h

#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_SPARSE_DATA
#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_RPC_WRAPPERS \
	virtual void Handle_End_Implementation() {}; \
	virtual void Handle_MatchStart_Implementation() {}; \
 \
	DECLARE_FUNCTION(execHandle_End); \
	DECLARE_FUNCTION(execHandle_MatchStart);


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Handle_End_Implementation() {}; \
	virtual void Handle_MatchStart_Implementation() {}; \
 \
	DECLARE_FUNCTION(execHandle_End); \
	DECLARE_FUNCTION(execHandle_MatchStart);


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_ACCESSORS
#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_CALLBACK_WRAPPERS
#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	C4EGAMEPROJECT_API UMatchStateHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatchStateHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(C4EGAMEPROJECT_API, UMatchStateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchStateHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	C4EGAMEPROJECT_API UMatchStateHandler(UMatchStateHandler&&); \
	C4EGAMEPROJECT_API UMatchStateHandler(const UMatchStateHandler&); \
public: \
	C4EGAMEPROJECT_API virtual ~UMatchStateHandler();


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	C4EGAMEPROJECT_API UMatchStateHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	C4EGAMEPROJECT_API UMatchStateHandler(UMatchStateHandler&&); \
	C4EGAMEPROJECT_API UMatchStateHandler(const UMatchStateHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(C4EGAMEPROJECT_API, UMatchStateHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchStateHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatchStateHandler) \
	C4EGAMEPROJECT_API virtual ~UMatchStateHandler();


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMatchStateHandler(); \
	friend struct Z_Construct_UClass_UMatchStateHandler_Statics; \
public: \
	DECLARE_CLASS(UMatchStateHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/C4EGameProject"), C4EGAMEPROJECT_API) \
	DECLARE_SERIALIZER(UMatchStateHandler)


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMatchStateHandler() {} \
public: \
	typedef UMatchStateHandler UClassType; \
	typedef IMatchStateHandler ThisClass; \
	static void Execute_Handle_End(UObject* O); \
	static void Execute_Handle_MatchStart(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IMatchStateHandler() {} \
public: \
	typedef UMatchStateHandler UClassType; \
	typedef IMatchStateHandler ThisClass; \
	static void Execute_Handle_End(UObject* O); \
	static void Execute_Handle_MatchStart(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_7_PROLOG
#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_SPARSE_DATA \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_RPC_WRAPPERS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_ACCESSORS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_CALLBACK_WRAPPERS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_SPARSE_DATA \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_ACCESSORS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_CALLBACK_WRAPPERS \
	FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4EGAMEPROJECT_API UClass* StaticClass<class UMatchStateHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_l021011n_STUDENT_004_Documents_GitHub_UnrealRepo2_0_C4EGameProject_Source_C4EGameProject_MatchStateHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
