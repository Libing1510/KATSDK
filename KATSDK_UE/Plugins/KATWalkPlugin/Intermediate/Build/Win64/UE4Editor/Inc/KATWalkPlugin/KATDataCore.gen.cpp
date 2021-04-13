// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KATWalkPlugin/Public/KATDataCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKATDataCore() {}
// Cross Module References
	KATWALKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FKATDataCore();
	UPackage* Z_Construct_UPackage__Script_KATWalkPlugin();
// End Cross Module References
class UScriptStruct* FKATDataCore::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KATWALKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FKATDataCore_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKATDataCore, Z_Construct_UPackage__Script_KATWalkPlugin(), TEXT("KATDataCore"), sizeof(FKATDataCore), Get_Z_Construct_UScriptStruct_FKATDataCore_Hash());
	}
	return Singleton;
}
template<> KATWALKPLUGIN_API UScriptStruct* StaticStruct<FKATDataCore>()
{
	return FKATDataCore::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKATDataCore(FKATDataCore::StaticStruct, TEXT("/Script/KATWalkPlugin"), TEXT("KATDataCore"), false, nullptr, nullptr);
static struct FScriptStruct_KATWalkPlugin_StaticRegisterNativesFKATDataCore
{
	FScriptStruct_KATWalkPlugin_StaticRegisterNativesFKATDataCore()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KATDataCore")),new UScriptStruct::TCppStructOps<FKATDataCore>);
	}
} ScriptStruct_KATWalkPlugin_StaticRegisterNativesFKATDataCore;
	struct Z_Construct_UScriptStruct_FKATDataCore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m33_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m33;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m32_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m32;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m31_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m31;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m23_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m23;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m22_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m22;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m21_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m21;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m13_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m13;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m12_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m12;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m11_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m11;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lift_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Lift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ShakeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Quiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TremorShort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TremorShort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightLessness_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WeightLessness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OverWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetSlowly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ResetSlowly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetQuickly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ResetQuickly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalRot_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalRot_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalRot_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalRot_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalRot_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalRot_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeartBeat_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HeartBeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[];
