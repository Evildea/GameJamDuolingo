// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJamDuolingo/GameJamDuolingoCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJamDuolingoCharacter() {}
// Cross Module References
	GAMEJAMDUOLINGO_API UClass* Z_Construct_UClass_AGameJamDuolingoCharacter_NoRegister();
	GAMEJAMDUOLINGO_API UClass* Z_Construct_UClass_AGameJamDuolingoCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GameJamDuolingo();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AGameJamDuolingoCharacter::StaticRegisterNativesAGameJamDuolingoCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGameJamDuolingoCharacter_NoRegister()
	{
		return AGameJamDuolingoCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGameJamDuolingoCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJamDuolingo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameJamDuolingoCharacter.h" },
		{ "ModuleRelativePath", "GameJamDuolingoCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "GameJamDuolingoCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AGameJamDuolingoCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGameJamDuolingoCharacter), &Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "GameJamDuolingoCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameJamDuolingoCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "GameJamDuolingoCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameJamDuolingoCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameJamDuolingoCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameJamDuolingoCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::NewProp_FirstPersonCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameJamDuolingoCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::ClassParams = {
		&AGameJamDuolingoCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameJamDuolingoCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameJamDuolingoCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameJamDuolingoCharacter, 1279957370);
	template<> GAMEJAMDUOLINGO_API UClass* StaticClass<AGameJamDuolingoCharacter>()
	{
		return AGameJamDuolingoCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameJamDuolingoCharacter(Z_Construct_UClass_AGameJamDuolingoCharacter, &AGameJamDuolingoCharacter::StaticClass, TEXT("/Script/GameJamDuolingo"), TEXT("AGameJamDuolingoCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameJamDuolingoCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
