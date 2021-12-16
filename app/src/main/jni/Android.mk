LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

# Here is the name of your lib.
# When you change the lib name, change also on System.loadLibrary("") under OnCreate method on StaticActivity.java
# Both must have same name
LOCAL_MODULE    := MarcusCheaT

# Code optimization
# -std=c++17 is required to support AIDE app with NDK
LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s -std=c++17
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fms-extensions -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all, -llog
LOCAL_ARM_MODE := arm

LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)


LOCAL_SRC_FILES 		:= Main.cpp \
    Tools.cpp \
    Log.cpp \
    fake_dlfcn.cpp \
    Engine/Paint.cpp \
    Engine/Canvas.cpp \
    Engine/Rect.cpp \
    Engine/Typeface.cpp \
    Engine/Path.cpp \
    base64/base64.cpp \
	Substrate/hde64.c \
	Substrate/SubstrateDebug.cpp \
	Substrate/SubstrateHook.cpp \
	Substrate/SubstratePosixMemory.cpp \
	Substrate/And64InlineHook.cpp \
	KittyMemory/KittyMemory.cpp \
	KittyMemory/MemoryPatch.cpp \
    KittyMemory/MemoryBackup.cpp \
    KittyMemory/KittyUtils.cpp \
	SDK/PUBGM_Basic.cpp \
    SDK/PUBGM_Basic_functions.cpp \
    SDK/PUBGM_CoreUObject_functions.cpp \
    SDK/PUBGM_Engine_functions.cpp \
    SDK/PUBGM_ShadowTrackerExtra_functions.cpp \
    SDK/PUBGM_Client_functions.cpp \
    SDK/PUBGM_UMG_functions.cpp

LOCAL_LDLIBS := -llog -landroid -lGLESv2

include $(BUILD_SHARED_LIBRARY)

