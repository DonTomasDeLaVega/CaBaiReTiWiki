// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TESTBP/BatlleModeCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatlleModeCpp() {}
// Cross Module References
	TESTBP_API UClass* Z_Construct_UClass_ABatlleModeCpp_NoRegister();
	TESTBP_API UClass* Z_Construct_UClass_ABatlleModeCpp();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TESTBP();
// End Cross Module References
	void ABatlleModeCpp::StaticRegisterNativesABatlleModeCpp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatlleModeCpp);
	UClass* Z_Construct_UClass_ABatlleModeCpp_NoRegister()
	{
		return ABatlleModeCpp::StaticClass();
	}
	struct Z_Construct_UClass_ABatlleModeCpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatlleModeCpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TESTBP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatlleModeCpp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BatlleModeCpp.h" },
		{ "ModuleRelativePath", "BatlleModeCpp.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatlleModeCpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatlleModeCpp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatlleModeCpp_Statics::ClassParams = {
		&ABatlleModeCpp::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABatlleModeCpp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatlleModeCpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatlleModeCpp()
	{
		if (!Z_Registration_Info_UClass_ABatlleModeCpp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatlleModeCpp.OuterSingleton, Z_Construct_UClass_ABatlleModeCpp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABatlleModeCpp.OuterSingleton;
	}
	template<> TESTBP_API UClass* StaticClass<ABatlleModeCpp>()
	{
		return ABatlleModeCpp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatlleModeCpp);
	struct Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_BatlleModeCpp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_BatlleModeCpp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABatlleModeCpp, ABatlleModeCpp::StaticClass, TEXT("ABatlleModeCpp"), &Z_Registration_Info_UClass_ABatlleModeCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatlleModeCpp), 1983164989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_BatlleModeCpp_h_3579413340(TEXT("/Script/TESTBP"),
		Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_BatlleModeCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_BatlleModeCpp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
