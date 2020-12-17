// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGILA_Bird_generated_h
#error "Bird.generated.h already included, missing '#pragma once' in Bird.h"
#endif
#define AGILA_Bird_generated_h

#define AGILA_Source_AGILA_Bird_h_12_SPARSE_DATA
#define AGILA_Source_AGILA_Bird_h_12_RPC_WRAPPERS
#define AGILA_Source_AGILA_Bird_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AGILA_Source_AGILA_Bird_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABird(); \
	friend struct Z_Construct_UClass_ABird_Statics; \
public: \
	DECLARE_CLASS(ABird, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGILA"), NO_API) \
	DECLARE_SERIALIZER(ABird)


#define AGILA_Source_AGILA_Bird_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABird(); \
	friend struct Z_Construct_UClass_ABird_Statics; \
public: \
	DECLARE_CLASS(ABird, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGILA"), NO_API) \
	DECLARE_SERIALIZER(ABird)


#define AGILA_Source_AGILA_Bird_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABird(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABird) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABird); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABird); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABird(ABird&&); \
	NO_API ABird(const ABird&); \
public:


#define AGILA_Source_AGILA_Bird_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABird(ABird&&); \
	NO_API ABird(const ABird&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABird); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABird); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABird)


#define AGILA_Source_AGILA_Bird_h_12_PRIVATE_PROPERTY_OFFSET
#define AGILA_Source_AGILA_Bird_h_9_PROLOG
#define AGILA_Source_AGILA_Bird_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGILA_Source_AGILA_Bird_h_12_PRIVATE_PROPERTY_OFFSET \
	AGILA_Source_AGILA_Bird_h_12_SPARSE_DATA \
	AGILA_Source_AGILA_Bird_h_12_RPC_WRAPPERS \
	AGILA_Source_AGILA_Bird_h_12_INCLASS \
	AGILA_Source_AGILA_Bird_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGILA_Source_AGILA_Bird_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGILA_Source_AGILA_Bird_h_12_PRIVATE_PROPERTY_OFFSET \
	AGILA_Source_AGILA_Bird_h_12_SPARSE_DATA \
	AGILA_Source_AGILA_Bird_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AGILA_Source_AGILA_Bird_h_12_INCLASS_NO_PURE_DECLS \
	AGILA_Source_AGILA_Bird_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGILA_API UClass* StaticClass<class ABird>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGILA_Source_AGILA_Bird_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
