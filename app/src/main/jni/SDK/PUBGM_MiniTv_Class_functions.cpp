// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_MiniTv_Class_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniTv_Class.MiniTv_Class_C.TouchEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  finger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMiniTv_Class_C::TouchEnd(TEnumAsByte<enum ETouchIndex> finger)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.TouchEnd");

	AMiniTv_Class_C_TouchEnd_Params params;
	params.finger = finger;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MiniTv_Class.MiniTv_Class_C.TouchStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  finger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMiniTv_Class_C::TouchStart(TEnumAsByte<enum ETouchIndex> finger)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.TouchStart");

	AMiniTv_Class_C_TouchStart_Params params;
	params.finger = finger;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MiniTv_Class.MiniTv_Class_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMiniTv_Class_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.UserConstructionScript");

	AMiniTv_Class_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MiniTv_Class.MiniTv_Class_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMiniTv_Class_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.ReceiveBeginPlay");

	AMiniTv_Class_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MiniTv_Class.MiniTv_Class_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMiniTv_Class_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.ReceiveTick");

	AMiniTv_Class_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MiniTv_Class.MiniTv_Class_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMiniTv_Class_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature");

	AMiniTv_Class_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MiniTv_Class.MiniTv_Class_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<enum ETouchIndex>  FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMiniTv_Class_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	AMiniTv_Class_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function MiniTv_Class.MiniTv_Class_C.ExecuteUbergraph_MiniTv_Class
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMiniTv_Class_C::ExecuteUbergraph_MiniTv_Class(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function MiniTv_Class.MiniTv_Class_C.ExecuteUbergraph_MiniTv_Class");

	AMiniTv_Class_C_ExecuteUbergraph_MiniTv_Class_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

