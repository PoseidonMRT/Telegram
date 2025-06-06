// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     third_party/jni_zero/jni_generator.py
// For
//     org/webrtc/EglBase10Impl

#ifndef org_webrtc_EglBase10Impl_JNI
#define org_webrtc_EglBase10Impl_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_ZERO_COMPONENT_BUILD_EXPORT extern const char kClassPath_org_webrtc_EglBase10Impl[];
const char kClassPath_org_webrtc_EglBase10Impl[] = "org/webrtc/EglBase10Impl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_ZERO_COMPONENT_BUILD_EXPORT std::atomic<jclass> g_org_webrtc_EglBase10Impl_clazz(nullptr);
#ifndef org_webrtc_EglBase10Impl_clazz_defined
#define org_webrtc_EglBase10Impl_clazz_defined
inline jclass org_webrtc_EglBase10Impl_clazz(JNIEnv* env) {
  return jni_zero::LazyGetClass(env, kClassPath_org_webrtc_EglBase10Impl,
      &g_org_webrtc_EglBase10Impl_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace webrtc {
namespace jni {

static jlong JNI_EglBase10Impl_GetCurrentNativeEGLContext(JNIEnv* env);

JNI_BOUNDARY_EXPORT jlong Java_org_webrtc_EglBase10Impl_nativeGetCurrentNativeEGLContext(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_EglBase10Impl_GetCurrentNativeEGLContext(env);
}


}  // namespace jni
}  // namespace webrtc

#endif  // org_webrtc_EglBase10Impl_JNI
