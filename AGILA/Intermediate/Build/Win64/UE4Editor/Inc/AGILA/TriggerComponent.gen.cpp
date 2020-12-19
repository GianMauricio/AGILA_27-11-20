// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/TriggerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_UTriggerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AGILA();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
	{
	}
	UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
	{
		return UTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_triggerReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TriggerComponent.h" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::NewProp_triggerReference_MetaData[] = {
		{ "Category", "TriggerComponent" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_triggerReference = { "triggerReference", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerComponent, triggerReference), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_triggerReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_triggerReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_triggerReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
		&UTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerComponent, 3842586298);
	template<> AGILA_API UClass* StaticClass<UTriggerComponent>()
	{
		return UTriggerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerComponent(Z_Construct_UClass_UTriggerComponent, &UTriggerComponent::StaticClass, TEXT("/Script/AGILA"), TEXT("UTriggerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
