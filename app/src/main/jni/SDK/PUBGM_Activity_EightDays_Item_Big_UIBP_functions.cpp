// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_Activity_EightDays_Item_Big_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Activity_EightDays_Item_Big_UIBP.Activity_EightDays_Item_Big_UIBP_C.ShowEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActivity_EightDays_Item_Big_UIBP_C::ShowEffects(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Activity_EightDays_Item_Big_UIBP.Activity_EightDays_Item_Big_UIBP_C.ShowEffects");

	UActivity_EightDays_Item_Big_UIBP_C_ShowEffects_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

