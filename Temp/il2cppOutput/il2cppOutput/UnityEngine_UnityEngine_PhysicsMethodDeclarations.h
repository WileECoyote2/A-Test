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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t278;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t481;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Ray.h"

// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C" Vector3_t7  Physics_get_gravity_m2270 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C" void Physics_INTERNAL_get_gravity_m3407 (Object_t * __this /* static, unused */, Vector3_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m3408 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, Vector3_t7  ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m3409 (Object_t * __this /* static, unused */, Vector3_t7 * ___origin, Vector3_t7 * ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_CapsuleCast_m3410 (Object_t * __this /* static, unused */, Vector3_t7  ___point1, Vector3_t7  ___point2, float ___radius, Vector3_t7  ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_CapsuleCast(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_CapsuleCast_m3411 (Object_t * __this /* static, unused */, Vector3_t7 * ___point1, Vector3_t7 * ___point2, float ___radius, Vector3_t7 * ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_Internal_RaycastTest_m3412 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, Vector3_t7  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_RaycastTest_m3413 (Object_t * __this /* static, unused */, Vector3_t7 * ___origin, Vector3_t7 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" bool Physics_Raycast_m2299 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, Vector3_t7  ___direction, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2115 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, Vector3_t7  ___direction, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m2325 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, Vector3_t7  ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2119 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, Vector3_t7  ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m2095 (Object_t * __this /* static, unused */, Ray_t277  ___ray, RaycastHit_t279 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" bool Physics_Raycast_m2391 (Object_t * __this /* static, unused */, Ray_t277  ___ray, RaycastHit_t279 * ___hitInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2107 (Object_t * __this /* static, unused */, Ray_t277  ___ray, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C" RaycastHitU5BU5D_t278* Physics_RaycastAll_m2252 (Object_t * __this /* static, unused */, Ray_t277  ___ray, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t278* Physics_RaycastAll_m3414 (Object_t * __this /* static, unused */, Ray_t277  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t278* Physics_RaycastAll_m3415 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, Vector3_t7  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t278* Physics_INTERNAL_CALL_RaycastAll_m3416 (Object_t * __this /* static, unused */, Vector3_t7 * ___origin, Vector3_t7 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C" bool Physics_Linecast_m2157 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___end, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C" bool Physics_Linecast_m2183 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___end, RaycastHit_t279 * ___hitInfo, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C" ColliderU5BU5D_t481* Physics_OverlapSphere_m2249 (Object_t * __this /* static, unused */, Vector3_t7  ___position, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" ColliderU5BU5D_t481* Physics_INTERNAL_CALL_OverlapSphere_m3417 (Object_t * __this /* static, unused */, Vector3_t7 * ___position, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_SphereCast_m2268 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, float ___radius, Vector3_t7  ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_SphereCast_m2182 (Object_t * __this /* static, unused */, Vector3_t7  ___origin, float ___radius, Vector3_t7  ___direction, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single)
extern "C" bool Physics_SphereCast_m2314 (Object_t * __this /* static, unused */, Ray_t277  ___ray, float ___radius, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" bool Physics_SphereCast_m2156 (Object_t * __this /* static, unused */, Ray_t277  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_SphereCast_m2118 (Object_t * __this /* static, unused */, Ray_t277  ___ray, float ___radius, RaycastHit_t279 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t278* Physics_CapsuleCastAll_m3418 (Object_t * __this /* static, unused */, Vector3_t7  ___point1, Vector3_t7  ___point2, float ___radius, Vector3_t7  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t278* Physics_INTERNAL_CALL_CapsuleCastAll_m3419 (Object_t * __this /* static, unused */, Vector3_t7 * ___point1, Vector3_t7 * ___point2, float ___radius, Vector3_t7 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single)
extern "C" RaycastHitU5BU5D_t278* Physics_SphereCastAll_m2253 (Object_t * __this /* static, unused */, Ray_t277  ___ray, float ___radius, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t278* Physics_SphereCastAll_m3420 (Object_t * __this /* static, unused */, Ray_t277  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_CheckSphere_m2114 (Object_t * __this /* static, unused */, Vector3_t7  ___position, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckSphere(UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_CheckSphere_m3421 (Object_t * __this /* static, unused */, Vector3_t7 * ___position, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::CheckCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" bool Physics_CheckCapsule_m2113 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___end, float ___radius, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_CheckCapsule(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_CheckCapsule_m3422 (Object_t * __this /* static, unused */, Vector3_t7 * ___start, Vector3_t7 * ___end, float ___radius, int32_t ___layermask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
