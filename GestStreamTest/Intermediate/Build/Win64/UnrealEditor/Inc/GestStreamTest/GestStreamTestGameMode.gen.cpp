// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GestStreamTest/GestStreamTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestStreamTestGameMode() {}
// Cross Module References
	GESTSTREAMTEST_API UClass* Z_Construct_UClass_AGestStreamTestGameMode_NoRegister();
	GESTSTREAMTEST_API UClass* Z_Construct_UClass_AGestStreamTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GestStreamTest();
// End Cross Module References
	void AGestStreamTestGameMode::StaticRegisterNativesAGestStreamTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGestStreamTestGameMode);
	UClass* Z_Construct_UClass_AGestStreamTestGameMode_NoRegister()
	{
		return AGestStreamTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGestStreamTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGestStreamTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GestStreamTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGestStreamTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GestStreamTestGameMode.h" },
		{ "ModuleRelativePath", "GestStreamTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGestStreamTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGestStreamTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGestStreamTestGameMode_Statics::ClassParams = {
		&AGestStreamTestGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGestStreamTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGestStreamTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGestStreamTestGameMode()
	{
		if (!Z_Registration_Info_UClass_AGestStreamTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGestStreamTestGameMode.OuterSingleton, Z_Construct_UClass_AGestStreamTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGestStreamTestGameMode.OuterSingleton;
	}
	template<> GESTSTREAMTEST_API UClass* StaticClass<AGestStreamTestGameMode>()
	{
		return AGestStreamTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGestStreamTestGameMode);
	struct Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_GestStreamTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_GestStreamTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGestStreamTestGameMode, AGestStreamTestGameMode::StaticClass, TEXT("AGestStreamTestGameMode"), &Z_Registration_Info_UClass_AGestStreamTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGestStreamTestGameMode), 3237710451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_GestStreamTestGameMode_h_3140635486(TEXT("/Script/GestStreamTest"),
		Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_GestStreamTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_GestStreamTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
