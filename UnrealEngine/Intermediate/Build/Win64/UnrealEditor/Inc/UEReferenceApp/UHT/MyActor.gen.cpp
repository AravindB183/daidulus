// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEReferenceApp/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AMyActor();
	UEREFERENCEAPP_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	UEREFERENCEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FAircraft();
	UEREFERENCEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FArrayWrapper();
	UEREFERENCEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FIntersection();
	UEREFERENCEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FNewParameters();
	UEREFERENCEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FParameters();
	UPackage* Z_Construct_UPackage__Script_UEReferenceApp();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Parameters;
class UScriptStruct* FParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Parameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Parameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameters, (UObject*)Z_Construct_UPackage__Script_UEReferenceApp(), TEXT("Parameters"));
	}
	return Z_Registration_Info_UScriptStruct_Parameters.OuterSingleton;
}
template<> UEREFERENCEAPP_API UScriptStruct* StaticStruct<FParameters>()
{
	return FParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirWcb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirWcb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirArt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirArt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirSst_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirSst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateArtRadius_MetaData[];
#endif
		static void NewProp_UpdateArtRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateArtRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateArtRadiusCheck_MetaData[];
#endif
		static void NewProp_UpdateArtRadiusCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateArtRadiusCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RCirArtScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RCirArtScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb = { "RCirWcb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirWcb), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt = { "RCirArt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirArt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst = { "RCirSst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirSst), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_SetBit(void* Obj)
	{
		((FParameters*)Obj)->UpdateArtRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius = { "UpdateArtRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParameters), &Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_SetBit(void* Obj)
	{
		((FParameters*)Obj)->UpdateArtRadiusCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck = { "UpdateArtRadiusCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParameters), &Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt = { "Tt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, Tt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale_MetaData[] = {
		{ "Category", "DAA Parameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale = { "RCirArtScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameters, RCirArtScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale_MetaData), Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirWcb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirSst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_UpdateArtRadiusCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_Tt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameters_Statics::NewProp_RCirArtScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
		nullptr,
		&NewStructOps,
		"Parameters",
		Z_Construct_UScriptStruct_FParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::PropPointers),
		sizeof(FParameters),
		alignof(FParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_Parameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Parameters.InnerSingleton, Z_Construct_UScriptStruct_FParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Parameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewParameters;
class UScriptStruct* FNewParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewParameters, (UObject*)Z_Construct_UPackage__Script_UEReferenceApp(), TEXT("NewParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NewParameters.OuterSingleton;
}
template<> UEREFERENCEAPP_API UScriptStruct* StaticStruct<FNewParameters>()
{
	return FNewParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNewParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_art_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_art;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sst_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_sst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNewParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_art_MetaData[] = {
		{ "Category", "DAA NewParameters" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_art = { "art", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewParameters, art), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_art_MetaData), Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_art_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_sst_MetaData[] = {
		{ "Category", "DAA NewParameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Radius of ART\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of ART" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_sst = { "sst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewParameters, sst), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_sst_MetaData), Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_sst_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_art,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewParameters_Statics::NewProp_sst,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
		nullptr,
		&NewStructOps,
		"NewParameters",
		Z_Construct_UScriptStruct_FNewParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewParameters_Statics::PropPointers),
		sizeof(FNewParameters),
		alignof(FNewParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNewParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_NewParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewParameters.InnerSingleton, Z_Construct_UScriptStruct_FNewParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NewParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Aircraft;
class UScriptStruct* FAircraft::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Aircraft.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Aircraft.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAircraft, (UObject*)Z_Construct_UPackage__Script_UEReferenceApp(), TEXT("Aircraft"));
	}
	return Z_Registration_Info_UScriptStruct_Aircraft.OuterSingleton;
}
template<> UEREFERENCEAPP_API UScriptStruct* StaticStruct<FAircraft>()
{
	return FAircraft::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAircraft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heading_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_heading;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_dir_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dir_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_dir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraft_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAircraft_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAircraft>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_x_MetaData[] = {
		{ "Category", "DAA FAircraft" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraft, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_x_MetaData), Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_y_MetaData[] = {
		{ "Category", "DAA FAircraft" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraft, y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_y_MetaData), Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "DAA FAircraft" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraft, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_speed_MetaData), Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_heading_MetaData[] = {
		{ "Category", "DAA FAircraft" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_heading = { "heading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraft, heading), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_heading_MetaData), Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_heading_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_dir_Inner = { "dir", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_dir_MetaData[] = {
		{ "Category", "DAA FAircraft" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_dir = { "dir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraft, dir), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_dir_MetaData), Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_dir_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAircraft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_heading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_dir_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraft_Statics::NewProp_dir,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAircraft_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
		nullptr,
		&NewStructOps,
		"Aircraft",
		Z_Construct_UScriptStruct_FAircraft_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::PropPointers),
		sizeof(FAircraft),
		alignof(FAircraft),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAircraft_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraft_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAircraft()
	{
		if (!Z_Registration_Info_UScriptStruct_Aircraft.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Aircraft.InnerSingleton, Z_Construct_UScriptStruct_FAircraft_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Aircraft.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Intersection;
class UScriptStruct* FIntersection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Intersection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Intersection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntersection, (UObject*)Z_Construct_UPackage__Script_UEReferenceApp(), TEXT("Intersection"));
	}
	return Z_Registration_Info_UScriptStruct_Intersection.OuterSingleton;
}
template<> UEREFERENCEAPP_API UScriptStruct* StaticStruct<FIntersection>()
{
	return FIntersection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntersection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FDoublePropertyParams NewProp_points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_angle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntersection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntersection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntersection>();
	}
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_points_Inner = { "points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_points_MetaData[] = {
		{ "Category", "DAA FIntersection" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersection, points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_points_MetaData), Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_points_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_angle_MetaData[] = {
		{ "Category", "DAA FIntersection" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersection, angle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_angle_MetaData), Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_angle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntersection_Statics::NewProp_angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntersection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
		nullptr,
		&NewStructOps,
		"Intersection",
		Z_Construct_UScriptStruct_FIntersection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntersection_Statics::PropPointers),
		sizeof(FIntersection),
		alignof(FIntersection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntersection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntersection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntersection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FIntersection()
	{
		if (!Z_Registration_Info_UScriptStruct_Intersection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Intersection.InnerSingleton, Z_Construct_UScriptStruct_FIntersection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Intersection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayWrapper;
class UScriptStruct* FArrayWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayWrapper, (UObject*)Z_Construct_UPackage__Script_UEReferenceApp(), TEXT("ArrayWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayWrapper.OuterSingleton;
}
template<> UEREFERENCEAPP_API UScriptStruct* StaticStruct<FArrayWrapper>()
{
	return FArrayWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArrayWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ensure FArrayWrapper is defined before being used in the AMyActor class\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ensure FArrayWrapper is defined before being used in the AMyActor class" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
		nullptr,
		&NewStructOps,
		"ArrayWrapper",
		nullptr,
		0,
		sizeof(FArrayWrapper),
		alignof(FArrayWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArrayWrapper_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_ArrayWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayWrapper.InnerSingleton, Z_Construct_UScriptStruct_FArrayWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArrayWrapper.InnerSingleton;
	}
	DEFINE_FUNCTION(AMyActor::execSaveDataIntoCsvFile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstTimeEntry);
		P_GET_STRUCT(FVector,Z_Param_LocationInDegreesofOwnship);
		P_GET_STRUCT(FVector,Z_Param_LocationInXYZofOwnship);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeadingofOwnship);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedofOwnship);
		P_GET_STRUCT(FVector,Z_Param_LocationInDegreesofIntruder);
		P_GET_STRUCT(FVector,Z_Param_LocationInXYZofIntruder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeadingofIntruder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedofIntruder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndAngle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThreatLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveDataIntoCsvFile(Z_Param_FirstTimeEntry,Z_Param_LocationInDegreesofOwnship,Z_Param_LocationInXYZofOwnship,Z_Param_HeadingofOwnship,Z_Param_SpeedofOwnship,Z_Param_LocationInDegreesofIntruder,Z_Param_LocationInXYZofIntruder,Z_Param_HeadingofIntruder,Z_Param_SpeedofIntruder,Z_Param_StartAngle,Z_Param_EndAngle,Z_Param_ThreatLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execfindIntersectionWithCircle)
	{
		P_GET_STRUCT(FNewParameters,Z_Param_Parameter);
		P_GET_STRUCT(FAircraft,Z_Param_ownship);
		P_GET_STRUCT(FAircraft,Z_Param_intruder);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_StartAngle);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_EndAngle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->findIntersectionWithCircle(Z_Param_Parameter,Z_Param_ownship,Z_Param_intruder,Z_Param_Out_StartAngle,Z_Param_Out_EndAngle,Z_Param_Out_level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execcalculateAngle)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_x);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_y);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_origin_x);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_origin_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->calculateAngle(Z_Param_x,Z_Param_y,Z_Param_origin_x,Z_Param_origin_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execfindCircleIntersections)
	{
		P_GET_STRUCT(FAircraft,Z_Param_ownship);
		P_GET_STRUCT(FAircraft,Z_Param_intruder);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<double>*)Z_Param__Result=P_THIS->findCircleIntersections(Z_Param_ownship,Z_Param_intruder,Z_Param_radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execsolveLinearSystem)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_a1);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_b1);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_c1);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_a2);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_b2);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_c2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntersection*)Z_Param__Result=P_THIS->solveLinearSystem(Z_Param_a1,Z_Param_b1,Z_Param_c1,Z_Param_a2,Z_Param_b2,Z_Param_c2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execRasDaa)
	{
		P_GET_STRUCT(FVector,Z_Param_Ownship);
		P_GET_STRUCT(FVector,Z_Param_Intruder);
		P_GET_STRUCT(FVector,Z_Param_OwnshipHeadingSpeed);
		P_GET_STRUCT(FVector,Z_Param_IntruderHeadingSpeed);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StartAngle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_EndAngle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Alert);
		P_GET_STRUCT(FParameters,Z_Param_Parameters);
		P_GET_STRUCT_REF(FParameters,Z_Param_Out_TestOutParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RasDaa(Z_Param_Ownship,Z_Param_Intruder,Z_Param_OwnshipHeadingSpeed,Z_Param_IntruderHeadingSpeed,Z_Param_Out_StartAngle,Z_Param_Out_EndAngle,Z_Param_Out_Alert,Z_Param_Parameters,Z_Param_Out_TestOutParameters);
		P_NATIVE_END;
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "calculateAngle", &AMyActor::execcalculateAngle },
			{ "findCircleIntersections", &AMyActor::execfindCircleIntersections },
			{ "findIntersectionWithCircle", &AMyActor::execfindIntersectionWithCircle },
			{ "RasDaa", &AMyActor::execRasDaa },
			{ "SaveDataIntoCsvFile", &AMyActor::execSaveDataIntoCsvFile },
			{ "solveLinearSystem", &AMyActor::execsolveLinearSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_calculateAngle_Statics
	{
		struct MyActor_eventcalculateAngle_Parms
		{
			double x;
			double y;
			double origin_x;
			double origin_y;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_x;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_y;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_origin_x;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_origin_y;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventcalculateAngle_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventcalculateAngle_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_origin_x = { "origin_x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventcalculateAngle_Parms, origin_x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_origin_y = { "origin_y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventcalculateAngle_Parms, origin_y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventcalculateAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_calculateAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_origin_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_origin_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_calculateAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_calculateAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calculate Angle" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_calculateAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "calculateAngle", nullptr, nullptr, Z_Construct_UFunction_AMyActor_calculateAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_calculateAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_calculateAngle_Statics::MyActor_eventcalculateAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_calculateAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_calculateAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_calculateAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_calculateAngle_Statics::MyActor_eventcalculateAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_calculateAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_calculateAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics
	{
		struct MyActor_eventfindCircleIntersections_Parms
		{
			FAircraft ownship;
			FAircraft intruder;
			double radius;
			TArray<double> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ownship;
		static const UECodeGen_Private::FStructPropertyParams NewProp_intruder;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_radius;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_ownship = { "ownship", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindCircleIntersections_Parms, ownship), Z_Construct_UScriptStruct_FAircraft, METADATA_PARAMS(0, nullptr) }; // 2125629597
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_intruder = { "intruder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindCircleIntersections_Parms, intruder), Z_Construct_UScriptStruct_FAircraft, METADATA_PARAMS(0, nullptr) }; // 2125629597
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindCircleIntersections_Parms, radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindCircleIntersections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_ownship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_intruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Circle Intersection" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "findCircleIntersections", nullptr, nullptr, Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::MyActor_eventfindCircleIntersections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::MyActor_eventfindCircleIntersections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_findCircleIntersections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_findCircleIntersections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics
	{
		struct MyActor_eventfindIntersectionWithCircle_Parms
		{
			FNewParameters Parameter;
			FAircraft ownship;
			FAircraft intruder;
			double StartAngle;
			double EndAngle;
			int32 level;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ownship;
		static const UECodeGen_Private::FStructPropertyParams NewProp_intruder;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EndAngle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindIntersectionWithCircle_Parms, Parameter), Z_Construct_UScriptStruct_FNewParameters, METADATA_PARAMS(0, nullptr) }; // 2265074241
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_ownship = { "ownship", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindIntersectionWithCircle_Parms, ownship), Z_Construct_UScriptStruct_FAircraft, METADATA_PARAMS(0, nullptr) }; // 2125629597
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_intruder = { "intruder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindIntersectionWithCircle_Parms, intruder), Z_Construct_UScriptStruct_FAircraft, METADATA_PARAMS(0, nullptr) }; // 2125629597
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindIntersectionWithCircle_Parms, StartAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindIntersectionWithCircle_Parms, EndAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventfindIntersectionWithCircle_Parms, level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_ownship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_intruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Circle Intersection" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "findIntersectionWithCircle", nullptr, nullptr, Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::MyActor_eventfindIntersectionWithCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::MyActor_eventfindIntersectionWithCircle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_findIntersectionWithCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_findIntersectionWithCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_RasDaa_Statics
	{
		struct MyActor_eventRasDaa_Parms
		{
			FVector Ownship;
			FVector Intruder;
			FVector OwnshipHeadingSpeed;
			FVector IntruderHeadingSpeed;
			float StartAngle;
			float EndAngle;
			int32 Alert;
			FParameters Parameters;
			FParameters TestOutParameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ownship_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ownship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intruder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnshipHeadingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnshipHeadingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntruderHeadingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntruderHeadingSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAngle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Alert;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestOutParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship = { "Ownship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Ownship), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder = { "Intruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Intruder), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed = { "OwnshipHeadingSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, OwnshipHeadingSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed = { "IntruderHeadingSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, IntruderHeadingSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed_MetaData), Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, StartAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, EndAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Alert = { "Alert", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Alert), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, Parameters), Z_Construct_UScriptStruct_FParameters, METADATA_PARAMS(0, nullptr) }; // 1623641948
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_TestOutParameters = { "TestOutParameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventRasDaa_Parms, TestOutParameters), Z_Construct_UScriptStruct_FParameters, METADATA_PARAMS(0, nullptr) }; // 1623641948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Ownship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Intruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_OwnshipHeadingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_IntruderHeadingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Alert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_RasDaa_Statics::NewProp_TestOutParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_RasDaa_Statics::Function_MetaDataParams[] = {
		{ "Category", "DAA Calculation" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_RasDaa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "RasDaa", nullptr, nullptr, Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_RasDaa_Statics::MyActor_eventRasDaa_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_RasDaa_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_RasDaa_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_RasDaa_Statics::MyActor_eventRasDaa_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_RasDaa()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_RasDaa_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics
	{
		struct MyActor_eventSaveDataIntoCsvFile_Parms
		{
			int32 FirstTimeEntry;
			FVector LocationInDegreesofOwnship;
			FVector LocationInXYZofOwnship;
			float HeadingofOwnship;
			float SpeedofOwnship;
			FVector LocationInDegreesofIntruder;
			FVector LocationInXYZofIntruder;
			float HeadingofIntruder;
			float SpeedofIntruder;
			float StartAngle;
			float EndAngle;
			int32 ThreatLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstTimeEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInDegreesofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInDegreesofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInXYZofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInXYZofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadingofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadingofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedofOwnship_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedofOwnship;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInDegreesofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInDegreesofIntruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationInXYZofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationInXYZofIntruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadingofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadingofIntruder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedofIntruder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedofIntruder;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAngle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ThreatLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_FirstTimeEntry = { "FirstTimeEntry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, FirstTimeEntry), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship = { "LocationInDegreesofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInDegreesofOwnship), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship = { "LocationInXYZofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInXYZofOwnship), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship = { "HeadingofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, HeadingofOwnship), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship = { "SpeedofOwnship", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, SpeedofOwnship), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder = { "LocationInDegreesofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInDegreesofIntruder), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder = { "LocationInXYZofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, LocationInXYZofIntruder), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder = { "HeadingofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, HeadingofIntruder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder = { "SpeedofIntruder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, SpeedofIntruder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder_MetaData), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, StartAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, EndAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_ThreatLevel = { "ThreatLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventSaveDataIntoCsvFile_Parms, ThreatLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_FirstTimeEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofOwnship,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInDegreesofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_LocationInXYZofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_HeadingofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_SpeedofIntruder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::NewProp_ThreatLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Saving" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "SaveDataIntoCsvFile", nullptr, nullptr, Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::MyActor_eventSaveDataIntoCsvFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::MyActor_eventSaveDataIntoCsvFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics
	{
		struct MyActor_eventsolveLinearSystem_Parms
		{
			double a1;
			double b1;
			double c1;
			double a2;
			double b2;
			double c2;
			FIntersection ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_a1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_b1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_c1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_a2;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_b2;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_c2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_a1 = { "a1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsolveLinearSystem_Parms, a1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_b1 = { "b1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsolveLinearSystem_Parms, b1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_c1 = { "c1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsolveLinearSystem_Parms, c1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_a2 = { "a2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsolveLinearSystem_Parms, a2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_b2 = { "b2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsolveLinearSystem_Parms, b2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_c2 = { "c2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsolveLinearSystem_Parms, c2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsolveLinearSystem_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntersection, METADATA_PARAMS(0, nullptr) }; // 3495873203
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_a1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_b1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_c1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_a2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_b2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_c2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Linear system solver" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "solveLinearSystem", nullptr, nullptr, Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::MyActor_eventsolveLinearSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::MyActor_eventsolveLinearSystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_solveLinearSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_solveLinearSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEReferenceApp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_calculateAngle, "calculateAngle" }, // 3878373482
		{ &Z_Construct_UFunction_AMyActor_findCircleIntersections, "findCircleIntersections" }, // 4276139454
		{ &Z_Construct_UFunction_AMyActor_findIntersectionWithCircle, "findIntersectionWithCircle" }, // 3749928421
		{ &Z_Construct_UFunction_AMyActor_RasDaa, "RasDaa" }, // 3770719461
		{ &Z_Construct_UFunction_AMyActor_SaveDataIntoCsvFile, "SaveDataIntoCsvFile" }, // 871512361
		{ &Z_Construct_UFunction_AMyActor_solveLinearSystem, "solveLinearSystem" }, // 4147418254
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
	}
	template<> UEREFERENCEAPP_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
	AMyActor::~AMyActor() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ScriptStructInfo[] = {
		{ FParameters::StaticStruct, Z_Construct_UScriptStruct_FParameters_Statics::NewStructOps, TEXT("Parameters"), &Z_Registration_Info_UScriptStruct_Parameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameters), 1623641948U) },
		{ FNewParameters::StaticStruct, Z_Construct_UScriptStruct_FNewParameters_Statics::NewStructOps, TEXT("NewParameters"), &Z_Registration_Info_UScriptStruct_NewParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewParameters), 2265074241U) },
		{ FAircraft::StaticStruct, Z_Construct_UScriptStruct_FAircraft_Statics::NewStructOps, TEXT("Aircraft"), &Z_Registration_Info_UScriptStruct_Aircraft, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAircraft), 2125629597U) },
		{ FIntersection::StaticStruct, Z_Construct_UScriptStruct_FIntersection_Statics::NewStructOps, TEXT("Intersection"), &Z_Registration_Info_UScriptStruct_Intersection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntersection), 3495873203U) },
		{ FArrayWrapper::StaticStruct, Z_Construct_UScriptStruct_FArrayWrapper_Statics::NewStructOps, TEXT("ArrayWrapper"), &Z_Registration_Info_UScriptStruct_ArrayWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayWrapper), 3460515876U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 1851315859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_3369386763(TEXT("/Script/UEReferenceApp"),
		Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_Source_UEReferenceApp_MyActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
