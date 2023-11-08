// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C4EPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef C4EGAMEPROJECT_C4EPlayerController_generated_h
#error "C4EPlayerController.generated.h already included, missing '#pragma once' in C4EPlayerController.h"
#endif
#define C4EGAMEPROJECT_C4EPlayerController_generated_h

#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_SPARSE_DATA
#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_RPC_WRAPPERS \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execInit);


#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execInit);


#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_ACCESSORS
#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_CALLBACK_WRAPPERS
#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC4EPlayerController(); \
	friend struct Z_Construct_UClass_AC4EPlayerController_Statics; \
public: \
	DECLARE_CLASS(AC4EPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/C4EGameProject"), NO_API) \
	DECLARE_SERIALIZER(AC4EPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AC4EPlayerController*>(this); }


#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAC4EPlayerController(); \
	friend struct Z_Construct_UClass_AC4EPlayerController_Statics; \
public: \
	DECLARE_CLASS(AC4EPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/C4EGameProject"), NO_API) \
	DECLARE_SERIALIZER(AC4EPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AC4EPlayerController*>(this); }


#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC4EPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC4EPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC4EPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC4EPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC4EPlayerController(AC4EPlayerController&&); \
	NO_API AC4EPlayerController(const AC4EPlayerController&); \
public: \
	NO_API virtual ~AC4EPlayerController();


#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC4EPlayerController(AC4EPlayerController&&); \
	NO_API AC4EPlayerController(const AC4EPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC4EPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC4EPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AC4EPlayerController) \
	NO_API virtual ~AC4EPlayerController();


#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_11_PROLOG
#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_SPARSE_DATA \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_RPC_WRAPPERS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_ACCESSORS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_CALLBACK_WRAPPERS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_INCLASS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_SPARSE_DATA \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_ACCESSORS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_CALLBACK_WRAPPERS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4EGAMEPROJECT_API UClass* StaticClass<class AC4EPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4EGameProject_Source_C4EGameProject_C4EPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
