// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
#ifdef LINCBPI_lincBPIBPLibrary_generated_h
#error "lincBPIBPLibrary.generated.h already included, missing '#pragma once' in lincBPIBPLibrary.h"
#endif
#define LINCBPI_lincBPIBPLibrary_generated_h

#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_SPARSE_DATA
#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRowDT) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DT); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewRowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UlincBPIBPLibrary::AddRowDT(Z_Param_DT,Z_Param_NewRowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteToText_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UlincBPIBPLibrary::WriteToText_String(Z_Param_filename,Z_Param_content); \
		P_NATIVE_END; \
	}


#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRowDT) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DT); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewRowName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UlincBPIBPLibrary::AddRowDT(Z_Param_DT,Z_Param_NewRowName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteToText_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UlincBPIBPLibrary::WriteToText_String(Z_Param_filename,Z_Param_content); \
		P_NATIVE_END; \
	}


#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUlincBPIBPLibrary(); \
	friend struct Z_Construct_UClass_UlincBPIBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UlincBPIBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lincBPI"), NO_API) \
	DECLARE_SERIALIZER(UlincBPIBPLibrary)


#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUlincBPIBPLibrary(); \
	friend struct Z_Construct_UClass_UlincBPIBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UlincBPIBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lincBPI"), NO_API) \
	DECLARE_SERIALIZER(UlincBPIBPLibrary)


#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlincBPIBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UlincBPIBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlincBPIBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlincBPIBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlincBPIBPLibrary(UlincBPIBPLibrary&&); \
	NO_API UlincBPIBPLibrary(const UlincBPIBPLibrary&); \
public:


#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlincBPIBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlincBPIBPLibrary(UlincBPIBPLibrary&&); \
	NO_API UlincBPIBPLibrary(const UlincBPIBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlincBPIBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlincBPIBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UlincBPIBPLibrary)


#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_8_PROLOG
#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_SPARSE_DATA \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_RPC_WRAPPERS \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_INCLASS \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_SPARSE_DATA \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
	MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class lincBPIBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINCBPI_API UClass* StaticClass<class UlincBPIBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyFunctionlibAndTools_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
