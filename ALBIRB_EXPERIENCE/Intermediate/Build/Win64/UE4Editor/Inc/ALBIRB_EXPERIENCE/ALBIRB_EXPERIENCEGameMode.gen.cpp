// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ALBIRB_EXPERIENCEGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALBIRB_EXPERIENCEGameMode() {}
// Cross Module References
	ALBIRB_EXPERIENCE_API UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEGameMode_NoRegister();
	ALBIRB_EXPERIENCE_API UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ALBIRB_EXPERIENCE();
// End Cross Module References
	void AALBIRB_EXPERIENCEGameMode::StaticRegisterNativesAALBIRB_EXPERIENCEGameMode()
	{
	}
	UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEGameMode_NoRegister()
	{
		return AALBIRB_EXPERIENCEGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBIRB_EXPERIENCE,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ALBIRB_EXPERIENCEGameMode.h" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AALBIRB_EXPERIENCEGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AALBIRB_EXPERIENCEGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AALBIRB_EXPERIENCEGameMode, 523167987);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AALBIRB_EXPERIENCEGameMode(Z_Construct_UClass_AALBIRB_EXPERIENCEGameMode, &AALBIRB_EXPERIENCEGameMode::StaticClass, TEXT("/Script/ALBIRB_EXPERIENCE"), TEXT("AALBIRB_EXPERIENCEGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALBIRB_EXPERIENCEGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
