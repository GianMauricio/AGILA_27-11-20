// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/Bird.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBird() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_ABird_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_ABird();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AGILA();
// End Cross Module References
	void ABird::StaticRegisterNativesABird()
	{
	}
	UClass* Z_Construct_UClass_ABird_NoRegister()
	{
		return ABird::StaticClass();
	}
	struct Z_Construct_UClass_ABird_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABird_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABird_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bird.h" },
		{ "ModuleRelativePath", "Bird.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABird_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABird>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABird_Statics::ClassParams = {
		&ABird::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ABird_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABird()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABird_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABird, 4228597869);
	template<> AGILA_API UClass* StaticClass<ABird>()
	{
		return ABird::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABird(Z_Construct_UClass_ABird, &ABird::StaticClass, TEXT("/Script/AGILA"), TEXT("ABird"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABird);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
