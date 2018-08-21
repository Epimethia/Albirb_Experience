// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_generated_h
#error "ALBIRB_EXPERIENCEPawn.generated.h already included, missing '#pragma once' in ALBIRB_EXPERIENCEPawn.h"
#endif
#define ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_generated_h

#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_RPC_WRAPPERS
#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAALBIRB_EXPERIENCEPawn(); \
	friend ALBIRB_EXPERIENCE_API class UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEPawn(); \
public: \
	DECLARE_CLASS(AALBIRB_EXPERIENCEPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBIRB_EXPERIENCE"), NO_API) \
	DECLARE_SERIALIZER(AALBIRB_EXPERIENCEPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAALBIRB_EXPERIENCEPawn(); \
	friend ALBIRB_EXPERIENCE_API class UClass* Z_Construct_UClass_AALBIRB_EXPERIENCEPawn(); \
public: \
	DECLARE_CLASS(AALBIRB_EXPERIENCEPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ALBIRB_EXPERIENCE"), NO_API) \
	DECLARE_SERIALIZER(AALBIRB_EXPERIENCEPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AALBIRB_EXPERIENCEPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AALBIRB_EXPERIENCEPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALBIRB_EXPERIENCEPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALBIRB_EXPERIENCEPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AALBIRB_EXPERIENCEPawn(AALBIRB_EXPERIENCEPawn&&); \
	NO_API AALBIRB_EXPERIENCEPawn(const AALBIRB_EXPERIENCEPawn&); \
public:


#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AALBIRB_EXPERIENCEPawn(AALBIRB_EXPERIENCEPawn&&); \
	NO_API AALBIRB_EXPERIENCEPawn(const AALBIRB_EXPERIENCEPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALBIRB_EXPERIENCEPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALBIRB_EXPERIENCEPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AALBIRB_EXPERIENCEPawn)


#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, MinSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentForwardSpeed() { return STRUCT_OFFSET(AALBIRB_EXPERIENCEPawn, CurrentForwardSpeed); }


#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_8_PROLOG
#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_RPC_WRAPPERS \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_INCLASS \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_INCLASS_NO_PURE_DECLS \
	ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ALBIRB_EXPERIENCE_Source_ALBIRB_EXPERIENCE_ALBIRB_EXPERIENCEPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
