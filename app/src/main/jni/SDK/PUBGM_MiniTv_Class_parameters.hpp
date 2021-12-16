#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_MiniTv_Class_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniTv_Class.MiniTv_Class_C.TouchEnd
struct AMiniTv_Class_C_TouchEnd_Params
{
	TEnumAsByte<enum ETouchIndex>                      finger;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniTv_Class.MiniTv_Class_C.TouchStart
struct AMiniTv_Class_C_TouchStart_Params
{
	TEnumAsByte<enum ETouchIndex>                      finger;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniTv_Class.MiniTv_Class_C.UserConstructionScript
struct AMiniTv_Class_C_UserConstructionScript_Params
{
};

// Function MiniTv_Class.MiniTv_Class_C.ReceiveBeginPlay
struct AMiniTv_Class_C_ReceiveBeginPlay_Params
{
};

// Function MiniTv_Class.MiniTv_Class_C.ReceiveTick
struct AMiniTv_Class_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniTv_Class.MiniTv_Class_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
struct AMiniTv_Class_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniTv_Class.MiniTv_Class_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
struct AMiniTv_Class_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
	TEnumAsByte<enum ETouchIndex>                      FingerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniTv_Class.MiniTv_Class_C.ExecuteUbergraph_MiniTv_Class
struct AMiniTv_Class_C_ExecuteUbergraph_MiniTv_Class_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

