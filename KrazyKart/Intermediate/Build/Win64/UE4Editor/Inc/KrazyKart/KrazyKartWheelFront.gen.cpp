// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKart/KrazyKartWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartWheelFront() {}
// Cross Module References
	KRAZYKART_API UClass* Z_Construct_UClass_UKrazyKartWheelFront_NoRegister();
	KRAZYKART_API UClass* Z_Construct_UClass_UKrazyKartWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_KrazyKart();
// End Cross Module References
	void UKrazyKartWheelFront::StaticRegisterNativesUKrazyKartWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UKrazyKartWheelFront_NoRegister()
	{
		return UKrazyKartWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UKrazyKartWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKrazyKartWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKrazyKartWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KrazyKartWheelFront.h" },
		{ "ModuleRelativePath", "KrazyKartWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKrazyKartWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKrazyKartWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKrazyKartWheelFront_Statics::ClassParams = {
		&UKrazyKartWheelFront::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKrazyKartWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKrazyKartWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKrazyKartWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKrazyKartWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKrazyKartWheelFront, 1989770024);
	template<> KRAZYKART_API UClass* StaticClass<UKrazyKartWheelFront>()
	{
		return UKrazyKartWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKrazyKartWheelFront(Z_Construct_UClass_UKrazyKartWheelFront, &UKrazyKartWheelFront::StaticClass, TEXT("/Script/KrazyKart"), TEXT("UKrazyKartWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKrazyKartWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
