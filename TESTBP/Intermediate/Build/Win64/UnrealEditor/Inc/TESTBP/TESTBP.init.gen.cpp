// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTESTBP_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TESTBP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TESTBP()
	{
		if (!Z_Registration_Info_UPackage__Script_TESTBP.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TESTBP",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xAB39902C,
				0x5C43A3D4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TESTBP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TESTBP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TESTBP(Z_Construct_UPackage__Script_TESTBP, TEXT("/Script/TESTBP"), Z_Registration_Info_UPackage__Script_TESTBP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAB39902C, 0x5C43A3D4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
