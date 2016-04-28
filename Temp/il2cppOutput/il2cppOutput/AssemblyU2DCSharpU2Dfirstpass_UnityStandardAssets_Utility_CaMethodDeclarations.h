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

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t336;
// UnityEngine.Camera
struct Camera_t100;
// UnityEngine.Transform
struct Transform_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void CameraRefocus__ctor_m1512 (CameraRefocus_t336 * __this, Camera_t100 * ___camera, Transform_t4 * ___parent, Vector3_t7  ___origCameraPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C" void CameraRefocus_ChangeCamera_m1513 (CameraRefocus_t336 * __this, Camera_t100 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C" void CameraRefocus_ChangeParent_m1514 (CameraRefocus_t336 * __this, Transform_t4 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C" void CameraRefocus_GetFocusPoint_m1515 (CameraRefocus_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C" void CameraRefocus_SetFocusPoint_m1516 (CameraRefocus_t336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
