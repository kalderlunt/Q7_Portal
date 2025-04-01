// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Q7_Poral/Q7_PoralGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQ7_PoralGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
Q7_PORAL_API UClass* Z_Construct_UClass_AQ7_PoralGameMode();
Q7_PORAL_API UClass* Z_Construct_UClass_AQ7_PoralGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Q7_Poral();
// End Cross Module References

// Begin Class AQ7_PoralGameMode
void AQ7_PoralGameMode::StaticRegisterNativesAQ7_PoralGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQ7_PoralGameMode);
UClass* Z_Construct_UClass_AQ7_PoralGameMode_NoRegister()
{
	return AQ7_PoralGameMode::StaticClass();
}
struct Z_Construct_UClass_AQ7_PoralGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Q7_PoralGameMode.h" },
		{ "ModuleRelativePath", "Q7_PoralGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQ7_PoralGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQ7_PoralGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Q7_Poral,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQ7_PoralGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQ7_PoralGameMode_Statics::ClassParams = {
	&AQ7_PoralGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQ7_PoralGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AQ7_PoralGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQ7_PoralGameMode()
{
	if (!Z_Registration_Info_UClass_AQ7_PoralGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQ7_PoralGameMode.OuterSingleton, Z_Construct_UClass_AQ7_PoralGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQ7_PoralGameMode.OuterSingleton;
}
template<> Q7_PORAL_API UClass* StaticClass<AQ7_PoralGameMode>()
{
	return AQ7_PoralGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQ7_PoralGameMode);
AQ7_PoralGameMode::~AQ7_PoralGameMode() {}
// End Class AQ7_PoralGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q7_Portal_Q7_Portal_Q7_Poral_Source_Q7_Poral_Q7_PoralGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQ7_PoralGameMode, AQ7_PoralGameMode::StaticClass, TEXT("AQ7_PoralGameMode"), &Z_Registration_Info_UClass_AQ7_PoralGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQ7_PoralGameMode), 2380702407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q7_Portal_Q7_Portal_Q7_Poral_Source_Q7_Poral_Q7_PoralGameMode_h_3568973282(TEXT("/Script/Q7_Poral"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q7_Portal_Q7_Portal_Q7_Poral_Source_Q7_Poral_Q7_PoralGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q7_Portal_Q7_Portal_Q7_Poral_Source_Q7_Poral_Q7_PoralGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
