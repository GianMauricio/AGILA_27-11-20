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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AGILA_API UClass* Z_Construct_UClass_UEagle_Grab_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Ai_am_a_fuckin_camera_PAWN::execincreaseHealth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_increase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->increaseHealth(Z_Param_increase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ai_am_a_fuckin_camera_PAWN::execonDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ai_am_a_fuckin_camera_PAWN::exectakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->takeDamage(Z_Param_damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ai_am_a_fuckin_camera_PAWN::execgetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getHealth();
		P_NATIVE_END;
	}
	static FName NAME_Ai_am_a_fuckin_camera_PAWN_spawnDrops = FName(TEXT("spawnDrops"));
	void Ai_am_a_fuckin_camera_PAWN::spawnDrops()
	{
		ProcessEvent(FindFunctionChecked(NAME_Ai_am_a_fuckin_camera_PAWN_spawnDrops),NULL);
	}
	static FName NAME_Ai_am_a_fuckin_camera_PAWN_spawnItems = FName(TEXT("spawnItems"));
	void Ai_am_a_fuckin_camera_PAWN::spawnItems()
	{
		ProcessEvent(FindFunctionChecked(NAME_Ai_am_a_fuckin_camera_PAWN_spawnItems),NULL);
	}
	void Ai_am_a_fuckin_camera_PAWN::StaticRegisterNativesAi_am_a_fuckin_camera_PAWN()
	{
		UClass* Class = Ai_am_a_fuckin_camera_PAWN::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getHealth", &Ai_am_a_fuckin_camera_PAWN::execgetHealth },
			{ "increaseHealth", &Ai_am_a_fuckin_camera_PAWN::execincreaseHealth },
			{ "onDeath", &Ai_am_a_fuckin_camera_PAWN::execonDeath },
			{ "takeDamage", &Ai_am_a_fuckin_camera_PAWN::exectakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics
	{
		struct i_am_a_fuckin_camera_PAWN_eventgetHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(i_am_a_fuckin_camera_PAWN_eventgetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//health\n" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
		{ "ToolTip", "health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN, nullptr, "getHealth", nullptr, nullptr, sizeof(i_am_a_fuckin_camera_PAWN_eventgetHealth_Parms), Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics
	{
		struct i_am_a_fuckin_camera_PAWN_eventincreaseHealth_Parms
		{
			int32 increase;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_increase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::NewProp_increase = { "increase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(i_am_a_fuckin_camera_PAWN_eventincreaseHealth_Parms, increase), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::NewProp_increase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN, nullptr, "increaseHealth", nullptr, nullptr, sizeof(i_am_a_fuckin_camera_PAWN_eventincreaseHealth_Parms), Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN, nullptr, "onDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN, nullptr, "spawnDrops", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN, nullptr, "spawnItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics
	{
		struct i_am_a_fuckin_camera_PAWN_eventtakeDamage_Parms
		{
			int32 damage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(i_am_a_fuckin_camera_PAWN_eventtakeDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN, nullptr, "takeDamage", nullptr, nullptr, sizeof(i_am_a_fuckin_camera_PAWN_eventtakeDamage_Parms), Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_NoRegister()
	{
		return Ai_am_a_fuckin_camera_PAWN::StaticClass();
	}
	struct Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meatInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meatInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_didHit_MetaData[];
#endif
		static void NewProp_didHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_didHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speedMultiplyer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedMultiplyer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grabComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grabComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mouseSensitivity;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_getHealth, "getHealth" }, // 2025160489
		{ &Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_increaseHealth, "increaseHealth" }, // 3982229731
		{ &Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_onDeath, "onDeath" }, // 2113603981
		{ &Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnDrops, "spawnDrops" }, // 476999761
		{ &Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_spawnItems, "spawnItems" }, // 1292087969
		{ &Z_Construct_UFunction_Ai_am_a_fuckin_camera_PAWN_takeDamage, "takeDamage" }, // 2539644860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "i_am_a_fuckin_camera_PAWN.h" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_meatInventory_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_meatInventory = { "meatInventory", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, meatInventory), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_meatInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_meatInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_spawnTransform_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_spawnTransform = { "spawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, spawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_spawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_spawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_didHit_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	void Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_didHit_SetBit(void* Obj)
	{
		((Ai_am_a_fuckin_camera_PAWN*)Obj)->didHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_didHit = { "didHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Ai_am_a_fuckin_camera_PAWN), &Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_didHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_didHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_didHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_currentVelocity_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_currentVelocity = { "currentVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, currentVelocity), METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_currentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_currentVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, speed), METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_health_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, health), METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer = { "speedMultiplyer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, speedMultiplyer), METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_grabComponent_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_grabComponent = { "grabComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, grabComponent), Z_Construct_UClass_UEagle_Grab_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_grabComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_grabComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mouseSensitivity_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mouseSensitivity = { "mouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, mouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation = { "arrowLocation", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, arrowLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_arrowLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "i_am_a_fuckin_camera_PAWN" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "i_am_a_fuckin_camera_PAWN.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ai_am_a_fuckin_camera_PAWN, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_springArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_meatInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_spawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_didHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_currentVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_speedMultiplyer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_grabComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::NewProp_mouseSensitivity,
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
		FuncInfo,
		Z_Construct_UClass_Ai_am_a_fuckin_camera_PAWN_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(Ai_am_a_fuckin_camera_PAWN, 323535974);
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
