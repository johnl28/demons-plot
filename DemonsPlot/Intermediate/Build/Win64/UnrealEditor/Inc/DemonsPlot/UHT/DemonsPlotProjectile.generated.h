// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DemonsPlotProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEMONSPLOT_DemonsPlotProjectile_generated_h
#error "DemonsPlotProjectile.generated.h already included, missing '#pragma once' in DemonsPlotProjectile.h"
#endif
#define DEMONSPLOT_DemonsPlotProjectile_generated_h

#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_SPARSE_DATA
#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_ACCESSORS
#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemonsPlotProjectile(); \
	friend struct Z_Construct_UClass_ADemonsPlotProjectile_Statics; \
public: \
	DECLARE_CLASS(ADemonsPlotProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DemonsPlot"), NO_API) \
	DECLARE_SERIALIZER(ADemonsPlotProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemonsPlotProjectile(ADemonsPlotProjectile&&); \
	NO_API ADemonsPlotProjectile(const ADemonsPlotProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemonsPlotProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemonsPlotProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemonsPlotProjectile) \
	NO_API virtual ~ADemonsPlotProjectile();


#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_12_PROLOG
#define FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_SPARSE_DATA \
	FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_ACCESSORS \
	FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMONSPLOT_API UClass* StaticClass<class ADemonsPlotProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_demons_plot_DemonsPlot_Source_DemonsPlot_DemonsPlotProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
