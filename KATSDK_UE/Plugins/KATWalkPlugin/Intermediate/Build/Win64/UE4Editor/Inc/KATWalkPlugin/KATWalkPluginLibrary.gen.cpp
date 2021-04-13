// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KATWalkPlugin/Public/KATWalkPluginLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKATWalkPluginLibrary() {}
// Cross Module References
	KATWALKPLUGIN_API UClass* Z_Construct_UClass_UKATWalkPluginLibrary_NoRegister();
	KATWALKPLUGIN_API UClass* Z_Construct_UClass_UKATWalkPluginLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_KATWalkPlugin();
	KATWALKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FKATDataCore();
// End Cross Module References
	DEFINE_FUNCTION(UKATWalkPluginLibrary::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UKATWalkPluginLibrary::Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKATWalkPluginLibrary::execUpdateDataCore)
	{
		P_GET_STRUCT(FKATDataCore,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKATDataCore*)Z_Param__Result=UKATWalkPluginLibrary::UpdateDataCore(Z_Param_data);
		P_NATIVE_END;
	}
	void UKATWalkPluginLibrary::StaticRegisterNativesUKATWalkPluginLibrary()
	{
		UClass* Class = UKATWalkPluginLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UKATWalkPluginLibrary::execInit },
			{ "UpdateDataCore", &UKATWalkPluginLibrary::execUpdateDataCore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics
	{
		struct KATWalkPluginLibrary_eventInit_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KATWalkPluginLibrary_eventInit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "KAT_GET_DATA" },
		{ "DisplayName", "KATData_Init" },
		{ "Keywords", "KATDataPlugin KATData" },
		{ "ModuleRelativePath", "Public/KATWalkPluginLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATWalkPluginLibrary, nullptr, "Init", nullptr, nullptr, sizeof(KATWalkPluginLibrary_eventInit_Parms), Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKATWalkPluginLibrary_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKATWalkPluginLibrary_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics
	{
		struct KATWalkPluginLibrary_eventUpdateDataCore_Parms
		{
			FKATDataCore data;
			FKATDataCore ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KATWalkPluginLibrary_eventUpdateDataCore_Parms, ReturnValue), Z_Construct_UScriptStruct_FKATDataCore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KATWalkPluginLibrary_eventUpdateDataCore_Parms, data), Z_Construct_UScriptStruct_FKATDataCore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::Function_MetaDataParams[] = {
		{ "Category", "KAT_GET_DATA" },
		{ "DisplayName", "KATData_UpdateDataCore" },
		{ "Keywords", "KATDataPlugin KATData" },
		{ "ModuleRelativePath", "Public/KATWalkPluginLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKATWalkPluginLibrary, nullptr, "UpdateDataCore", nullptr, nullptr, sizeof(KATWalkPluginLibrary_eventUpdateDataCore_Parms), Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKATWalkPluginLibrary_NoRegister()
	{
		return UKATWalkPluginLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKATWalkPluginLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKATWalkPluginLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_KATWalkPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKATWalkPluginLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKATWalkPluginLibrary_Init, "Init" }, // 476688905
		{ &Z_Construct_UFunction_UKATWalkPluginLibrary_UpdateDataCore, "UpdateDataCore" }, // 1450999107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKATWalkPluginLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "KATWalkPluginLibrary.h" },
		{ "ModuleRelativePath", "Public/KATWalkPluginLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKATWalkPluginLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKATWalkPluginLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKATWalkPluginLibrary_Statics::ClassParams = {
		&UKATWalkPluginLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKATWalkPluginLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKATWalkPluginLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKATWalkPluginLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKATWalkPluginLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKATWalkPluginLibrary, 3571866331);
	template<> KATWALKPLUGIN_API UClass* StaticClass<UKATWalkPluginLibrary>()
	{
		return UKATWalkPluginLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKATWalkPluginLibrary(Z_Construct_UClass_UKATWalkPluginLibrary, &UKATWalkPluginLibrary::StaticClass, TEXT("/Script/KATWalkPlugin"), TEXT("UKATWalkPluginLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKATWalkPluginLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
