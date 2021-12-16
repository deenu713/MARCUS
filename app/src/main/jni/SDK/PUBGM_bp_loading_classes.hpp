#pragma once

// PlayerUnknown's Battle Ground Mobile (1.4.0) SDK

#include "PUBGM_bp_loading_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_loading.bp_loading_C
// 0x0028 (0x0328 - 0x0300)
class Abp_loading_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BP_Percent_f;                                             // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsShowFreeTraffic;                                     // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	int                                                BP_LoadingTo;                                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LoadingBgPath;                                         // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_InitPercent;                                           // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_FromBigEvent;                                          // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_loading.bp_loading_C");
		return pStaticClass;
	}


	void EventInitFreeTraffic_NoFetch();
	void EventInitFreeTraffic();
	void EventBpLoadingSetBgResPath_NoFetch();
	void EventBpLoadingSetBgResPath();
	void EventBpLoadingHide_NoFetch();
	void EventBpLoadingHide();
	void EventBpLoadingSetBgResPathByServer_NoFetch();
	void EventBpLoadingSetBgResPathByServer();
	void EventPreHideLoading_NoFetch();
	void EventPreHideLoading();
	void UserConstructionScript();
};


}

