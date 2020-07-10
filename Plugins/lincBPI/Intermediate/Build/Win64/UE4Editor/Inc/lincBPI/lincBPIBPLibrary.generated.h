// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTableRowBase;
class UDataTable;
class UObject;
#ifdef LINCBPI_lincBPIBPLibrary_generated_h
#error "lincBPIBPLibrary.generated.h already included, missing '#pragma once' in lincBPIBPLibrary.h"
#endif
#define LINCBPI_lincBPIBPLibrary_generated_h

#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_SPARSE_DATA
#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveAsFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_GET_UBOOL(Z_Param_IsAppend); \
		P_GET_UBOOL(Z_Param_IsAutoBrAtStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UlincBPIBPLibrary::SaveAsFile(Z_Param_filename,Z_Param_content,Z_Param_IsAppend,Z_Param_IsAutoBrAtStart); \
		P_NATIVE_END; \
	}


#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveAsFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_GET_UBOOL(Z_Param_IsAppend); \
		P_GET_UBOOL(Z_Param_IsAutoBrAtStart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UlincBPIBPLibrary::SaveAsFile(Z_Param_filename,Z_Param_content,Z_Param_IsAppend,Z_Param_IsAutoBrAtStart); \
		P_NATIVE_END; \
	}


#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUlincBPIBPLibrary(); \
	friend struct Z_Construct_UClass_UlincBPIBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UlincBPIBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lincBPI"), NO_API) \
	DECLARE_SERIALIZER(UlincBPIBPLibrary)


#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUlincBPIBPLibrary(); \
	friend struct Z_Construct_UClass_UlincBPIBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UlincBPIBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lincBPI"), NO_API) \
	DECLARE_SERIALIZER(UlincBPIBPLibrary)


#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_STANDARD_CONSTRUCTORS \
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


#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
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


#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_15_PROLOG
#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_SPARSE_DATA \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_RPC_WRAPPERS \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_INCLASS \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_SPARSE_DATA \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINCBPI_API UClass* StaticClass<class UlincBPIBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Client_Dev_Plugins_lincBPI_Source_lincBPI_Public_lincBPIBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
