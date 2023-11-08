// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collectable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACollectable;
class AController;
#ifdef C4EGAMEPROJECT_Collectable_generated_h
#error "Collectable.generated.h already included, missing '#pragma once' in Collectable.h"
#endif
#define C4EGAMEPROJECT_Collectable_generated_h

#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_7_DELEGATE \
C4EGAMEPROJECT_API void FCollectedSignature_DelegateWrapper(const FMulticastScriptDelegate& CollectedSignature, ACollectable* subject, AController* causer, int32 points);


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_SPARSE_DATA
#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastCollected);


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastCollected);


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_ACCESSORS
#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/C4EGameProject"), NO_API) \
	DECLARE_SERIALIZER(ACollectable)


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/C4EGameProject"), NO_API) \
	DECLARE_SERIALIZER(ACollectable)


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public: \
	NO_API virtual ~ACollectable();


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACollectable) \
	NO_API virtual ~ACollectable();


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_11_PROLOG
#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_SPARSE_DATA \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_RPC_WRAPPERS \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_ACCESSORS \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_INCLASS \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_SPARSE_DATA \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_ACCESSORS \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_INCLASS_NO_PURE_DECLS \
	FID_C4EGameProject_Source_C4EGameProject_Collectable_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C4EGAMEPROJECT_API UClass* StaticClass<class ACollectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C4EGameProject_Source_C4EGameProject_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
