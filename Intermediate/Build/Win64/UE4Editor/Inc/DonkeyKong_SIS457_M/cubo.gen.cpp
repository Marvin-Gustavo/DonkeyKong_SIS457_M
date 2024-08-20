// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457_M/cubo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecubo() {}
// Cross Module References
	DONKEYKONG_SIS457_M_API UClass* Z_Construct_UClass_Acubo_NoRegister();
	DONKEYKONG_SIS457_M_API UClass* Z_Construct_UClass_Acubo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457_M();
// End Cross Module References
	void Acubo::StaticRegisterNativesAcubo()
	{
	}
	UClass* Z_Construct_UClass_Acubo_NoRegister()
	{
		return Acubo::StaticClass();
	}
	struct Z_Construct_UClass_Acubo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acubo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457_M,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acubo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "cubo.h" },
		{ "ModuleRelativePath", "cubo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acubo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acubo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acubo_Statics::ClassParams = {
		&Acubo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acubo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acubo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acubo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acubo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acubo, 1794188986);
	template<> DONKEYKONG_SIS457_M_API UClass* StaticClass<Acubo>()
	{
		return Acubo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acubo(Z_Construct_UClass_Acubo, &Acubo::StaticClass, TEXT("/Script/DonkeyKong_SIS457_M"), TEXT("Acubo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acubo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
