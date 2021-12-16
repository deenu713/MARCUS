#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_UICommonFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C
// 0x0000 (0x0020 - 0x0020)
class UUICommonFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C");
		return pStaticClass;
	}


	static void SetAdaptation_ScreenHole(class UWidget* Widget, class UObject* __WorldContext);
	static void SetIPXAdaptation(class UWidget* Widget, class UObject* __WorldContext);
	static void SetAdaptationByOffset(class UWidget* Widget, class UObject* __WorldContext);
	static void SetAdaptation_Lobby(class UWidget* Widget, class UObject* __WorldContext);
	static void FormatSecondsToString(int Seconds, class UObject* __WorldContext, struct FText* Ret);
	static void SetSquareFixedScslr(class UWidget* Widget, class UObject* __WorldContext);
	static void SetAdaptation(class UWidget* Widget, class UObject* __WorldContext);
	static void SetTabStyle(bool isCheck, class UTextBlock* Text, class UImage* Icon, const struct FColor& onColor, const struct FColor& offColor, class UObject* __WorldContext);
};


}

