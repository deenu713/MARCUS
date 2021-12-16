// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_Activity_EightDays_Item_Small_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Activity_EightDays_Item_Small_UIBP.Activity_EightDays_Item_Small_UIBP_C.ShowEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Show                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActivity_EightDays_Item_Small_UIBP_C::ShowEffects(bool Is_Show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Activity_EightDays_Item_Small_UIBP.Activity_EightDays_Item_Small_UIBP_C.ShowEffects");

	UActivity_EightDays_Item_Small_UIBP_C_ShowEffects_Params params;
	params.Is_Show = Is_Show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Activity_EightDays_Item_Small_UIBP.Activity_EightDays_Item_Small_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActivity_EightDays_Item_Small_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Activity_EightDays_Item_Small_UIBP.Activity_EightDays_Item_Small_UIBP_C.Construct");

	UActivity_EightDays_Item_Small_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Activity_EightDays_Item_Small_UIBP.Activity_EightDays_Item_Small_UIBP_C.ExecuteUbergraph_Activity_EightDays_Item_Small_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActivity_EightDays_Item_Small_UIBP_C::ExecuteUbergraph_Activity_EightDays_Item_Small_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Activity_EightDays_Item_Small_UIBP.Activity_EightDays_Item_Small_UIBP_C.ExecuteUbergraph_Activity_EightDays_Item_Small_UIBP");

	UActivity_EightDays_Item_Small_UIBP_C_ExecuteUbergraph_Activity_EightDays_Item_Small_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

