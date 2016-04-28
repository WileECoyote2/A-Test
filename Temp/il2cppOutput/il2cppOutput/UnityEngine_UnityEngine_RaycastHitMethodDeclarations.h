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

// UnityEngine.Collider
struct Collider_t205;
// UnityEngine.Rigidbody
struct Rigidbody_t12;
// UnityEngine.Transform
struct Transform_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t7  RaycastHit_get_point_m2096 (RaycastHit_t279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
extern "C" void RaycastHit_set_point_m2120 (RaycastHit_t279 * __this, Vector3_t7  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t7  RaycastHit_get_normal_m2129 (RaycastHit_t279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m2244 (RaycastHit_t279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RaycastHit::set_distance(System.Single)
extern "C" void RaycastHit_set_distance_m2121 (RaycastHit_t279 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t205 * RaycastHit_get_collider_m2098 (RaycastHit_t279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t12 * RaycastHit_get_rigidbody_m2381 (RaycastHit_t279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t4 * RaycastHit_get_transform_m2100 (RaycastHit_t279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
