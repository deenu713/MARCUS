#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_UICommonFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_ScreenHole
struct UUICommonFunctionLibrary_C_SetAdaptation_ScreenHole_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetIPXAdaptation
struct UUICommonFunctionLibrary_C_SetIPXAdaptation_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptationByOffset
struct UUICommonFunctionLibrary_C_SetAdaptationByOffset_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby
struct UUICommonFunctionLibrary_C_SetAdaptation_Lobby_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString
struct UUICommonFunctionLibrary_C_FormatSecondsToString_Params
{
	int                                                Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Ret;                                                      // (Parm, OutParm)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetSquareFixedScslr
struct UUICommonFunctionLibrary_C_SetSquareFixedScslr_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation
struct UUICommonFunctionLibrary_C_SetAdaptation_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetTabStyle
struct UUICommonFunctionLibrary_C_SetTabStyle_Params
{
	bool                                               isCheck;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      onColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FColor                                      offColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

