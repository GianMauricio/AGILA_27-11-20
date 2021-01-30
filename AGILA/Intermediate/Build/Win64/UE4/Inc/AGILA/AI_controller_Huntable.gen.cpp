// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/AI_controller_Huntable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_controller_Huntable() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_AAI_controller_Huntable_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_AAI_controller_Huntable();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AGILA();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AAI_controller_Huntable::StaticRegisterNativesAAI_controller_Huntable()
	{
	}
	UClass* Z_Construct_UClass_AAI_controller_Huntable_NoRegister()
	{
		return AAI_controller_Huntable::StaticClass();
	}
	struct Z_Construct_UClass_AAI_controller_Huntable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorCopy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorCopy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_controller_Huntable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_controller_Huntable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_controller_Huntable.h" },
		{ "ModuleRelativePath", "AI_controller_Huntable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_controller_Huntable_Statics::NewProp_actorCopy_MetaData[] = {
		{ "Category", "AI_controller_Huntable" },
		{ "ModuleRelativePath", "AI_controller_Huntable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_controller_Huntable_Statics::NewProp_actorCopy = { "actorCopy", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_controller_Huntable, actorCopy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_controller_Huntable_Statics::NewProp_actorCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_controller_Huntable_Statics::NewProp_actorCopy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_controller_Huntable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_controller_Huntable_Statics::NewProp_actorCopy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_controller_Huntable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_controller_Huntable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_controller_Huntable_Statics::ClassParams = {
		&AAI_controller_Huntable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_controller_Huntable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_controller_Huntable_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_controller_Huntable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_controller_Huntable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_controller_Huntable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_controller_Huntable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_controller_Huntable, 3778159305);
	template<> AGILA_API UClass* StaticClass<AAI_controller_Huntable>()
	{
		return AAI_controller_Huntable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_controller_Huntable(Z_Construct_UClass_AAI_controller_Huntable, &AAI_controller_Huntable::StaticClass, TEXT("/Script/AGILA"), TEXT("AAI_controller_Huntable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_controller_Huntable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
