#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t282;
// UnityEngine.Transform
struct Transform_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern "C" void MouseLook__ctor_m1320 (MouseLook_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_Init_m1321 (MouseLook_t282 * __this, Transform_t4 * ___character, Transform_t4 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C" void MouseLook_LookRotation_m1322 (MouseLook_t282 * __this, Transform_t4 * ___character, Transform_t4 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C" Quaternion_t206  MouseLook_ClampRotationAroundXAxis_m1323 (MouseLook_t282 * __this, Quaternion_t206  ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
