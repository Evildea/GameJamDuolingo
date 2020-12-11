// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GAMEJAMDUOLINGO_GameJamDuolingoProjectile_generated_h
#error "GameJamDuolingoProjectile.generated.h already included, missing '#pragma once' in GameJamDuolingoProjectile.h"
#endif
#define GAMEJAMDUOLINGO_GameJamDuolingoProjectile_generated_h

#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameJamDuolingoProjectile(); \
	friend struct Z_Construct_UClass_AGameJamDuolingoProjectile_Statics; \
public: \
	DECLARE_CLASS(AGameJamDuolingoProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJamDuolingo"), NO_API) \
	DECLARE_SERIALIZER(AGameJamDuolingoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameJamDuolingoProjectile(); \
	friend struct Z_Construct_UClass_AGameJamDuolingoProjectile_Statics; \
public: \
	DECLARE_CLASS(AGameJamDuolingoProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJamDuolingo"), NO_API) \
	DECLARE_SERIALIZER(AGameJamDuolingoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameJamDuolingoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameJamDuolingoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamDuolingoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamDuolingoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamDuolingoProjectile(AGameJamDuolingoProjectile&&); \
	NO_API AGameJamDuolingoProjectile(const AGameJamDuolingoProjectile&); \
public:


#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamDuolingoProjectile(AGameJamDuolingoProjectile&&); \
	NO_API AGameJamDuolingoProjectile(const AGameJamDuolingoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamDuolingoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamDuolingoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameJamDuolingoProjectile)


#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGameJamDuolingoProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGameJamDuolingoProjectile, ProjectileMovement); }


#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_9_PROLOG
#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_RPC_WRAPPERS \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_INCLASS \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_INCLASS_NO_PURE_DECLS \
	GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAMDUOLINGO_API UClass* StaticClass<class AGameJamDuolingoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameJamDuolingo_Source_GameJamDuolingo_GameJamDuolingoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