#endif
		static void NewProp_IsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKATDataCore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKATDataCore>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m33_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m33 = { "m33", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m33), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m33_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m33_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m32_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m32 = { "m32", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m32), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m32_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m31_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m31 = { "m31", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m31), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m31_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m31_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m23_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m23 = { "m23", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m23), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m23_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m23_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m22_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m22 = { "m22", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m22), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m22_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m22_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m21_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m21 = { "m21", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m21), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m21_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m21_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m13_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m13 = { "m13", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m13), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m13_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m13_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m12_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m12 = { "m12", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m12), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m12_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m12_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m11_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m11 = { "m11", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, m11), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m11_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m11_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Lift_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*\xc2\xa5??\xce\xbb??,??????\xce\xbb:2,1,0,-1,-2;0??\xce\xbb\xce\xaa??\xca\xbc\xce\xbb??*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "\xc2\xa5??\xce\xbb??,??????\xce\xbb:2,1,0,-1,-2;0??\xce\xbb\xce\xaa??\xca\xbc\xce\xbb??" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Lift = { "Lift", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, Lift), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Lift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Lift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ShakeLevel_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*?\xce\xb6?????\xd2\xaa?????\xc3\xbb\xce\xb6??\xc8\xbc?,0,1,2,3;0\xce\xaa???\xce\xb6?*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "?\xce\xb6?????\xd2\xaa?????\xc3\xbb\xce\xb6??\xc8\xbc?,0,1,2,3;0\xce\xaa???\xce\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ShakeLevel = { "ShakeLevel", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, ShakeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ShakeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ShakeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Quiver_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*?\xf0\xb6\xaf\xa3???\xd2\xaa???????\xf0\xb6\xaf\xb5\xc8\xbc?0,1,2??0\xce\xaa??????*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "?\xf0\xb6\xaf\xa3???\xd2\xaa???????\xf0\xb6\xaf\xb5\xc8\xbc?0,1,2??0\xce\xaa??????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Quiver = { "Quiver", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, Quiver), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Quiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Quiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_TremorShort_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*?\xcc\xb2?????\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "?\xcc\xb2?????\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_TremorShort = { "TremorShort", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, TremorShort), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_TremorShort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_TremorShort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WeightLessness_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*\xca\xa7?\xd8\xa3???\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "\xca\xa7?\xd8\xa3???\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WeightLessness = { "WeightLessness", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, WeightLessness), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WeightLessness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WeightLessness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_OverWeight_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*???\xd8\xa3???\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "???\xd8\xa3???\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_OverWeight = { "OverWeight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, OverWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_OverWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_OverWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetSlowly_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*??????\xce\xbb????\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "??????\xce\xbb????\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetSlowly = { "ResetSlowly", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, ResetSlowly), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetSlowly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetSlowly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetQuickly_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*???\xd9\xb8?\xce\xbb????\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "???\xd9\xb8?\xce\xbb????\xd2\xaa??????1?\xf3\xb4\xa5\xb7??????????\xc9\xba?Runtime??0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetQuickly = { "ResetQuickly", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, ResetQuickly), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetQuickly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetQuickly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Z_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*???\xce\xb7??\xdf\xb5?Z*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "???\xce\xb7??\xdf\xb5?Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Z = { "NormalRot_Z", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, NormalRot_Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Y_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*???\xce\xb7??\xdf\xb5?Y*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "???\xce\xb7??\xdf\xb5?Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Y = { "NormalRot_Y", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, NormalRot_Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_X_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*???\xce\xb7??\xdf\xb5?X*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "???\xce\xb7??\xdf\xb5?X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_X = { "NormalRot_X", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, NormalRot_X), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_HeartBeat_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*??????????\xd2\xaa????\xc3\xbf\xd2\xbb\xd6\xa1????*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "??????????\xd2\xaa????\xc3\xbf\xd2\xbb\xd6\xa1????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_HeartBeat = { "HeartBeat", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, HeartBeat), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_HeartBeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_HeartBeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkDistance_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*????\xc2\xb7?\xcc\xa1??\xdd\xb2????\xc3\xa1?*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "????\xc2\xb7?\xcc\xa1??\xdd\xb2????\xc3\xa1?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkDistance = { "WalkDistance", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, WalkDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_IsMoving_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*?\xc7\xb7???????*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "?\xc7\xb7???????" },
	};
#endif
	void Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_IsMoving_SetBit(void* Obj)
	{
		((FKATDataCore*)Obj)->IsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKATDataCore), &Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_IsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_IsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*???\xdf\xb7?????-1??\xc7\xb0??1????*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "???\xdf\xb7?????-1??\xc7\xb0??1????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, MoveDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_MoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_MoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkPower_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*?????\xd9\xb6?*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "?????\xd9\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkPower = { "WalkPower", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, WalkPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_BodyYaw_MetaData[] = {
		{ "Category", "KAT_DATA" },
		{ "Comment", "/*??????\xd7\xaa*/" },
		{ "ModuleRelativePath", "Public/KATDataCore.h" },
		{ "ToolTip", "??????\xd7\xaa" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_BodyYaw = { "BodyYaw", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKATDataCore, BodyYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_BodyYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_BodyYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKATDataCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m33,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m31,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m23,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m22,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m21,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_m11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Lift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ShakeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_Quiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_TremorShort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WeightLessness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_OverWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetSlowly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_ResetQuickly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_NormalRot_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_HeartBeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_IsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_MoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_WalkPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKATDataCore_Statics::NewProp_BodyYaw,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKATDataCore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KATWalkPlugin,
		nullptr,
		&NewStructOps,
		"KATDataCore",
		sizeof(FKATDataCore),
		alignof(FKATDataCore),
		Z_Construct_UScriptStruct_FKATDataCore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKATDataCore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKATDataCore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKATDataCore()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKATDataCore_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KATWalkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KATDataCore"), sizeof(FKATDataCore), Get_Z_Construct_UScriptStruct_FKATDataCore_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKATDataCore_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKATDataCore_Hash() { return 4131584343U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
