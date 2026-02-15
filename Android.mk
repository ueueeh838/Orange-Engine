LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := OrangeKernel
LOCAL_SRC_FILES := OrangeKernel.a
include $(PREBUILT_STATIC_LIBRARY)


include $(CLEAR_VARS)
LOCAL_MODULE := TEST
LOCAL_CFLAGS := -std=c99 -O2
LOCAL_CPPFLAGS := -std=c++20 -O2
LOCAL_SRC_FILES += main.cpp
LOCAL_STATIC_LIBRARIES := OrangeKernel

LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv2 -lGLESv3 -lz
LOCAL_CFLAGS += -fvisibility=hidden -w -Wno-error=c++11-narrowing
LOCAL_CPPFLAGS += -fvisibility=hidden -w -Wno-error=c++11-narrowing
LOCAL_CPPFLAGS += -fvisibility=hidden -w -Wformat

include $(BUILD_EXECUTABLE)
