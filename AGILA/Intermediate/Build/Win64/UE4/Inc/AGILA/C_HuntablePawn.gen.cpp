// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/C_HuntablePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_HuntablePawn() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_AC_HuntablePawn_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_AC_HuntablePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AGILA();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void AC_HuntablePawn::StaticRegisterNativesAC_HuntablePawn()
	{
	}
	UClass* Z_Construct_UClass_AC_HuntablePawn_NoRegister()
	{
		return AC_HuntablePawn::StaticClass();
	}
	struct Z_Construct_UClass_AC_HuntablePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HuntableBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HuntableBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_HuntablePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_HuntablePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_HuntablePawn.h" },
		{ "ModuleRelativePath", "C_HuntablePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_HuntablePawn_Statics::NewProp_HuntableBody_MetaData[] = {
		{ "Category", "C_HuntablePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_HuntablePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_HuntablePawn_Statics::NewProp_HuntableBody = { "HuntableBody", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_HuntablePawn, HuntableBody), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_HuntablePawn_Statics::NewProp_HuntableBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_HuntablePawn_Statics::NewProp_HuntableBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_HuntablePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_HuntablePawn_Statics::NewProp_HuntableBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_HuntablePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_HuntablePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_HuntablePawn_Statics::ClassParams = {
		&AC_HuntablePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_HuntablePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_HuntablePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_HuntablePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_HuntablePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_HuntablePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_HuntablePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_HuntablePawn, 3022595947);
	template<> AGILA_API UClass* StaticClass<AC_HuntablePawn>()
	{
		return AC_HuntablePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_HuntablePawn(Z_Construct_UClass_AC_HuntablePawn, &AC_HuntablePawn::StaticClass, TEXT("/Script/AGILA"), TEXT("AC_HuntablePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_HuntablePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
