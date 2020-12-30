// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRANDHEIST_GrandHeistCharacter_generated_h
#error "GrandHeistCharacter.generated.h already included, missing '#pragma once' in GrandHeistCharacter.h"
#endif
#define GRANDHEIST_GrandHeistCharacter_generated_h

#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_SPARSE_DATA
#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_RPC_WRAPPERS
#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrandHeistCharacter(); \
	friend struct Z_Construct_UClass_AGrandHeistCharacter_Statics; \
public: \
	DECLARE_CLASS(AGrandHeistCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GrandHeist"), NO_API) \
	DECLARE_SERIALIZER(AGrandHeistCharacter)


#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGrandHeistCharacter(); \
	friend struct Z_Construct_UClass_AGrandHeistCharacter_Statics; \
public: \
	DECLARE_CLASS(AGrandHeistCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GrandHeist"), NO_API) \
	DECLARE_SERIALIZER(AGrandHeistCharacter)


#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrandHeistCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrandHeistCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrandHeistCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrandHeistCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrandHeistCharacter(AGrandHeistCharacter&&); \
	NO_API AGrandHeistCharacter(const AGrandHeistCharacter&); \
public:


#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrandHeistCharacter(AGrandHeistCharacter&&); \
	NO_API AGrandHeistCharacter(const AGrandHeistCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrandHeistCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrandHeistCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrandHeistCharacter)


#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGrandHeistCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGrandHeistCharacter, FollowCamera); }


#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_9_PROLOG
#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_SPARSE_DATA \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_RPC_WRAPPERS \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_INCLASS \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_SPARSE_DATA \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GrandHeist_Source_GrandHeist_GrandHeistCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRANDHEIST_API UClass* StaticClass<class AGrandHeistCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GrandHeist_Source_GrandHeist_GrandHeistCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
