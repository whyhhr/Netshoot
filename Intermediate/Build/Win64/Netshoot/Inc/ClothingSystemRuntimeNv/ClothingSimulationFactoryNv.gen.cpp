// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationFactoryNv() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationFactoryNv();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References
	void UClothingSimulationFactoryNv::StaticRegisterNativesUClothingSimulationFactoryNv()
	{
	}
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister()
	{
		return UClothingSimulationFactoryNv::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationFactoryNv_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothingSimulationFactoryNv.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationFactoryNv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationFactoryNv>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::ClassParams = {
		&UClothingSimulationFactoryNv::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingSimulationFactoryNv, 1482364201);
	template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothingSimulationFactoryNv>()
	{
		return UClothingSimulationFactoryNv::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationFactoryNv(Z_Construct_UClass_UClothingSimulationFactoryNv, &UClothingSimulationFactoryNv::StaticClass, TEXT("/Script/ClothingSystemRuntimeNv"), TEXT("UClothingSimulationFactoryNv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationFactoryNv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
