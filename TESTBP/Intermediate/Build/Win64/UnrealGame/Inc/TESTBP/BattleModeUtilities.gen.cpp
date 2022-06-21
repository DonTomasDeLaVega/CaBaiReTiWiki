// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TESTBP/Public/BattleModeUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleModeUtilities() {}
// Cross Module References
	TESTBP_API UClass* Z_Construct_UClass_UBattleModeUtilities_NoRegister();
	TESTBP_API UClass* Z_Construct_UClass_UBattleModeUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TESTBP();
// End Cross Module References
	DEFINE_FUNCTION(UBattleModeUtilities::execSetGridReferences)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_left);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_right);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_up);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_down);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBattleModeUtilities::SetGridReferences(Z_Param_index,Z_Param_Out_left,Z_Param_Out_right,Z_Param_Out_up,Z_Param_Out_down);
		P_NATIVE_END;
	}
	void UBattleModeUtilities::StaticRegisterNativesUBattleModeUtilities()
	{
		UClass* Class = UBattleModeUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGridReferences", &UBattleModeUtilities::execSetGridReferences },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics
	{
		struct BattleModeUtilities_eventSetGridReferences_Parms
		{
			int32 index;
			int32 left;
			int32 right;
			int32 up;
			int32 down;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_left;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_right;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_up;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_down;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleModeUtilities_eventSetGridReferences_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleModeUtilities_eventSetGridReferences_Parms, left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleModeUtilities_eventSetGridReferences_Parms, right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_up = { "up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleModeUtilities_eventSetGridReferences_Parms, up), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_down = { "down", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BattleModeUtilities_eventSetGridReferences_Parms, down), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::NewProp_down,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Battle" },
		{ "ModuleRelativePath", "Public/BattleModeUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBattleModeUtilities, nullptr, "SetGridReferences", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::BattleModeUtilities_eventSetGridReferences_Parms), Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBattleModeUtilities);
	UClass* Z_Construct_UClass_UBattleModeUtilities_NoRegister()
	{
		return UBattleModeUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UBattleModeUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBattleModeUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TESTBP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBattleModeUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBattleModeUtilities_SetGridReferences, "SetGridReferences" }, // 31107128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBattleModeUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BattleModeUtilities.h" },
		{ "ModuleRelativePath", "Public/BattleModeUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBattleModeUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBattleModeUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBattleModeUtilities_Statics::ClassParams = {
		&UBattleModeUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBattleModeUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBattleModeUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBattleModeUtilities()
	{
		if (!Z_Registration_Info_UClass_UBattleModeUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBattleModeUtilities.OuterSingleton, Z_Construct_UClass_UBattleModeUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBattleModeUtilities.OuterSingleton;
	}
	template<> TESTBP_API UClass* StaticClass<UBattleModeUtilities>()
	{
		return UBattleModeUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBattleModeUtilities);
	struct Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_Public_BattleModeUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_Public_BattleModeUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBattleModeUtilities, UBattleModeUtilities::StaticClass, TEXT("UBattleModeUtilities"), &Z_Registration_Info_UClass_UBattleModeUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBattleModeUtilities), 389588811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_Public_BattleModeUtilities_h_2398587970(TEXT("/Script/TESTBP"),
		Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_Public_BattleModeUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_Public_BattleModeUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
