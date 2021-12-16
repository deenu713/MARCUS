#include "StrEnc.h"
#include "Includes.h"

#include "SDK.hpp"
#include "fake_dlfcn.h"


#include "Tools.h"
#include "json.hpp"
#include "base64/base64.h"

#include "Log.h"
#include "Spoof.h"

#include "Engine/Canvas.h"

using json = nlohmann::ordered_json;
using namespace SDK;

#include "UE4.h"

extern void StartRuntimeHook(const char *);

// ================================================================================================================================ //
uintptr_t g_UE4 = 0;
uintptr_t GWorld_Offset, GUObjectArray_Offset, GNames_Offset, CanvasMap_Offset, AimBullet_Offset;

#define SLEEP_TIME 1000LL / 120LL

int g_screenWidth = 0, g_screenHeight = 0;
std::map<std::string, u_long> Config;

bool bScanPatternCompleted = false;

std::map<int, bool> itemConfig;
json itemData;

ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
TArray<AActor *> g_Actors = TArray<AActor *>();

// ================================================================================================================================ //
std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->GetName();
    }
    return s;
}

bool isObjectPlayer(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraPlayerCharacter::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectController(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraPlayerController::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectGrenade(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraGrenadeBase::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectVehicle(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == ASTExtraVehicleBase::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectLoot(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

bool isObjectLootBox(UObject *Object) {
    if (!Tools::IsPtrValid(Object)) {
        return false;
    }
    for (auto super = Object->ClassPrivate; Tools::IsPtrValid(super); super = (UClass *) super->SuperStruct) {
        if (super == APickUpListWrapperActor::StaticClass()) {
            return true;
        }
    }
    return false;
}

#define OFFSET_UCanvas_ViewProjectionMatrix 0x200
#define OFFSET_USceneComponent_ComponentToWorld 0x150
#define OFFSET_USkinnedMeshComponent_ComponentSpaceTransformsArray 0x5D0
#define OFFSET_USkinnedMeshComponent_CurrentReadComponentTransforms 0x5CC
#define OFFSET_WeaponManagerComponent 0xE34
#define OFFSET_CurrentWeaponReplicated 0x434
#define OFFSET_PGWorld 0x759f77c
#define OFFSET_WorldToNetDriver 0x24
#define OFFSET_PController 96
#define OFFSET_PersistentLevel 0x20
#define OFFSET_BasedMovementInfo_BasedMovement 0x330


FVector WorldToScreen(FVector pos) {
    FVector resultPos = {0, 0, 0};
    if (CanvasMap_Offset) {
        auto canvasMap = *(uintptr_t *) (CanvasMap_Offset);
        if (Tools::IsPtrValid((void *) canvasMap)) {
            auto Canvas = *(uintptr_t *) (canvasMap + (0x8 * 3) + 0x8);
            if (Tools::IsPtrValid((void *) Canvas)) {
                Matrix viewMatrix = *(Matrix *) (Canvas + OFFSET_UCanvas_ViewProjectionMatrix);

                float screenW = (viewMatrix.M[0][3] * pos.X) + (viewMatrix.M[1][3] * pos.Y) + (viewMatrix.M[2][3] * pos.Z + viewMatrix.M[3][3]);
                resultPos.Z = screenW;

                float screenY = (viewMatrix.M[0][1] * pos.X) + (viewMatrix.M[1][1] * pos.Y) + (viewMatrix.M[2][1] * pos.Z + viewMatrix.M[3][1]);
                float screenX = (viewMatrix.M[0][0] * pos.X) + (viewMatrix.M[1][0] * pos.Y) + (viewMatrix.M[2][0] * pos.Z + viewMatrix.M[3][0]);

                resultPos.Y = (g_screenHeight / 2) - (g_screenHeight / 2) * screenY / screenW;
                resultPos.X = (g_screenWidth / 2) + (g_screenWidth / 2) * screenX / screenW;
            }
        }
    }
    return resultPos;
}

FVector GetBoneLocation(ASTExtraPlayerCharacter *Actor, FName Name) {
    auto Mesh = Actor->Mesh;
    if (Mesh) {
        auto Idx = Mesh->GetBoneIndex(Name);
        if (Idx != -1) {
            auto CurrentReadComponentTransforms = *(int *) ((uintptr_t) Mesh + OFFSET_USkinnedMeshComponent_CurrentReadComponentTransforms);
            if (CurrentReadComponentTransforms >= 0 && CurrentReadComponentTransforms <= 1) {
                auto ComponentSpaceTransforms = *(TArray<FTransform> *) ((uintptr_t) Mesh + (OFFSET_USkinnedMeshComponent_ComponentSpaceTransformsArray + (CurrentReadComponentTransforms * 0xC)));
                if (ComponentSpaceTransforms.IsValidIndex(Idx)) {
                    auto ComponentToWorld = *(FTransform *) ((uintptr_t) Mesh + OFFSET_USceneComponent_ComponentToWorld);
                    auto Bone = ComponentSpaceTransforms[Idx];
                    return TransformToLocation(ComponentToWorld, Bone);
                }
            }
        }
    }
    return {0, 0, 0};
}

FVector GetBoneLocation(ASTExtraPlayerCharacter *Actor, int Idx) {
    auto Mesh = Actor->Mesh;
    if (Mesh) {
        auto CurrentReadComponentTransforms = *(int *) ((uintptr_t) Mesh + OFFSET_USkinnedMeshComponent_CurrentReadComponentTransforms);
        if (CurrentReadComponentTransforms >= 0 && CurrentReadComponentTransforms <= 1) {
            auto ComponentSpaceTransforms = *(TArray<FTransform> *) ((uintptr_t) Mesh + (OFFSET_USkinnedMeshComponent_ComponentSpaceTransformsArray + (CurrentReadComponentTransforms * 0xC)));
            if (ComponentSpaceTransforms.IsValidIndex(Idx)) {
                auto ComponentToWorld = *(FTransform *) ((uintptr_t) Mesh + OFFSET_USceneComponent_ComponentToWorld);
                auto Bone = ComponentSpaceTransforms[Idx];
                return TransformToLocation(ComponentToWorld, Bone);
            }
        }
    }
    return {0, 0, 0};
}

// ================================================================================================================================ //
ASTExtraPlayerCharacter *GetTargetByDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto localPlayer = g_LocalPlayer;

    TArray<AActor *> Actors = g_Actors;

    FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
    if (localPlayer) {
        LocalPos = GetBoneLocation(localPlayer, 0);
        ViewPos = GetBoneLocation(localPlayer, 6);
        ViewPos.Z += 15.f;
    }

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        if (localPlayer) {
            for (int i = 0; i < Actors.Num(); i++) {
                if (Actors[i] && isObjectPlayer(Actors[i])) {
                    auto Actor = (ASTExtraPlayerCharacter *) Actors[i];
                    if (Actor->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Actor->TeamID == localPlayer->TeamID)
                        continue;

                    if (Actor->bDead)
                        continue;

                    if (Config["AIM::VISCHECK"]) {
                        FHitResult out;
                        if (UKismetSystemLibrary::LineTraceSingle(GWorld, ViewPos, GetBoneLocation(Actor, 6), ETraceTypeQuery::TraceTypeQuery1, true, Actors, EDrawDebugTrace::EDrawDebugTrace__None, 0.0f, true, {}, {}, &out)) {
                            continue;
                        }
                    }

                    if (Config["AIM::KNOCKED"]) {
                        if (Actor->Health == 0.0f)
                            continue;
                    }
                    float dist = FVector::Distance(LocalPos, GetBoneLocation(Actor, 0));
                    if (dist < max) {
                        max = dist;
                        result = Actor;
                    }
                }
            }
        }
    }

    return result;
}

bool isInsideFOV(int x, int y) {
    if (!Config["AIM::SIZE"])
        return true;

    int circle_x = g_screenWidth / 2;
    int circle_y = g_screenHeight / 2;
    int rad = Config["AIM::SIZE"];
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

ASTExtraPlayerCharacter *GetTargetByCrosshairDistance() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        auto localPlayer = g_LocalPlayer;

        TArray<AActor *> Actors = g_Actors;

        FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
        if (localPlayer) {
            LocalPos = GetBoneLocation(localPlayer, 0);
            ViewPos = GetBoneLocation(localPlayer, 6);
            ViewPos.Z += 15.f;
        }

        if (localPlayer) {
            for (int i = 0; i < Actors.Num(); i++) {
                if (Actors[i] && isObjectPlayer(Actors[i])) {
                    auto Actor = (ASTExtraPlayerCharacter *) Actors[i];
                    if (Actor->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Actor->TeamID == localPlayer->TeamID)
                        continue;

                    if (Actor->bDead)
                        continue;

                    if (Config["AIM::VISCHECK"]) {
                        FHitResult out;
                        if (UKismetSystemLibrary::LineTraceSingle(GWorld, ViewPos, GetBoneLocation(Actor, 6), ETraceTypeQuery::TraceTypeQuery1, true, Actors, EDrawDebugTrace::EDrawDebugTrace__None, 0.0f, true, {}, {}, &out)) {
                            continue;
                        }
                    }

                    if (Config["AIM::KNOCKED"]) {
                        if (Actor->Health == 0.0f)
                            continue;
                    }

                    auto Root = GetBoneLocation(Actor, 0);
                    auto Head = GetBoneLocation(Actor, 6);

                    FVector RootSc = WorldToScreen(Root);
                    FVector HeadSc = WorldToScreen(Head);
                    if (RootSc.Z > 0 && HeadSc.Z > 0) {
                        float height = abs(HeadSc.Y - RootSc.Y);
                        float width = height * 0.65f;

                        FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                        if ((middlePoint.X >= 0 && middlePoint.X <= g_screenWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= g_screenHeight)) {
                            FVector2D v2Middle = FVector2D((float) (g_screenWidth / 2), (float) (g_screenHeight / 2));
                            FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                            if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Actor;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return result;
}

// ================================================================================================================================ //
void native_onCanvasDraw(JNIEnv *env, jobject obj, jobject canvas, int screenWidth, int screenHeight, float screenDensity) {
    static Canvas *m_Canvas = 0;
    if (!m_Canvas) {
        LOGI("Canvas Object: %p | Width: %d | Height: %d | Density: %f", canvas, screenWidth, screenHeight, screenDensity);
        m_Canvas = new Canvas(env, screenWidth, screenHeight, screenDensity);
    }

    m_Canvas->UpdateCanvas(canvas);

    if (!bScanPatternCompleted)
        return;

    ASTExtraPlayerCharacter *localPlayer = 0;
    ASTExtraPlayerController *localController = 0;
    TArray<AActor *> Actors = TArray<AActor *>();

    g_screenWidth = screenWidth;
    g_screenHeight = screenHeight;
     if (localController == 0){
        m_Canvas->drawText(("                        Telegram @MarcusCheaT | Version 1.0"), screenWidth / 15 + 15, screenHeight / 28, 8.0f, Align::CENTER, ARGB(255,255,0,0), BLACK);
         
            }
            
            

    UWorld *GWorld = *(UWorld **) (GWorld_Offset);
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *)((uintptr_t)PersistentLevel + 0x70);

            for (int i = 0; i < Actors.Num(); i++) {
                if (isObjectController(Actors[i])) {
                    localController = (ASTExtraPlayerController *) Actors[i];
                    break;
                }
            }
       

            
       
            if (localController) {
                localController->AntiCheatManagerComp = 0;

                for (int i = 0; i < Actors.Num(); i++) {
                    if (isObjectPlayer(Actors[i])) {
                        auto Player = (ASTExtraPlayerCharacter *) Actors[i];
                        if (Player->PlayerKey == localController->PlayerKey) {
                            localPlayer = Player;
                            break;
                        }
                    }
                }

                if (Config["AIM::TARGET"] == 1) {
                    m_Canvas->drawCircle(screenWidth / 2, screenHeight / 2, Config["AIM::SIZE"], 1.0f, false, ARGB(255, 0, 255, 0));
                }

                int totalEnemies = 0, totalBots = 0;

                FVector LocalPos{0, 0, 0}, ViewPos{0, 0, 0};
                if (localPlayer) {
                    localPlayer->MoveAntiCheatComponent = 0;
                    localPlayer->LagCompensationComponent = 0;

                    LocalPos = GetBoneLocation(localPlayer, 0);
                    ViewPos = GetBoneLocation(localPlayer, 6);
                    ViewPos.Z += 15.f;
                }

                auto PlayerCameraManager = localController->PlayerCameraManager;
                if (PlayerCameraManager) {
                    ViewPos = PlayerCameraManager->CameraCache.POV.Location;
                }

                for (int i = 0; i < Actors.Num(); i++) {
                    if (isObjectPlayer(Actors[i])) {
                        auto Player = (ASTExtraPlayerCharacter *) Actors[i];

                        auto RootComponent = Player->RootComponent;
                        if (!RootComponent)
                            continue;

                        float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;

                        if (localPlayer) {
                            if (Player->PlayerKey == localPlayer->PlayerKey)
                                continue;

                            if (Player->TeamID == localPlayer->TeamID)
                                continue;
                        }

                        if (Player->bDead)
                            continue;

                        if (Player->bIsAI)
                            totalBots++;
                        else totalEnemies++;

                        FVector HeadPos = GetBoneLocation(Player, 6);
                        HeadPos.Z += 12.5f;

                        FVector RootPos = GetBoneLocation(Player, 0);

                        FVector HeadSc = WorldToScreen(HeadPos);
                        FVector RootSc = WorldToScreen(RootPos);

                        if (HeadSc.Z > 0 && RootSc.Z > 0) {
                            // ESP LINE
                            if (Config["ESP::LINE"]) {
                                m_Canvas->drawLine(screenWidth / 2, 0, HeadSc.X, HeadSc.Y, 2.0f, GetRandomColorByIndex(Player->TeamID));
                            }
                            
                            

                            if (Config["ESP::SKELETON"]) {
                                // ESP SKELETON
                                std::vector<std::string> right_arm{"spine_03", "upperarm_r", "lowerarm_r", "hand_r", "item_r"};
                                std::vector<std::string> left_arm{"spine_03", "upperarm_l", "lowerarm_l", "hand_l", "item_l"};
                                std::vector<std::string> spine{"spine_03", "spine_02", "spine_01", "pelvis"};
                                std::vector<std::string> lower_right{"pelvis", "thigh_r", "calf_r", "foot_r"};
                                std::vector<std::string> lower_left{"pelvis", "thigh_l", "calf_l", "foot_l"};
                                std::vector<std::vector<std::string>> skeleton{right_arm, left_arm, spine, lower_right, lower_left};

                                FHitResult HitResult;
                                bool IsVisible = !UKismetSystemLibrary::LineTraceSingle(GWorld, ViewPos, GetBoneLocation(Player, 6), ETraceTypeQuery::TraceTypeQuery1, true, Actors, EDrawDebugTrace::EDrawDebugTrace__None, 0.0f, true, {}, {}, &HitResult);

                                for (auto &boneStructure : skeleton) {
                                    std::string lastBone;
                                    for (std::string &currentBone : boneStructure) {
                                        if (!lastBone.empty()) {
                                            FVector boneFrom = WorldToScreen(GetBoneLocation(Player, lastBone.c_str()));
                                            FVector boneTo = WorldToScreen(GetBoneLocation(Player, currentBone.c_str()));

                                            if (boneFrom.Z > 0 && boneTo.Z > 0) {
                                                if (IsVisible) {
                                                    m_Canvas->drawLine(boneFrom.X, boneFrom.Y, boneTo.X, boneTo.Y, 3.0f, GREEN);
                                                } else {
                                                    m_Canvas->drawLine(boneFrom.X, boneFrom.Y, boneTo.X, boneTo.Y, 3.0f, RED);
                                                }
                                            }
                                        }
                                        lastBone = currentBone;
                                    }
                                }
                            }

                            // ESP BOX
                            if (Config["ESP::BOX"]==1) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.65f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 2.f, RED);
                            }
                            if (Config["ESP::BOX"]==1) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.80f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 3.f, RED);
                            }
                             if (Config["ESP::BOX"]==2) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.65f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.5f, BLACK);
                            }
                            if (Config["ESP::BOX"]==2) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.67f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.0f, WHITE);
                            }
                            if (Config["ESP::BOX"]==3) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.65f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.5f, WHITE);
                            }
                            if (Config["ESP::BOX"]==3) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.67f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.0f, WHITE);
                            }
                            if (Config["ESP::BOX"]==4) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.65f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.5f, GREEN);
                            }
                           if (Config["ESP::BOX"]==4) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.67f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.0f, BLACK);
                            }
                            if (Config["ESP::BOX"]==5) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.65f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.5f, YELLOW);
                            }
                           if (Config["ESP::BOX"]==5) {
                                float boxHeight = abs(HeadSc.Y - RootSc.Y);
                                float boxWidth = boxHeight * 0.67f;
                                FVector2D vBox = {HeadSc.X - (boxWidth / 2), HeadSc.Y};
                                m_Canvas->drawBorder(vBox.X, vBox.Y, boxWidth, boxHeight, 1.0f, YELLOW);
                            }


                            // ESP HEALTH
                            if (Config["ESP::HEALTH"]) {
                                int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                                int MaxHP = (int) Player->HealthMax;

                                long curHP_Color = ARGB(155, std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((173 * CurHP) / MaxHP), 255), 47);

                                if (Player->Health == 0.0f && !Player->bDead) {
                                    curHP_Color = ARGB(255, 127, 255, 0);

                                    CurHP = Player->NearDeathBreath;
                                    if (Player->NearDeatchComponent) {
                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                auto AboveHead = GetBoneLocation(Player, 6);
                                AboveHead.Z += 45.f;
                                FVector AboveHeadSc = WorldToScreen(AboveHead);
                                if (AboveHeadSc.Z > 0) {
                                    auto mWidthScale = std::min(0.5f * Distance, 50.f);

                                    auto mWidth = m_Canvas->scaleSize(45.f) - mWidthScale;
                                    auto mHeight = mWidth * 0.125f;

                                    AboveHeadSc.X -= (mWidth / 2);
                                    AboveHeadSc.Y -= (mHeight * 3.5f);

                                    m_Canvas->drawBox(AboveHeadSc.X, AboveHeadSc.Y, (CurHP * mWidth / MaxHP), mHeight, curHP_Color);
                                    m_Canvas->drawBorder(AboveHeadSc.X, AboveHeadSc.Y, mWidth, mHeight, 3.5f, YELLOW);
                                }
                            }
                            // ESP INFO
                            if (Config["ESP::NAME"] || Config["ESP::DISTANCE"]) {
                                FVector BelowRoot = RootPos;
                                BelowRoot.Z -= 14.f;
                                FVector BelowRootSc = WorldToScreen(BelowRoot);
                                if (BelowRootSc.Z > 0) {
                                    std::wstring ws;

                                    if (Config["ESP::NAME"]) {
                                        if (Player->bIsAI)
                                            ws = L"Bot";
                                        else if (Player->PlayerName.IsValid())
                                            ws = Player->PlayerName.ToWString();
                                    }

                                    if (Config["ESP::DISTANCE"]) {
                                        ws += L" [";
                                        ws += std::to_wstring((int) Distance);
                                        ws += L"m]";
                                    }

                                    float mFontScale = std::max(2.0f, 6.f - (Distance / 75.0f));
                                    auto mText = m_Canvas->getTextBounds(ws.c_str(), 0, ws.size());
                                    m_Canvas->drawText(ws.c_str(), BelowRootSc.X, BelowRootSc.Y + mText->getHeight(), mFontScale, Align::CENTER, RED, BLACK);
                                }
                            }
                        }
                    }
                    if (Config["ESP::GRENADE"]) {
                        if (isObjectGrenade(Actors[i])) {
                            auto RootComponent = Actors[i]->RootComponent;
                            if (!RootComponent)
                                continue;

                            float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                            if (Distance <= 500.f) {
                                m_Canvas->drawText("Warning! Grenade(s) near you!", screenWidth / 2, 350, 15.f, Align::CENTER, RED, BLACK);

                                FVector Location = WorldToScreen(RootComponent->RelativeLocation);
                                if (Location.Z > 0) {
                                    m_Canvas->drawText("[ GRENADE ]", Location.X, Location.Y, 12.5f, Align::CENTER, GREEN, BLACK);
                                }
                            }
                        }
                    }
                    if (Config["ESP::VEHICLE"]) {
                        if (isObjectVehicle(Actors[i])) {
                            ASTExtraVehicleBase *Vehicle = (ASTExtraVehicleBase *) Actors[i];

                            auto RootComponent = Vehicle->RootComponent;
                            if (!RootComponent)
                                continue;

                            float Distance = FVector::Distance(LocalPos, RootComponent->RelativeLocation) / 100.f;
                            if (Distance <= 500.f) {
                                FVector Location = WorldToScreen(RootComponent->RelativeLocation);
                                if (Location.Z > 0) {
                                    std::string s = GetVehicleName(Vehicle);
                                    s += " [";
                                    s += std::to_string((int) Distance);
                                    s += "m]";
                                    m_Canvas->drawText(s.c_str(), Location.X, Location.Y, 5.f, Align::CENTER, GREEN, BLACK);
                                }
                            }
                        }
                    }
                }


                if (totalEnemies > 0 || totalBots > 0) {
                    std::string s;
                    if (totalEnemies > 0) {
                        s = "Enem";
                        if (totalEnemies > 1)
                            s += "ies";
                        else s += "y";
                        s += " Nearby: ";
                        s += std::to_string(totalEnemies);
                        if (totalBots > 0)
                            s += " | ";
                    }
                    if (totalBots) {
                        s += "Bot";
                        if (totalBots > 1)
                            s += "s";
                        s += " Nearby: ";
                        s += std::to_string(totalBots);
                    }

                    m_Canvas->drawText(s.c_str(), screenWidth / 2, 75, 12, Align::CENTER, GREEN, BLACK);
                }
            }
        }
    }

    g_LocalPlayer = localPlayer;
    g_LocalController = localController;
    g_Actors = Actors;
}

