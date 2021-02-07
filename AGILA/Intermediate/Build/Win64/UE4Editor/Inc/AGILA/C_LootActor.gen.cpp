// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/C_LootActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_LootActor() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_AC_LootActor_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_AC_LootActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGILA();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
// End Cross Module References
	void AC_LootActor::StaticRegisterNativesAC_LootActor()
	{
	}
	UClass* Z_Construct_UClass_AC_LootActor_NoRegister()
	{
		return AC_LootActor::StaticClass();
	}
	struct Z_Construct_UClass_AC_LootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestructibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_LootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_LootActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_LootActor.h" },
		{ "ModuleRelativePath", "C_LootActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_LootActor_Statics::NewProp_DestructibleComponent_MetaData[] = {
		{ "Category", "C_LootActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_LootActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_LootActor_Statics::NewProp_DestructibleComponent = { "DestructibleComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_LootActor, DestructibleComponent), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_LootActor_Statics::NewProp_DestructibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_LootActor_Statics::NewProp_DestructibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_LootActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_LootActor_Statics::NewProp_DestructibleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_LootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_LootActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_LootActor_Statics::ClassParams = {
		&AC_LootActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_LootActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_LootActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_LootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_LootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_LootActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_LootActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_LootActor, 4033616450);
	template<> AGILA_API UClass* StaticClass<AC_LootActor>()
	{
		return AC_LootActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_LootActor(Z_Construct_UClass_AC_LootActor, &AC_LootActor::StaticClass, TEXT("/Script/AGILA"), TEXT("AC_LootActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_LootActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
