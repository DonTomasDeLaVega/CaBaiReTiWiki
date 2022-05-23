// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTBP_ServerUtilities_generated_h
#error "ServerUtilities.generated.h already included, missing '#pragma once' in ServerUtilities.h"
#endif
#define TESTBP_ServerUtilities_generated_h

#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_SPARSE_DATA
#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertIntArrayToFstring); \
	DECLARE_FUNCTION(execConvertFStringToIntArray); \
	DECLARE_FUNCTION(execConvertBytesToFString);


#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertIntArrayToFstring); \
	DECLARE_FUNCTION(execConvertFStringToIntArray); \
	DECLARE_FUNCTION(execConvertBytesToFString);


#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerUtilities(); \
	friend struct Z_Construct_UClass_UServerUtilities_Statics; \
public: \
	DECLARE_CLASS(UServerUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TESTBP"), NO_API) \
	DECLARE_SERIALIZER(UServerUtilities)


#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUServerUtilities(); \
	friend struct Z_Construct_UClass_UServerUtilities_Statics; \
public: \
	DECLARE_CLASS(UServerUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TESTBP"), NO_API) \
	DECLARE_SERIALIZER(UServerUtilities)


#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerUtilities(UServerUtilities&&); \
	NO_API UServerUtilities(const UServerUtilities&); \
public:


#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerUtilities(UServerUtilities&&); \
	NO_API UServerUtilities(const UServerUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerUtilities)


#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_12_PROLOG
#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_SPARSE_DATA \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_RPC_WRAPPERS \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_INCLASS \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_SPARSE_DATA \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_INCLASS_NO_PURE_DECLS \
	FID_TESTBP_Source_TESTBP_ServerUtilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTBP_API UClass* StaticClass<class UServerUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TESTBP_Source_TESTBP_ServerUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
