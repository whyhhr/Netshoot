// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseEvent_Hearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent_Hearing() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent();
// End Cross Module References
	void UAISenseEvent_Hearing::StaticRegisterNativesUAISenseEvent_Hearing()
	{
	}
	UClass* Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister()
	{
		return UAISenseEvent_Hearing::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseEvent_Hearing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseEvent_Hearing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_Hearing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Perception/AISenseEvent_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Hearing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_Hearing_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Hearing.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseEvent_Hearing_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseEvent_Hearing, Event), Z_Construct_UScriptStruct_FAINoiseEvent, METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseEvent_Hearing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseEvent_Hearing_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseEvent_Hearing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent_Hearing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_Hearing_Statics::ClassParams = {
		&UAISenseEvent_Hearing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseEvent_Hearing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseEvent_Hearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseEvent_Hearing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseEvent_Hearing, 3762775868);
	template<> AIMODULE_API UClass* StaticClass<UAISenseEvent_Hearing>()
	{
		return UAISenseEvent_Hearing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseEvent_Hearing(Z_Construct_UClass_UAISenseEvent_Hearing, &UAISenseEvent_Hearing::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseEvent_Hearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent_Hearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
