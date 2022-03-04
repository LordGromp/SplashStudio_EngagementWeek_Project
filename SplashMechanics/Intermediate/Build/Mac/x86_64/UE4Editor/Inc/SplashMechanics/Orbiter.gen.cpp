// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplashMechanics/Orbiter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbiter() {}
// Cross Module References
	SPLASHMECHANICS_API UClass* Z_Construct_UClass_AOrbiter_NoRegister();
	SPLASHMECHANICS_API UClass* Z_Construct_UClass_AOrbiter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SplashMechanics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AOrbiter::StaticRegisterNativesAOrbiter()
	{
	}
	UClass* Z_Construct_UClass_AOrbiter_NoRegister()
	{
		return AOrbiter::StaticClass();
	}
	struct Z_Construct_UClass_AOrbiter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shielding_MetaData[];
#endif
		static void NewProp_Shielding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shielding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrbiter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SplashMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbiter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Orbiter.h" },
		{ "ModuleRelativePath", "Orbiter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbiter_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Orbiter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOrbiter_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbiter, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOrbiter_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbiter_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbiter_Statics::NewProp_AxisVector_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Orbiter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOrbiter_Statics::NewProp_AxisVector = { "AxisVector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbiter, AxisVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOrbiter_Statics::NewProp_AxisVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbiter_Statics::NewProp_AxisVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbiter_Statics::NewProp_Scaler_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Orbiter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrbiter_Statics::NewProp_Scaler = { "Scaler", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbiter, Scaler), METADATA_PARAMS(Z_Construct_UClass_AOrbiter_Statics::NewProp_Scaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbiter_Statics::NewProp_Scaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbiter_Statics::NewProp_Shielding_MetaData[] = {
		{ "Category", "IsActive" },
		{ "ModuleRelativePath", "Orbiter.h" },
	};
#endif
	void Z_Construct_UClass_AOrbiter_Statics::NewProp_Shielding_SetBit(void* Obj)
	{
		((AOrbiter*)Obj)->Shielding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOrbiter_Statics::NewProp_Shielding = { "Shielding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOrbiter), &Z_Construct_UClass_AOrbiter_Statics::NewProp_Shielding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOrbiter_Statics::NewProp_Shielding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbiter_Statics::NewProp_Shielding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrbiter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbiter_Statics::NewProp_Dimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbiter_Statics::NewProp_AxisVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbiter_Statics::NewProp_Scaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbiter_Statics::NewProp_Shielding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrbiter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrbiter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrbiter_Statics::ClassParams = {
		&AOrbiter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOrbiter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrbiter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOrbiter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbiter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrbiter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrbiter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrbiter, 2736963684);
	template<> SPLASHMECHANICS_API UClass* StaticClass<AOrbiter>()
	{
		return AOrbiter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrbiter(Z_Construct_UClass_AOrbiter, &AOrbiter::StaticClass, TEXT("/Script/SplashMechanics"), TEXT("AOrbiter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrbiter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
