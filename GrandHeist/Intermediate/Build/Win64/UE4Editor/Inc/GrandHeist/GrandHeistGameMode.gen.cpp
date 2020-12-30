// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrandHeist/GrandHeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrandHeistGameMode() {}
// Cross Module References
	GRANDHEIST_API UClass* Z_Construct_UClass_AGrandHeistGameMode_NoRegister();
	GRANDHEIST_API UClass* Z_Construct_UClass_AGrandHeistGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GrandHeist();
// End Cross Module References
	void AGrandHeistGameMode::StaticRegisterNativesAGrandHeistGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGrandHeistGameMode_NoRegister()
	{
		return AGrandHeistGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGrandHeistGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrandHeistGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GrandHeist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrandHeistGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GrandHeistGameMode.h" },
		{ "ModuleRelativePath", "GrandHeistGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrandHeistGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrandHeistGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrandHeistGameMode_Statics::ClassParams = {
		&AGrandHeistGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGrandHeistGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrandHeistGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrandHeistGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrandHeistGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrandHeistGameMode, 56263089);
	template<> GRANDHEIST_API UClass* StaticClass<AGrandHeistGameMode>()
	{
		return AGrandHeistGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrandHeistGameMode(Z_Construct_UClass_AGrandHeistGameMode, &AGrandHeistGameMode::StaticClass, TEXT("/Script/GrandHeist"), TEXT("AGrandHeistGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrandHeistGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
