// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGILA_C_ItemClass_generated_h
#error "C_ItemClass.generated.h already included, missing '#pragma once' in C_ItemClass.h"
#endif
#define AGILA_C_ItemClass_generated_h

#define AGILA_Source_AGILA_C_ItemClass_h_12_SPARSE_DATA
#define AGILA_Source_AGILA_C_ItemClass_h_12_RPC_WRAPPERS
#define AGILA_Source_AGILA_C_ItemClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AGILA_Source_AGILA_C_ItemClass_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_ItemClass(); \
	friend struct Z_Construct_UClass_AC_ItemClass_Statics; \
public: \
	DECLARE_CLASS(AC_ItemClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGILA"), NO_API) \
	DECLARE_SERIALIZER(AC_ItemClass)


#define AGILA_Source_AGILA_C_ItemClass_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAC_ItemClass(); \
	friend struct Z_Construct_UClass_AC_ItemClass_Statics; \
public: \
	DECLARE_CLASS(AC_ItemClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGILA"), NO_API) \
	DECLARE_SERIALIZER(AC_ItemClass)


#define AGILA_Source_AGILA_C_ItemClass_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_ItemClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_ItemClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_ItemClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_ItemClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_ItemClass(AC_ItemClass&&); \
	NO_API AC_ItemClass(const AC_ItemClass&); \
public:


#define AGILA_Source_AGILA_C_ItemClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_ItemClass(AC_ItemClass&&); \
	NO_API AC_ItemClass(const AC_ItemClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_ItemClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_ItemClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_ItemClass)


#define AGILA_Source_AGILA_C_ItemClass_h_12_PRIVATE_PROPERTY_OFFSET
#define AGILA_Source_AGILA_C_ItemClass_h_9_PROLOG
#define AGILA_Source_AGILA_C_ItemClass_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGILA_Source_AGILA_C_ItemClass_h_12_PRIVATE_PROPERTY_OFFSET \
	AGILA_Source_AGILA_C_ItemClass_h_12_SPARSE_DATA \
	AGILA_Source_AGILA_C_ItemClass_h_12_RPC_WRAPPERS \
	AGILA_Source_AGILA_C_ItemClass_h_12_INCLASS \
	AGILA_Source_AGILA_C_ItemClass_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGILA_Source_AGILA_C_ItemClass_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGILA_Source_AGILA_C_ItemClass_h_12_PRIVATE_PROPERTY_OFFSET \
	AGILA_Source_AGILA_C_ItemClass_h_12_SPARSE_DATA \
	AGILA_Source_AGILA_C_ItemClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AGILA_Source_AGILA_C_ItemClass_h_12_INCLASS_NO_PURE_DECLS \
	AGILA_Source_AGILA_C_ItemClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGILA_API UClass* StaticClass<class AC_ItemClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGILA_Source_AGILA_C_ItemClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
