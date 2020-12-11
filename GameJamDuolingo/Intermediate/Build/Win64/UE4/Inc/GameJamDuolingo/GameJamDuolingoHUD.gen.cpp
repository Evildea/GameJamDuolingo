// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJamDuolingo/GameJamDuolingoHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJamDuolingoHUD() {}
// Cross Module References
	GAMEJAMDUOLINGO_API UClass* Z_Construct_UClass_AGameJamDuolingoHUD_NoRegister();
	GAMEJAMDUOLINGO_API UClass* Z_Construct_UClass_AGameJamDuolingoHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GameJamDuolingo();
// End Cross Module References
	void AGameJamDuolingoHUD::StaticRegisterNativesAGameJamDuolingoHUD()
	{
	}
	UClass* Z_Construct_UClass_AGameJamDuolingoHUD_NoRegister()
	{
		return AGameJamDuolingoHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameJamDuolingoHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameJamDuolingoHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJamDuolingo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamDuolingoHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameJamDuolingoHUD.h" },
		{ "ModuleRelativePath", "GameJamDuolingoHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameJamDuolingoHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameJamDuolingoHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameJamDuolingoHUD_Statics::ClassParams = {
		&AGameJamDuolingoHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameJamDuolingoHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameJamDuolingoHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameJamDuolingoHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameJamDuolingoHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameJamDuolingoHUD, 2390611543);
	template<> GAMEJAMDUOLINGO_API UClass* StaticClass<AGameJamDuolingoHUD>()
	{
		return AGameJamDuolingoHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameJamDuolingoHUD(Z_Construct_UClass_AGameJamDuolingoHUD, &AGameJamDuolingoHUD::StaticClass, TEXT("/Script/GameJamDuolingo"), TEXT("AGameJamDuolingoHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameJamDuolingoHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
