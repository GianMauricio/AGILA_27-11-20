// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/Eagle_Grab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEagle_Grab() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_UEagle_Grab_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_UEagle_Grab();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AGILA();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void UEagle_Grab::StaticRegisterNativesUEagle_Grab()
	{
	}
	UClass* Z_Construct_UClass_UEagle_Grab_NoRegister()
	{
		return UEagle_Grab::StaticClass();
	}
	struct Z_Construct_UClass_UEagle_Grab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEagle_Grab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEagle_Grab_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Eagle_Grab.h" },
		{ "ModuleRelativePath", "Eagle_Grab.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEagle_Grab_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Eagle_Grab" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Eagle_Grab.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEagle_Grab_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEagle_Grab, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEagle_Grab_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEagle_Grab_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEagle_Grab_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "Eagle_Grab" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Eagle_Grab.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEagle_Grab_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEagle_Grab, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEagle_Grab_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEagle_Grab_Statics::NewProp_camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEagle_Grab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEagle_Grab_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEagle_Grab_Statics::NewProp_camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEagle_Grab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEagle_Grab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEagle_Grab_Statics::ClassParams = {
		&UEagle_Grab::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEagle_Grab_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEagle_Grab_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEagle_Grab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEagle_Grab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEagle_Grab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEagle_Grab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEagle_Grab, 2100030477);
	template<> AGILA_API UClass* StaticClass<UEagle_Grab>()
	{
		return UEagle_Grab::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEagle_Grab(Z_Construct_UClass_UEagle_Grab, &UEagle_Grab::StaticClass, TEXT("/Script/AGILA"), TEXT("UEagle_Grab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEagle_Grab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
