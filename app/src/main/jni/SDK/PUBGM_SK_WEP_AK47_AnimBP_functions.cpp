// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_SK_WEP_AK47_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.HandleWeaponStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EFreshWeaponStateType> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_AK47_AnimBP_C::HandleWeaponStateChanged(TEnumAsByte<enum EFreshWeaponStateType> Selection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.HandleWeaponStateChanged");

	USK_WEP_AK47_AnimBP_C_HandleWeaponStateChanged_Params params;
	params.Selection = Selection;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.PlayFireAnim
// (Public, BlueprintCallable, BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::PlayFireAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.PlayFireAnim");

	USK_WEP_AK47_AnimBP_C_PlayFireAnim_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_9E2922B840B07C6B3907418BF23E6C1E
// (BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_9E2922B840B07C6B3907418BF23E6C1E()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_9E2922B840B07C6B3907418BF23E6C1E");

	USK_WEP_AK47_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_9E2922B840B07C6B3907418BF23E6C1E_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_71FDAEE546B7C4EA24665BB3E42EFD97
// (BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_71FDAEE546B7C4EA24665BB3E42EFD97()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_71FDAEE546B7C4EA24665BB3E42EFD97");

	USK_WEP_AK47_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_71FDAEE546B7C4EA24665BB3E42EFD97_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_2D512FB14CE4001D089F019C7172A59F
// (BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_2D512FB14CE4001D089F019C7172A59F()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_2D512FB14CE4001D089F019C7172A59F");

	USK_WEP_AK47_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_2D512FB14CE4001D089F019C7172A59F_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_E3EC1B984880804F3BE0A5B13C9121C5
// (BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_E3EC1B984880804F3BE0A5B13C9121C5()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_E3EC1B984880804F3BE0A5B13C9121C5");

	USK_WEP_AK47_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_E3EC1B984880804F3BE0A5B13C9121C5_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_CF37A8EE45E846D91E330A8B555FA7F3
// (BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_CF37A8EE45E846D91E330A8B555FA7F3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_CF37A8EE45E846D91E330A8B555FA7F3");

	USK_WEP_AK47_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_SequencePlayer_CF37A8EE45E846D91E330A8B555FA7F3_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_ED272FC242D8246DC1A74DA65D06B799
// (BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_ED272FC242D8246DC1A74DA65D06B799()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_ED272FC242D8246DC1A74DA65D06B799");

	USK_WEP_AK47_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_AK47_AnimBP_AnimGraphNode_TransitionResult_ED272FC242D8246DC1A74DA65D06B799_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.OnWeaponChangeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<enum EFreshWeaponStateType> CurState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_AK47_AnimBP_C::OnWeaponChangeState(TEnumAsByte<enum EFreshWeaponStateType> CurState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.OnWeaponChangeState");

	USK_WEP_AK47_AnimBP_C_OnWeaponChangeState_Params params;
	params.CurState = CurState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USK_WEP_AK47_AnimBP_C::BlueprintInitializeAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.BlueprintInitializeAnimation");

	USK_WEP_AK47_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.ExecuteUbergraph_SK_WEP_AK47_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_WEP_AK47_AnimBP_C::ExecuteUbergraph_SK_WEP_AK47_AnimBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function SK_WEP_AK47_AnimBP.SK_WEP_AK47_AnimBP_C.ExecuteUbergraph_SK_WEP_AK47_AnimBP");

	USK_WEP_AK47_AnimBP_C_ExecuteUbergraph_SK_WEP_AK47_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

