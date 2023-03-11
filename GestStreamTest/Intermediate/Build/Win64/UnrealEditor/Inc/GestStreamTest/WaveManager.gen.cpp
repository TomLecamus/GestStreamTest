// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GestStreamTest/Private/WaveManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveManager() {}
// Cross Module References
	GESTSTREAMTEST_API UClass* Z_Construct_UClass_AWaveManager_NoRegister();
	GESTSTREAMTEST_API UClass* Z_Construct_UClass_AWaveManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GestStreamTest();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWaveManager::StaticRegisterNativesAWaveManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveManager);
	UClass* Z_Construct_UClass_AWaveManager_NoRegister()
	{
		return AWaveManager::StaticClass();
	}
	struct Z_Construct_UClass_AWaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GestStreamTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaveManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveManager.h" },
		{ "ModuleRelativePath", "Private/WaveManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaveManager_Statics::NewProp_HLODComp_MetaData[] = {
		{ "Category", "WaveManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaveManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveManager_Statics::NewProp_HLODComp = { "HLODComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaveManager, HLODComp), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaveManager_Statics::NewProp_HLODComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::NewProp_HLODComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveManager_Statics::NewProp_HLODComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveManager_Statics::ClassParams = {
		&AWaveManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWaveManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaveManager()
	{
		if (!Z_Registration_Info_UClass_AWaveManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveManager.OuterSingleton, Z_Construct_UClass_AWaveManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaveManager.OuterSingleton;
	}
	template<> GESTSTREAMTEST_API UClass* StaticClass<AWaveManager>()
	{
		return AWaveManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveManager);
	struct Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_WaveManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_WaveManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaveManager, AWaveManager::StaticClass, TEXT("AWaveManager"), &Z_Registration_Info_UClass_AWaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveManager), 3428940885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_WaveManager_h_952645626(TEXT("/Script/GestStreamTest"),
		Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_WaveManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GestStreamTest_Source_GestStreamTest_Private_WaveManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
