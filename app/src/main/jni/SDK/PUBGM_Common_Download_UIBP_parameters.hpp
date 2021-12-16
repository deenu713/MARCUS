#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_Common_Download_UIBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadDataByPath
struct UCommon_Download_UIBP_C_SetDownloadDataByPath_Params
{
	struct FString                                     Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               needBatchPathList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               leftTips;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Download_UIBP.Common_Download_UIBP_C.OnClickDownload
struct UCommon_Download_UIBP_C_OnClickDownload_Params
{
};

// Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadData
struct UCommon_Download_UIBP_C_SetDownloadData_Params
{
	struct FString                                     ItemIdList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               isShowMask;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Common_Download_UIBP.Common_Download_UIBP_C.SetDownloadIcon
struct UCommon_Download_UIBP_C_SetDownloadIcon_Params
{
};

// Function Common_Download_UIBP.Common_Download_UIBP_C.BndEvt__Button_Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UCommon_Download_UIBP_C_BndEvt__Button_Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Common_Download_UIBP.Common_Download_UIBP_C.ExecuteUbergraph_Common_Download_UIBP
struct UCommon_Download_UIBP_C_ExecuteUbergraph_Common_Download_UIBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

