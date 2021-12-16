#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_bp_mall_weapon_model_handler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_mall_weapon_model_handler.bp_mall_weapon_model_handler_C
// 0x0060 (0x0370 - 0x0310)
class Abp_mall_weapon_model_handler_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MallWeapon_GRENADE_BOOM_Y;                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_isRecommend;                                // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Skin;                       // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Force_Display;                              // 0x031A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Need_AutoRotate;            // 0x031B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Need_RotateBack;            // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	struct FString                                     BP_MallWeapon_Display_ExtraData;                          // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_Array_MallWeapon_PutOnEquipment_Resid_List;            // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MallWeapon_Cur_Show_Weapon_Resid;                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_HasEditorConfig;                            // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	int                                                BP_MallWeapon_GRENADE_BOOM_Z;                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallWeapon_Cur_Show_Weapon_Need_ResetRotation;         // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                BP_MallWeapon_GRENADE_BOOM_X;                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MallWeapon_CameraId;                                   // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_Array_MallWeapon_AdaptRotation;                        // 0x0350(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MallWeapon_Cur_Equipment_Resid;                        // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_Array_MallWeapon_AdaptTransform;                       // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_mall_weapon_model_handler.bp_mall_weapon_model_handler_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventProjectileAndParticleEffectFinish_NoFetch();
	void EventProjectileAndParticleEffectFinish();
	void UserConstructionScript();
};


}

