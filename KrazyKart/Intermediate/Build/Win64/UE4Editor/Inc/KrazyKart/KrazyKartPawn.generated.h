// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KRAZYKART_KrazyKartPawn_generated_h
#error "KrazyKartPawn.generated.h already included, missing '#pragma once' in KrazyKartPawn.h"
#endif
#define KRAZYKART_KrazyKartPawn_generated_h

#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_SPARSE_DATA
#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_RPC_WRAPPERS
#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKrazyKartPawn(); \
	friend struct Z_Construct_UClass_AKrazyKartPawn_Statics; \
public: \
	DECLARE_CLASS(AKrazyKartPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKart"), NO_API) \
	DECLARE_SERIALIZER(AKrazyKartPawn)


#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAKrazyKartPawn(); \
	friend struct Z_Construct_UClass_AKrazyKartPawn_Statics; \
public: \
	DECLARE_CLASS(AKrazyKartPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKart"), NO_API) \
	DECLARE_SERIALIZER(AKrazyKartPawn)


#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKrazyKartPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKrazyKartPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKrazyKartPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKrazyKartPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKrazyKartPawn(AKrazyKartPawn&&); \
	NO_API AKrazyKartPawn(const AKrazyKartPawn&); \
public:


#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKrazyKartPawn(AKrazyKartPawn&&); \
	NO_API AKrazyKartPawn(const AKrazyKartPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKrazyKartPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKrazyKartPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKrazyKartPawn)


#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AKrazyKartPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AKrazyKartPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AKrazyKartPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AKrazyKartPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AKrazyKartPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AKrazyKartPawn, InCarGear); }


#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_14_PROLOG
#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_SPARSE_DATA \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_RPC_WRAPPERS \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_INCLASS \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_SPARSE_DATA \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_INCLASS_NO_PURE_DECLS \
	KrazyKart_Source_KrazyKart_KrazyKartPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KRAZYKART_API UClass* StaticClass<class AKrazyKartPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KrazyKart_Source_KrazyKart_KrazyKartPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
