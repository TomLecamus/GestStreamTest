// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GestStreamTest/Private/LevelLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelLoader() {}
// Cross Module References
	GESTSTREAMTEST_API UClass* Z_Construct_UClass_ALevelLoader_NoRegister();
	GESTSTREAMTEST_API UClass* Z_Construct_UClass_ALevelLoader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GestStreamTest();
// End Cross Module References
	void ALevelLoader::StaticRegisterNativesALevelLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelLoader);
	UClass* Z_Construct_UClass_ALevelLoader_NoRegister()
	{
		return ALevelLoader::StaticClass();
	}
	struct Z_Construct_UClass_ALevelLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelToLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GestStreamTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelLoader.h" },
		{ "ModuleRelativePath", "Private/LevelLoader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelLoader_Statics::NewProp_LevelToLoad_MetaData[] = {
		{ "Category", "LevelLoader" },
		{ "ModuleRelativePath", "Private/LevelLoader.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelLoader_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelLoader, LevelToLoad), METADATA_PARAMS(Z_Construct_UClass_ALevelLoader_Statics::NewProp_LevelToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelLoader_Statics::NewProp_LevelToLoad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLoader_Statics::NewProp_LevelToLoad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelLoader_Statics::ClassParams = {
		&ALevelLoader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelLoader_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelLoader()
	{
		if (!Z_Registration_Info_UClass_ALevelLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelLoader.OuterSingleton, Z_Construct_UClass_ALevelLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelLoader.OuterSingleton;
	}
	template<> GESTSTREAMTEST_API UClass* StaticClass<ALevelLoader>()
	{
		return ALevelLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelLoader);
	struct Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_LevelLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_LevelLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelLoader, ALevelLoader::StaticClass, TEXT("ALevelLoader"), &Z_Registration_Info_UClass_ALevelLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelLoader), 1777805773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_LevelLoader_h_1424123747(TEXT("/Script/GestStreamTest"),
		Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_LevelLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_LevelLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
