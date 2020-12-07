// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJamDuolingo/GameJamDuolingoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJamDuolingoGameMode() {}
// Cross Module References
	GAMEJAMDUOLINGO_API UClass* Z_Construct_UClass_AGameJamDuolingoGameMode_NoRegister();
	GAMEJAMDUOLINGO_API UClass* Z_Construct_UClass_AGameJamDuolingoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameJamDuolingo();
// End Cross Module References
	void AGameJamDuolingoGameMode::StaticRegisterNativesAGameJamDuolingoGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameJamDuolingoGameMode_NoRegister()
	{
		return AGameJamDuolingoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameJamDuolingoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameJamDuolingoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJamDuolingo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamDuolingoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameJamDuolingoGameMode.h" },
		{ "ModuleRelativePath", "GameJamDuolingoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameJamDuolingoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameJamDuolingoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameJamDuolingoGameMode_Statics::ClassParams = {
		&AGameJamDuolingoGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGameJamDuolingoGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameJamDuolingoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameJamDuolingoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameJamDuolingoGameMode, 2022260);
	template<> GAMEJAMDUOLINGO_API UClass* StaticClass<AGameJamDuolingoGameMode>()
	{
		return AGameJamDuolingoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameJamDuolingoGameMode(Z_Construct_UClass_AGameJamDuolingoGameMode, &AGameJamDuolingoGameMode::StaticClass, TEXT("/Script/GameJamDuolingo"), TEXT("AGameJamDuolingoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameJamDuolingoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
