// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457_M/DonkeyKong_SIS457_MGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_SIS457_MGameMode() {}
// Cross Module References
	DONKEYKONG_SIS457_M_API UClass* Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_NoRegister();
	DONKEYKONG_SIS457_M_API UClass* Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457_M();
// End Cross Module References
	void ADonkeyKong_SIS457_MGameMode::StaticRegisterNativesADonkeyKong_SIS457_MGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_NoRegister()
	{
		return ADonkeyKong_SIS457_MGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457_M,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKong_SIS457_MGameMode.h" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457_MGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_SIS457_MGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics::ClassParams = {
		&ADonkeyKong_SIS457_MGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_SIS457_MGameMode, 2661467310);
	template<> DONKEYKONG_SIS457_M_API UClass* StaticClass<ADonkeyKong_SIS457_MGameMode>()
	{
		return ADonkeyKong_SIS457_MGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_SIS457_MGameMode(Z_Construct_UClass_ADonkeyKong_SIS457_MGameMode, &ADonkeyKong_SIS457_MGameMode::StaticClass, TEXT("/Script/DonkeyKong_SIS457_M"), TEXT("ADonkeyKong_SIS457_MGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_SIS457_MGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
