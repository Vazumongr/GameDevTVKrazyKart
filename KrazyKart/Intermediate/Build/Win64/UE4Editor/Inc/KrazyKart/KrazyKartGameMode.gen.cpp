// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKart/KrazyKartGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartGameMode() {}
// Cross Module References
	KRAZYKART_API UClass* Z_Construct_UClass_AKrazyKartGameMode_NoRegister();
	KRAZYKART_API UClass* Z_Construct_UClass_AKrazyKartGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KrazyKart();
// End Cross Module References
	void AKrazyKartGameMode::StaticRegisterNativesAKrazyKartGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKrazyKartGameMode_NoRegister()
	{
		return AKrazyKartGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKrazyKartGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKrazyKartGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKrazyKartGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KrazyKartGameMode.h" },
		{ "ModuleRelativePath", "KrazyKartGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKrazyKartGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKrazyKartGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKrazyKartGameMode_Statics::ClassParams = {
		&AKrazyKartGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKrazyKartGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKrazyKartGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKrazyKartGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKrazyKartGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKrazyKartGameMode, 1079318907);
	template<> KRAZYKART_API UClass* StaticClass<AKrazyKartGameMode>()
	{
		return AKrazyKartGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKrazyKartGameMode(Z_Construct_UClass_AKrazyKartGameMode, &AKrazyKartGameMode::StaticClass, TEXT("/Script/KrazyKart"), TEXT("AKrazyKartGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKrazyKartGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
