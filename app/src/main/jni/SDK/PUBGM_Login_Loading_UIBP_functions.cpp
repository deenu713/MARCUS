// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_Login_Loading_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.InitFreeTraffic
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::InitFreeTraffic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.InitFreeTraffic");

	ULogin_Loading_UIBP_C_InitFreeTraffic_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.SetLogo
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::SetLogo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.SetLogo");

	ULogin_Loading_UIBP_C_SetLogo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.UIHide
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::UIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.UIHide");

	ULogin_Loading_UIBP_C_UIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.RefreshLoading
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::RefreshLoading()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.RefreshLoading");

	ULogin_Loading_UIBP_C_RefreshLoading_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.FinishLoading
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::FinishLoading()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.FinishLoading");

	ULogin_Loading_UIBP_C_FinishLoading_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.InitLoading
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::InitLoading()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.InitLoading");

	ULogin_Loading_UIBP_C_InitLoading_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.UIShow
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::UIShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.UIShow");

	ULogin_Loading_UIBP_C_UIShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_Loading_UIBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.Tick");

	ULogin_Loading_UIBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.DelayShowLoading
// (BlueprintCallable, BlueprintEvent)

void ULogin_Loading_UIBP_C::DelayShowLoading()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.DelayShowLoading");

	ULogin_Loading_UIBP_C_DelayShowLoading_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULogin_Loading_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.Construct");

	ULogin_Loading_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Login_Loading_UIBP.Login_Loading_UIBP_C.ExecuteUbergraph_Login_Loading_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_Loading_UIBP_C::ExecuteUbergraph_Login_Loading_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Login_Loading_UIBP.Login_Loading_UIBP_C.ExecuteUbergraph_Login_Loading_UIBP");

	ULogin_Loading_UIBP_C_ExecuteUbergraph_Login_Loading_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

