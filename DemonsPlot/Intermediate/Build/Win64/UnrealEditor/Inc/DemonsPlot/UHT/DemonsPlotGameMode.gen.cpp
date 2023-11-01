// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemonsPlot/DemonsPlotGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemonsPlotGameMode() {}
// Cross Module References
	DEMONSPLOT_API UClass* Z_Construct_UClass_ADemonsPlotGameMode();
	DEMONSPLOT_API UClass* Z_Construct_UClass_ADemonsPlotGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DemonsPlot();
// End Cross Module References
	void ADemonsPlotGameMode::StaticRegisterNativesADemonsPlotGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemonsPlotGameMode);
	UClass* Z_Construct_UClass_ADemonsPlotGameMode_NoRegister()
	{
		return ADemonsPlotGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADemonsPlotGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADemonsPlotGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DemonsPlot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemonsPlotGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADemonsPlotGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DemonsPlotGameMode.h" },
		{ "ModuleRelativePath", "DemonsPlotGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADemonsPlotGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemonsPlotGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemonsPlotGameMode_Statics::ClassParams = {
		&ADemonsPlotGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemonsPlotGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemonsPlotGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADemonsPlotGameMode()
	{
		if (!Z_Registration_Info_UClass_ADemonsPlotGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemonsPlotGameMode.OuterSingleton, Z_Construct_UClass_ADemonsPlotGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADemonsPlotGameMode.OuterSingleton;
	}
	template<> DEMONSPLOT_API UClass* StaticClass<ADemonsPlotGameMode>()
	{
		return ADemonsPlotGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemonsPlotGameMode);
	ADemonsPlotGameMode::~ADemonsPlotGameMode() {}
	struct Z_CompiledInDeferFile_FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADemonsPlotGameMode, ADemonsPlotGameMode::StaticClass, TEXT("ADemonsPlotGameMode"), &Z_Registration_Info_UClass_ADemonsPlotGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemonsPlotGameMode), 3238800551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotGameMode_h_3596941551(TEXT("/Script/DemonsPlot"),
		Z_CompiledInDeferFile_FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
