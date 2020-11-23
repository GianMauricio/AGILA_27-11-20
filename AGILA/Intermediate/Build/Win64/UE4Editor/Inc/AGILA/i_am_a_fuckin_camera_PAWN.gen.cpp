// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGILA/i_am_a_fuckin_camera_PAWN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodei_am_a_fuckin_camera_PAWN() {}
// Cross Module References
	AGILA_API UClass* Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_NoRegister();
	AGILA_API UClass* Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AGILA();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void Ai_am_a_fuckin_camera_PAWN::StaticRegisterNativesAi_am_a_fuckin_camera_PAWN()
	{
	}
	UClass* Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_NoRegister()
	{
		return Ai_am_a_fuckin_camera_PAWN::StaticClass();
	}
	struct Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speedMultiplyer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedMultiplyer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIN_MAX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MIN_MAX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticComps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticComps;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticComps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrowLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrowLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AGILA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "i_am_a_fuckin_camera_PAWN.h" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer = { "speedMultiplyer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, speedMultiplyer), METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_MIN_MAX_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "Comment", "//SetValues for the minimum Pitch\n" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
		{ "ToolTip", "SetValues for the minimum Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_MIN_MAX = { "MIN_MAX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MIN_MAX, Ai_am_a_fuckin_camera_PAWN), STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, MIN_MAX), METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_MIN_MAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_MIN_MAX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_StaticComps_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_StaticComps = { "StaticComps", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, StaticComps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_StaticComps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_StaticComps_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_StaticComps_Inner = { "StaticComps", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorMesh_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorMesh = { "actorMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, actorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorReference_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "Comment", "//TSubclassOf<AActor> actor;\n" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
		{ "ToolTip", "TSubclassOf<AActor> actor;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorReference = { "actorReference", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, actorReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation = { "arrowLocation", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, arrowLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_MIN_MAX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_StaticComps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_StaticComps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_actorReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ai_am_a_fuckin_camera_PAWN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::ClassParams = {
		&Ai_am_a_fuckin_camera_PAWN::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ai_am_a_fuckin_camera_PAWN, 666589326);
	template<> AGILA_API UClass* StaticClass<Ai_am_a_fuckin_camera_PAWN>()
	{
		return Ai_am_a_fuckin_camera_PAWN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ai_am_a_fuckin_camera_PAWN(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN, &Ai_am_a_fuckin_camera_PAWN::StaticClass, TEXT("/Script/AGILA"), TEXT("Ai_am_a_fuckin_camera_PAWN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ai_am_a_fuckin_camera_PAWN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