// ================================================================================================================================ //
void *Memory_Thread(void *) {
    uint8_t shellCode_AimBullet[] = {0x14, 0x10, 0x9F, 0xE5, 0x14, 0x20, 0x9F, 0xE5, 0x14, 0x30, 0x9F, 0xE5, 0x00, 0x10, 0x80, 0xE5, 0x04, 0x20, 0x80, 0xE5, 0x08, 0x30, 0x80, 0xE5, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    uint8_t origCode_AimBullet[40]{0x00};

    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        //*(bool *) (g_UE4 + 0x06E175F0) = false; // TssEnable
        auto localPlayer = g_LocalPlayer;
        auto localController = g_LocalController;
        if ((localPlayer && localPlayer->RootComponent) && localController) {
            if (Config["AIM::AIMBOT"] || Config["AIM::AIMBULLET"]) {
                static bool bAimBulletPatch = false;
                bool bAimBulletOK = false;

                UCharacterWeaponManagerComponent *WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                if (WeaponManagerComponent) {
                    ASTExtraShootWeapon *CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                    if (CurrentWeaponReplicated) {
                        UShootWeaponEntity *ShootWeaponEntityComponent = CurrentWeaponReplicated->ShootWeaponEntityComp;
                        if (ShootWeaponEntityComponent) {
                            bool bReady = Config["AIM::TRIGGER"] == 0;
                            if (Config["AIM::TRIGGER"] == 1) {
                                bReady = localPlayer->bIsWeaponFiring;
                            }
                            if (Config["AIM::TRIGGER"] == 2) {
                                bReady = localPlayer->bIsGunADS;
                            }
                            if (Config["AIM::TRIGGER"] == 3) {
                                bReady = (localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS);
                            }
                            if (Config["AIM::TRIGGER"] == 4) {
                                bReady = (localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS);
                            }
                            if (bReady) {
                                ASTExtraPlayerCharacter *Target = 0;
                                if (Config["AIM::TARGET"] == 0) {
                                    Target = GetTargetByDistance();
                                }
                                if (Config["AIM::TARGET"] == 1) {
                                    Target = GetTargetByCrosshairDistance();
                                }
                                if (Target && Target->RootComponent) {
                                    FVector targetAimPos = GetBoneLocation(Target, 6);
                                    if (Config["AIM::LOCATION"] == 1) {
                                        targetAimPos = GetBoneLocation(Target, 6);
                                        targetAimPos.Z -= 25.f;
                                    }

                                    if (Config["AIM::PREDICTION"]) {
                                        ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                        if (CurrentVehicle) {
                                            FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                            float dist = FVector::Distance(localPlayer->RootComponent->RelativeLocation, Target->RootComponent->RelativeLocation);
                                            auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                            targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                        } else {
                                            auto STCharacterMovement = Target->STCharacterMovement;
                                            if (STCharacterMovement) {
                                                FVector Velocity = STCharacterMovement->Velocity;

                                                float dist = FVector::Distance(localPlayer->RootComponent->RelativeLocation, Target->RootComponent->RelativeLocation);
                                                auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                                targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                            }
                                        }
                                    }

                                    if (Config["AIM::AIMBOT"]) {
                                        FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
                                        localController->ControlRotation = fAimRotation;
                                    }

                                    if (Config["AIM::AIMBULLET"]) {
                                        if (origCode_AimBullet[0] == 0x00) {
                                            Tools::Read((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                                        }

                                        if (*(uint8_t *) (AimBullet_Offset) == 0xF0) {
                                            if (Tools::Write((void *) (AimBullet_Offset), shellCode_AimBullet, sizeof(shellCode_AimBullet))) {
                                                bAimBulletPatch = true;
                                            }
                                        }

                                        if (bAimBulletPatch) {
                                            if (Tools::Write((void *) (AimBullet_Offset + 0x1C), &targetAimPos, sizeof(FVector))) {
                                                bAimBulletOK = true;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                if (origCode_AimBullet[0] != 0x00) {
                    if (bAimBulletPatch && !bAimBulletOK) {
                        Tools::Write((void *) (AimBullet_Offset), origCode_AimBullet, sizeof(origCode_AimBullet));
                        bAimBulletPatch = false;
                    }
                }
            }
        }

        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
    return 0;
}

// ================================================================================================================================ //
const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

// ================================================================================================================================ //
void *Init_Thread(void *) {
    while (!g_UE4) {
        g_UE4 = Tools::GetBaseAddress(/*libUE4.so*/ StrEnc("a${p|h1h;", "\x0D\x4D\x19\x25\x39\x5C\x1F\x1B\x54", 9).c_str());
        sleep(1);
    }

    LOGI("libUE4.so: %p", g_UE4);

        GWorld_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 60 8F E0 ?? ?? ?? E5 04 00 80 E0");
    if (GWorld_Offset) {
        GWorld_Offset += *(uintptr_t * )((GWorld_Offset + *(uint8_t * )(GWorld_Offset) + 0x8)) + 0x18;
        LOGI("GWorld_Offset: %p", GWorld_Offset - g_UE4);
    } else {
        LOGI("Failed to search GWorld pattern!");
    }
    
    GUObjectArray_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 1F 01 C2 E7 04 00 84 E5 00 20 A0 E3");
    if (GUObjectArray_Offset) {
        GUObjectArray_Offset += *(uintptr_t * )((GUObjectArray_Offset + *(uint8_t * )(GUObjectArray_Offset) + 0x8)) + 0x18;
        LOGI("GUObjectArray_Offset: %p", GUObjectArray_Offset - g_UE4);
    } else {
        LOGI("Failed to search GUObjectArray pattern!");
    }


    GNames_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 00 00 8F E0 ?? ?? ?? E5 04 00 A0 E1 10 8C BD E8");
    if (GNames_Offset) {
        GNames_Offset += *(uintptr_t * )((GNames_Offset + *(uint8_t * )(GNames_Offset) + 0x8)) + 0x10;
        LOGI("GNames_Offset: %p", GNames_Offset - g_UE4);
    } else {
        LOGI("Failed to search GNames pattern!");
    }

    CanvasMap_Offset = Tools::FindPattern("libUE4.so", "?? ?? ?? E5 24 10 4B E2 18 40 0B E5 00 20 A0 E3");
    if (CanvasMap_Offset) {
        CanvasMap_Offset += *(uintptr_t * )((CanvasMap_Offset + *(uint8_t * )(CanvasMap_Offset) + 0x8)) + 0x1C;
        LOGI("CanvasMap_Offset: %p", CanvasMap_Offset - g_UE4);
    } else {
        LOGI("Failed to search CanvasMap pattern!");
    }

    AimBullet_Offset = Tools::FindPattern("libUE4.so", "F0 4F 2D E9 1C B0 8D E2 04 D0 4D E2 06 8B 2D ED D0 D0 4D E2 0C 70 8B E2 44 C0 4B E2 01 50 A0 E1 00 40 A0 E1 83 00 97 E8 08 60 9B E5 4C 00 8C E8 50 20 4B E2 83 00 82 E8 ?? ?? 95 E5");
    LOGI("AimBullet_Offset: %p", AimBullet_Offset - g_UE4);
    
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    if (mprotect((void *) ((uintptr_t) AimBullet_Offset - ((uintptr_t) AimBullet_Offset % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) != 0) {
        LOGI("mprotect failed! Feature may not be working!");
    } else {
        LOGI("mprotect succeeded!");
    }

    FName::GNames = *(TNameEntryArray **) (GNames_Offset);
    UObject::GUObjectArray = (FUObjectArray *) (GUObjectArray_Offset);

    bScanPatternCompleted = true;

    pthread_t t;
    pthread_create(&t, 0, Memory_Thread, 0);

    return 0;
}

void native_Init(JNIEnv *env, jclass clazz, jobject mContext) {
    auto pkgName = GetPackageName(env, mContext);
    StartRuntimeHook(pkgName);

    pthread_t t;
    pthread_create(&t, 0, Init_Thread, 0);
}
