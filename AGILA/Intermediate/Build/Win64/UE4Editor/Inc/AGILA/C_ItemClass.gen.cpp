// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/C_ItemClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_ItemClass() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_AC_ItemClass_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_AC_ItemClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGILA();
// End Cross Module References
	void AC_ItemClass::StaticRegisterNativesAC_ItemClass()
	{
	}
	UClass* Z_Construct_UClass_AC_ItemClass_NoRegister()
	{
		return AC_ItemClass::StaticClass();
	}
	struct Z_Construct_UClass_AC_ItemClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_ItemClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_ItemClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_ItemClass.h" },
		{ "ModuleRelativePath", "C_ItemClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_ItemClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_ItemClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_ItemClass_Statics::ClassParams = {
		&AC_ItemClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_ItemClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_ItemClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_ItemClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_ItemClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_ItemClass, 1804546162);
	template<> AGILA_API UClass* StaticClass<AC_ItemClass>()
	{
		return AC_ItemClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_ItemClass(Z_Construct_UClass_AC_ItemClass, &AC_ItemClass::StaticClass, TEXT("/Script/AGILA"), TEXT("AC_ItemClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_ItemClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
