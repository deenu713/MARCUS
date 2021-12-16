// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_Common_Download_UIBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadDataByPath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           needBatchPathList              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           leftTips                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Download_UIBP_C::SetDownloadDataByPath(const struct FString& Path, bool needBatchPathList, bool leftTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadDataByPath");

	UCommon_Download_UIBP_C_SetDownloadDataByPath_Params params;
	params.Path = Path;
	params.needBatchPathList = needBatchPathList;
	params.leftTips = leftTips;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Download_UIBP.Common_Download_UIBP_C.OnClickDownload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommon_Download_UIBP_C::OnClickDownload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Download_UIBP.Common_Download_UIBP_C.OnClickDownload");

	UCommon_Download_UIBP_C_OnClickDownload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ItemIdList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           isShowMask                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Download_UIBP_C::SetDownloadData(const struct FString& ItemIdList, bool isShowMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadData");

	UCommon_Download_UIBP_C_SetDownloadData_Params params;
	params.ItemIdList = ItemIdList;
	params.isShowMask = isShowMask;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommon_Download_UIBP_C::SetDownloadIcon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadIcon");

	UCommon_Download_UIBP_C_SetDownloadIcon_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Download_UIBP.Common_Download_UIBP_C.BndEvt__Button_Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommon_Download_UIBP_C::BndEvt__Button_Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Download_UIBP.Common_Download_UIBP_C.BndEvt__Button_Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UCommon_Download_UIBP_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function Common_Download_UIBP.Common_Download_UIBP_C.ExecuteUbergraph_Common_Download_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_Download_UIBP_C::ExecuteUbergraph_Common_Download_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function Common_Download_UIBP.Common_Download_UIBP_C.ExecuteUbergraph_Common_Download_UIBP");

	UCommon_Download_UIBP_C_ExecuteUbergraph_Common_Download_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

