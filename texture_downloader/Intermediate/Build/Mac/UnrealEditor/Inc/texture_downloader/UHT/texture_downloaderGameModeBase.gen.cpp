// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "texture_downloader/texture_downloaderGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetexture_downloaderGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TEXTURE_DOWNLOADER_API UClass* Z_Construct_UClass_Atexture_downloaderGameModeBase();
	TEXTURE_DOWNLOADER_API UClass* Z_Construct_UClass_Atexture_downloaderGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_texture_downloader();
// End Cross Module References
	void Atexture_downloaderGameModeBase::StaticRegisterNativesAtexture_downloaderGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atexture_downloaderGameModeBase);
	UClass* Z_Construct_UClass_Atexture_downloaderGameModeBase_NoRegister()
	{
		return Atexture_downloaderGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_texture_downloader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "texture_downloaderGameModeBase.h" },
		{ "ModuleRelativePath", "texture_downloaderGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atexture_downloaderGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics::ClassParams = {
		&Atexture_downloaderGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atexture_downloaderGameModeBase()
	{
		if (!Z_Registration_Info_UClass_Atexture_downloaderGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atexture_downloaderGameModeBase.OuterSingleton, Z_Construct_UClass_Atexture_downloaderGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Atexture_downloaderGameModeBase.OuterSingleton;
	}
	template<> TEXTURE_DOWNLOADER_API UClass* StaticClass<Atexture_downloaderGameModeBase>()
	{
		return Atexture_downloaderGameModeBase::StaticClass();
	}
	Atexture_downloaderGameModeBase::Atexture_downloaderGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atexture_downloaderGameModeBase);
	Atexture_downloaderGameModeBase::~Atexture_downloaderGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_vadymtihonyuk_Documents_Unreal_Projects_ue_5_texture_downloader_texture_downloader_Source_texture_downloader_texture_downloaderGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vadymtihonyuk_Documents_Unreal_Projects_ue_5_texture_downloader_texture_downloader_Source_texture_downloader_texture_downloaderGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Atexture_downloaderGameModeBase, Atexture_downloaderGameModeBase::StaticClass, TEXT("Atexture_downloaderGameModeBase"), &Z_Registration_Info_UClass_Atexture_downloaderGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atexture_downloaderGameModeBase), 1856791705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_vadymtihonyuk_Documents_Unreal_Projects_ue_5_texture_downloader_texture_downloader_Source_texture_downloader_texture_downloaderGameModeBase_h_2047548302(TEXT("/Script/texture_downloader"),
		Z_CompiledInDeferFile_FID_vadymtihonyuk_Documents_Unreal_Projects_ue_5_texture_downloader_texture_downloader_Source_texture_downloader_texture_downloaderGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_vadymtihonyuk_Documents_Unreal_Projects_ue_5_texture_downloader_texture_downloader_Source_texture_downloader_texture_downloaderGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
