#pragma once

// PlayerUnknown's Battle Ground Mobile (1.5.0) SDK

#include "PUBGM_MiniTv_Class_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MiniTv_Class.MiniTv_Class_C
// 0x0008 (0x0370 - 0x0368)
class AMiniTv_Class_C : public ALuaActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0004) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass MiniTv_Class.MiniTv_Class_C");
		return pStaticClass;
	}


	void TouchEnd(TEnumAsByte<enum ETouchIndex> finger);
	void TouchStart(TEnumAsByte<enum ETouchIndex> finger);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchBeginSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(TEnumAsByte<enum ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void ExecuteUbergraph_MiniTv_Class(int EntryPoint);
};


}

