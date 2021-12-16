// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_UICommonFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_ScreenHole
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetAdaptation_ScreenHole(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_ScreenHole");

	UUICommonFunctionLibrary_C_SetAdaptation_ScreenHole_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetIPXAdaptation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetIPXAdaptation(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetIPXAdaptation");

	UUICommonFunctionLibrary_C_SetIPXAdaptation_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptationByOffset
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetAdaptationByOffset(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptationByOffset");

	UUICommonFunctionLibrary_C_SetAdaptationByOffset_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetAdaptation_Lobby(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby");

	UUICommonFunctionLibrary_C_SetAdaptation_Lobby_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Ret                            (Parm, OutParm)

void UUICommonFunctionLibrary_C::FormatSecondsToString(int Seconds, class UObject* __WorldContext, struct FText* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString");

	UUICommonFunctionLibrary_C_FormatSecondsToString_Params params;
	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetSquareFixedScslr
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetSquareFixedScslr(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetSquareFixedScslr");

	UUICommonFunctionLibrary_C_SetSquareFixedScslr_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetAdaptation(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation");

	UUICommonFunctionLibrary_C_SetAdaptation_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetTabStyle
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isCheck                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  onColor                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FColor                  offColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::SetTabStyle(bool isCheck, class UTextBlock* Text, class UImage* Icon, const struct FColor& onColor, const struct FColor& offColor, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetTabStyle");

	UUICommonFunctionLibrary_C_SetTabStyle_Params params;
	params.isCheck = isCheck;
	params.Text = Text;
	params.Icon = Icon;
	params.onColor = onColor;
	params.offColor = offColor;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

}

