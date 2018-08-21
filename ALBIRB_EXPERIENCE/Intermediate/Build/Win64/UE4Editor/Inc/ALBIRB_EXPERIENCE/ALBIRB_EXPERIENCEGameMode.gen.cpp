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
	ALBIRB_EXPERIENCE_API UFunction* Z_Construct_UFunction_AALBIRB_EXPERIENCEGameMode_GeneratePoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AALBIRB_EXPERIENCEGameMode::StaticRegisterNativesAALBIRB_EXPERIENCEGameMode()
	{
		UClass* Class = AALBIRB_EXPERIENCEGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GeneratePoint", &AALBIRB_EXPERIENCEGameMode::execGeneratePoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AALBIRB_EXPERIENCEGameMode_GeneratePoint()
	{
		struct ALBIRB_EXPERIENCEGameMode_eventGeneratePoint_Parms
		{
			FVector _ForwardVect;
			FRotator _Rotation;
			FVector _CurrentPos;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ALBIRB_EXPERIENCEGameMode_eventGeneratePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp__CurrentPos = { UE4CodeGen_Private::EPropertyClass::Struct, "_CurrentPos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ALBIRB_EXPERIENCEGameMode_eventGeneratePoint_Parms, _CurrentPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp__Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "_Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ALBIRB_EXPERIENCEGameMode_eventGeneratePoint_Parms, _Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp__ForwardVect = { UE4CodeGen_Private::EPropertyClass::Struct, "_ForwardVect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ALBIRB_EXPERIENCEGameMode_eventGeneratePoint_Parms, _ForwardVect), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__CurrentPos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__ForwardVect,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Generators" },
				{ "ModuleRelativePath", "ALBIRB_EXPERIENCEGameMode.h" },
				{ "ToolTip", "/Pointer to the current world\nUWorld* m_pWorld;\nAPlayerController* m_pPlayer;" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AALBIRB_EXPERIENCEGameMode, "GeneratePoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04880401, sizeof(ALBIRB_EXPERIENCEGameMode_eventGeneratePoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AALBIRB_EXPERIENCEGameMode_GeneratePoint, "GeneratePoint" }, // 1650702217
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
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AALBIRB_EXPERIENCEGameMode, 2506051668);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AALBIRB_EXPERIENCEGameMode(Z_Construct_UClass_AALBIRB_EXPERIENCEGameMode, &AALBIRB_EXPERIENCEGameMode::StaticClass, TEXT("/Script/ALBIRB_EXPERIENCE"), TEXT("AALBIRB_EXPERIENCEGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALBIRB_EXPERIENCEGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
