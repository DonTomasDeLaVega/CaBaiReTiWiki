// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TESTBP/ServerUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerUtilities() {}
// Cross Module References
	TESTBP_API UClass* Z_Construct_UClass_UServerUtilities_NoRegister();
	TESTBP_API UClass* Z_Construct_UClass_UServerUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TESTBP();
// End Cross Module References
	DEFINE_FUNCTION(UServerUtilities::execConvertIntArrayToFstring)
	{
		P_GET_TARRAY(int32,Z_Param_intArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UServerUtilities::ConvertIntArrayToFstring(Z_Param_intArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerUtilities::execConvertFStringToIntArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UServerUtilities::ConvertFStringToIntArray(Z_Param_string);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerUtilities::execConvertBytesToFString)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UServerUtilities::ConvertBytesToFString(Z_Param_bytes);
		P_NATIVE_END;
	}
	void UServerUtilities::StaticRegisterNativesUServerUtilities()
	{
		UClass* Class = UServerUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertBytesToFString", &UServerUtilities::execConvertBytesToFString },
			{ "ConvertFStringToIntArray", &UServerUtilities::execConvertFStringToIntArray },
			{ "ConvertIntArrayToFstring", &UServerUtilities::execConvertIntArrayToFstring },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics
	{
		struct ServerUtilities_eventConvertBytesToFString_Parms
		{
			TArray<uint8> bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerUtilities_eventConvertBytesToFString_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerUtilities_eventConvertBytesToFString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::Function_MetaDataParams[] = {
		{ "Category", "ServerUtilities" },
		{ "ModuleRelativePath", "ServerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerUtilities, nullptr, "ConvertBytesToFString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::ServerUtilities_eventConvertBytesToFString_Parms), Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics
	{
		struct ServerUtilities_eventConvertFStringToIntArray_Parms
		{
			FString string;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_string;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerUtilities_eventConvertFStringToIntArray_Parms, string), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerUtilities_eventConvertFStringToIntArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::NewProp_string,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "ServerUtilities" },
		{ "ModuleRelativePath", "ServerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerUtilities, nullptr, "ConvertFStringToIntArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::ServerUtilities_eventConvertFStringToIntArray_Parms), Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics
	{
		struct ServerUtilities_eventConvertIntArrayToFstring_Parms
		{
			TArray<int32> intArray;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_intArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_intArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::NewProp_intArray_Inner = { "intArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::NewProp_intArray = { "intArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerUtilities_eventConvertIntArrayToFstring_Parms, intArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerUtilities_eventConvertIntArrayToFstring_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::NewProp_intArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::NewProp_intArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::Function_MetaDataParams[] = {
		{ "Category", "ServerUtilities" },
		{ "ModuleRelativePath", "ServerUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerUtilities, nullptr, "ConvertIntArrayToFstring", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::ServerUtilities_eventConvertIntArrayToFstring_Parms), Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UServerUtilities);
	UClass* Z_Construct_UClass_UServerUtilities_NoRegister()
	{
		return UServerUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UServerUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TESTBP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerUtilities_ConvertBytesToFString, "ConvertBytesToFString" }, // 120350055
		{ &Z_Construct_UFunction_UServerUtilities_ConvertFStringToIntArray, "ConvertFStringToIntArray" }, // 1708226624
		{ &Z_Construct_UFunction_UServerUtilities_ConvertIntArrayToFstring, "ConvertIntArrayToFstring" }, // 466957989
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ServerUtilities.h" },
		{ "ModuleRelativePath", "ServerUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UServerUtilities_Statics::ClassParams = {
		&UServerUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UServerUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerUtilities()
	{
		if (!Z_Registration_Info_UClass_UServerUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerUtilities.OuterSingleton, Z_Construct_UClass_UServerUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UServerUtilities.OuterSingleton;
	}
	template<> TESTBP_API UClass* StaticClass<UServerUtilities>()
	{
		return UServerUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerUtilities);
	struct Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_ServerUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_ServerUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UServerUtilities, UServerUtilities::StaticClass, TEXT("UServerUtilities"), &Z_Registration_Info_UClass_UServerUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerUtilities), 1542239914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_ServerUtilities_h_1132305815(TEXT("/Script/TESTBP"),
		Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_ServerUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TESTBP_Source_TESTBP_ServerUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
