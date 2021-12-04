// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSPROJECT_FPSProjectile_generated_h
#error "FPSProjectile.generated.h already included, missing '#pragma once' in FPSProjectile.h"
#endif
#define FPSPROJECT_FPSProjectile_generated_h

#define MyProject_Source_FPSProject_FPSProjectile_h_15_SPARSE_DATA
#define MyProject_Source_FPSProject_FPSProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_FPSProject_FPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_FPSProject_FPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define MyProject_Source_FPSProject_FPSProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define MyProject_Source_FPSProject_FPSProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectile(AFPSProjectile&&); \
	NO_API AFPSProjectile(const AFPSProjectile&); \
public:


#define MyProject_Source_FPSProject_FPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectile(AFPSProjectile&&); \
	NO_API AFPSProjectile(const AFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectile)


#define MyProject_Source_FPSProject_FPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_FPSProject_FPSProjectile_h_12_PROLOG
#define MyProject_Source_FPSProject_FPSProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_FPSProject_FPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_FPSProject_FPSProjectile_h_15_SPARSE_DATA \
	MyProject_Source_FPSProject_FPSProjectile_h_15_RPC_WRAPPERS \
	MyProject_Source_FPSProject_FPSProjectile_h_15_INCLASS \
	MyProject_Source_FPSProject_FPSProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_FPSProject_FPSProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_FPSProject_FPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_FPSProject_FPSProjectile_h_15_SPARSE_DATA \
	MyProject_Source_FPSProject_FPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_FPSProject_FPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_FPSProject_FPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_FPSProject_FPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
