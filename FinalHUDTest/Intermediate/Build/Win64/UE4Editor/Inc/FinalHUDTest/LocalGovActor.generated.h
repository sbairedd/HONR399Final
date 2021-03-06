// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHeadsUpDisplay;
#ifdef FINALHUDTEST_LocalGovActor_generated_h
#error "LocalGovActor.generated.h already included, missing '#pragma once' in LocalGovActor.h"
#endif
#define FINALHUDTEST_LocalGovActor_generated_h

#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execactionIsActive) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_actionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->actionIsActive(Z_Param_actionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execprintCurrentActions) \
	{ \
		P_GET_OBJECT(AHeadsUpDisplay,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->printCurrentActions(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovReturnGainPenalty) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->localGovReturnGainPenalty(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovReturnBlocking) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->localGovReturnBlocking(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovReturnActionName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->localGovReturnActionName(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovSendTagUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->localGovSendTagUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execupdateLocalGovPriorities) \
	{ \
		P_GET_OBJECT(AHeadsUpDisplay,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->updateLocalGovPriorities(Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execactionIsActive) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_actionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->actionIsActive(Z_Param_actionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execprintCurrentActions) \
	{ \
		P_GET_OBJECT(AHeadsUpDisplay,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->printCurrentActions(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovReturnGainPenalty) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->localGovReturnGainPenalty(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovReturnBlocking) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->localGovReturnBlocking(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovReturnActionName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_category); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->localGovReturnActionName(Z_Param_category); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execlocalGovSendTagUpdate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->localGovSendTagUpdate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execupdateLocalGovPriorities) \
	{ \
		P_GET_OBJECT(AHeadsUpDisplay,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->updateLocalGovPriorities(Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALocalGovActor(); \
	friend FINALHUDTEST_API class UClass* Z_Construct_UClass_ALocalGovActor(); \
public: \
	DECLARE_CLASS(ALocalGovActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FinalHUDTest"), NO_API) \
	DECLARE_SERIALIZER(ALocalGovActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_INCLASS \
private: \
	static void StaticRegisterNativesALocalGovActor(); \
	friend FINALHUDTEST_API class UClass* Z_Construct_UClass_ALocalGovActor(); \
public: \
	DECLARE_CLASS(ALocalGovActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FinalHUDTest"), NO_API) \
	DECLARE_SERIALIZER(ALocalGovActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALocalGovActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALocalGovActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocalGovActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocalGovActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALocalGovActor(ALocalGovActor&&); \
	NO_API ALocalGovActor(const ALocalGovActor&); \
public:


#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALocalGovActor(ALocalGovActor&&); \
	NO_API ALocalGovActor(const ALocalGovActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocalGovActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocalGovActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALocalGovActor)


#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_PRIVATE_PROPERTY_OFFSET
#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_72_PROLOG
#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_PRIVATE_PROPERTY_OFFSET \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_RPC_WRAPPERS \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_INCLASS \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_PRIVATE_PROPERTY_OFFSET \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_INCLASS_NO_PURE_DECLS \
	FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalHUDTest_Source_FinalHUDTest_LocalGovActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
