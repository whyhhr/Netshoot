// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionPerInstanceFadeAmount.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPerInstanceFadeAmount() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPerInstanceFadeAmount::StaticRegisterNativesUMaterialExpressionPerInstanceFadeAmount()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_NoRegister()
	{
		return UMaterialExpressionPerInstanceFadeAmount::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPerInstanceFadeAmount.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceFadeAmount.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPerInstanceFadeAmount>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics::ClassParams = {
		&UMaterialExpressionPerInstanceFadeAmount::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionPerInstanceFadeAmount, 40459971);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPerInstanceFadeAmount>()
	{
		return UMaterialExpressionPerInstanceFadeAmount::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPerInstanceFadeAmount(Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount, &UMaterialExpressionPerInstanceFadeAmount::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPerInstanceFadeAmount"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPerInstanceFadeAmount);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
