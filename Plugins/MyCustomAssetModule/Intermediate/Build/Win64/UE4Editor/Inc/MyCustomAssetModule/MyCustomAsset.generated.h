// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYCUSTOMASSETMODULE_MyCustomAsset_generated_h
#error "MyCustomAsset.generated.h already included, missing '#pragma once' in MyCustomAsset.h"
#endif
#define MYCUSTOMASSETMODULE_MyCustomAsset_generated_h

#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_SPARSE_DATA
#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Inc(); \
		P_NATIVE_END; \
	}


#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Inc(); \
		P_NATIVE_END; \
	}


#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCustomAsset(); \
	friend struct Z_Construct_UClass_UMyCustomAsset_Statics; \
public: \
	DECLARE_CLASS(UMyCustomAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyCustomAssetModule"), NO_API) \
	DECLARE_SERIALIZER(UMyCustomAsset)


#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMyCustomAsset(); \
	friend struct Z_Construct_UClass_UMyCustomAsset_Statics; \
public: \
	DECLARE_CLASS(UMyCustomAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyCustomAssetModule"), NO_API) \
	DECLARE_SERIALIZER(UMyCustomAsset)


#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCustomAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCustomAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCustomAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCustomAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCustomAsset(UMyCustomAsset&&); \
	NO_API UMyCustomAsset(const UMyCustomAsset&); \
public:


#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCustomAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCustomAsset(UMyCustomAsset&&); \
	NO_API UMyCustomAsset(const UMyCustomAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCustomAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCustomAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCustomAsset)


#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_PRIVATE_PROPERTY_OFFSET
#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_8_PROLOG
#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_PRIVATE_PROPERTY_OFFSET \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_SPARSE_DATA \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_RPC_WRAPPERS \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_INCLASS \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_PRIVATE_PROPERTY_OFFSET \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_SPARSE_DATA \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_INCLASS_NO_PURE_DECLS \
	Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCUSTOMASSETMODULE_API UClass* StaticClass<class UMyCustomAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Client_Dev_Plugins_MyCustomAssetModule_Source_MyCustomAssetModule_Public_MyCustomAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
