// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ALBIRB_EXPERIENCEPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALBIRB_EXPERIENCEPawn() {}
// Cross Module References
	ALBIRB_EXPERIENCE_API UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEPawn_NoRegister();
	ALBIRB_EXPERIENCE_API UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ALBIRB_EXPERIENCE();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AALBIRB_EXPERIENCEPawn::StaticRegisterNativesAALBIRB_EXPERIENCEPawn()
	{
	}
	UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEPawn_NoRegister()
	{
		return AALBIRB_EXPERIENCEPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_ALBIRB_EXPERIENCE,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaDepletionRate_MetaData[] = {
				{ "Category", "ALBIRB_EXPERIENCEPawn" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaDepletionRate = { UE4CodeGen_Private::EPropertyClass::Float, "StaminaDepletionRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, StaminaDepletionRate), METADATA_PARAMS(NewProp_StaminaDepletionRate_MetaData, ARRAY_COUNT(NewProp_StaminaDepletionRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRechargeRate_MetaData[] = {
				{ "Category", "ALBIRB_EXPERIENCEPawn" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaRechargeRate = { UE4CodeGen_Private::EPropertyClass::Float, "StaminaRechargeRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, StaminaRechargeRate), METADATA_PARAMS(NewProp_StaminaRechargeRate_MetaData, ARRAY_COUNT(NewProp_StaminaRechargeRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerchBlueprint_MetaData[] = {
				{ "Category", "ALBIRB_EXPERIENCEPawn" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PerchBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "PerchBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, PerchBlueprint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PerchBlueprint_MetaData, ARRAY_COUNT(NewProp_PerchBlueprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
				{ "Category", "ALBIRB_EXPERIENCEPawn" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Current gravity" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity = { UE4CodeGen_Private::EPropertyClass::Float, "Gravity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, Gravity), METADATA_PARAMS(NewProp_Gravity_MetaData, ARRAY_COUNT(NewProp_Gravity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
				{ "Category", "Yaw" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Min forward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MinSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, MinSpeed), METADATA_PARAMS(NewProp_MinSpeed_MetaData, ARRAY_COUNT(NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
				{ "Category", "Pitch" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Max forward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, MaxSpeed), METADATA_PARAMS(NewProp_MaxSpeed_MetaData, ARRAY_COUNT(NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
				{ "Category", "Plane" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "How quickly pawn can steer" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "TurnSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, TurnSpeed), METADATA_PARAMS(NewProp_TurnSpeed_MetaData, ARRAY_COUNT(NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "Category", "Plane" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "How quickly forward speed changes" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Float, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, Acceleration), METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentUpwardSpeedAccel_MetaData[] = {
				{ "Category", "ALBIRB_EXPERIENCEPawn" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Current upward speed accel" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentUpwardSpeedAccel = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentUpwardSpeedAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, CurrentUpwardSpeedAccel), METADATA_PARAMS(NewProp_CurrentUpwardSpeedAccel_MetaData, ARRAY_COUNT(NewProp_CurrentUpwardSpeedAccel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentUpwardSpeed_MetaData[] = {
				{ "Category", "ALBIRB_EXPERIENCEPawn" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Current upward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentUpwardSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentUpwardSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, CurrentUpwardSpeed), METADATA_PARAMS(NewProp_CurrentUpwardSpeed_MetaData, ARRAY_COUNT(NewProp_CurrentUpwardSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentForwardSpeed_MetaData[] = {
				{ "Category", "ALBIRB_EXPERIENCEPawn" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Current forward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentForwardSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentForwardSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, CurrentForwardSpeed), METADATA_PARAMS(NewProp_CurrentForwardSpeed_MetaData, ARRAY_COUNT(NewProp_CurrentForwardSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Camera component that will be our viewpoint" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "Spring arm that will offset the camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEPawn.h" },
				{ "ToolTip", "StaticMesh component that will be the visuals for our flying pawn" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PlaneMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b000d, 1, nullptr, STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, PlaneMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PlaneMesh_MetaData, ARRAY_COUNT(NewProp_PlaneMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaminaDepletionRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaminaRechargeRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerchBlueprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gravity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TurnSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentUpwardSpeedAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentUpwardSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentForwardSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AALBIRB_EXPERIENCEPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AALBIRB_EXPERIENCEPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
<<<<<<< HEAD
	IMPLEMENT_CLASS(AALBIRB_EXPERIENCEPawn, 3550494740);
=======
	IMPLEMENT_CLASS(AALBIRB_EXPERIENCEPawn, 556945848);
>>>>>>> origin/Jasper-BrokeMasterMonkaS
	static FCompiledInDefer Z_CompiledInDefer_UClass_AALBIRB_EXPERIENCEPawn(Z_Construct_UClass_AALBIRB_EXPERIENCEPawn, &AALBIRB_EXPERIENCEPawn::StaticClass, TEXT("/Script/ALBIRB_EXPERIENCE"), TEXT("AALBIRB_EXPERIENCEPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALBIRB_EXPERIENCEPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
