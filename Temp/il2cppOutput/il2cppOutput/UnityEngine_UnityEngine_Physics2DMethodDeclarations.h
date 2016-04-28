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

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t822;
// UnityEngine.Collider2D
struct Collider2D_t460;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m3440 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Linecast_m3441 (Object_t * __this /* static, unused */, Vector2_t189  ___start, Vector2_t189  ___end, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t467 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Linecast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Linecast_m3442 (Object_t * __this /* static, unused */, Vector2_t189 * ___start, Vector2_t189 * ___end, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t467 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C" RaycastHit2D_t467  Physics2D_Linecast_m2155 (Object_t * __this /* static, unused */, Vector2_t189  ___start, Vector2_t189  ___end, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t467  Physics2D_Linecast_m3443 (Object_t * __this /* static, unused */, Vector2_t189  ___start, Vector2_t189  ___end, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m3444 (Object_t * __this /* static, unused */, Vector2_t189  ___origin, Vector2_t189  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t467 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3445 (Object_t * __this /* static, unused */, Vector2_t189 * ___origin, Vector2_t189 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t467 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t467  Physics2D_Raycast_m3446 (Object_t * __this /* static, unused */, Vector2_t189  ___origin, Vector2_t189  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t467  Physics2D_Raycast_m3447 (Object_t * __this /* static, unused */, Vector2_t189  ___origin, Vector2_t189  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t822* Physics2D_RaycastAll_m3448 (Object_t * __this /* static, unused */, Vector2_t189  ___origin, Vector2_t189  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t822* Physics2D_INTERNAL_CALL_RaycastAll_m3449 (Object_t * __this /* static, unused */, Vector2_t189 * ___origin, Vector2_t189 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_CircleCast_m3450 (Object_t * __this /* static, unused */, Vector2_t189  ___origin, float ___radius, Vector2_t189  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t467 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_CircleCast(UnityEngine.Vector2&,System.Single,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_CircleCast_m3451 (Object_t * __this /* static, unused */, Vector2_t189 * ___origin, float ___radius, Vector2_t189 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t467 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t467  Physics2D_CircleCast_m2153 (Object_t * __this /* static, unused */, Vector2_t189  ___origin, float ___radius, Vector2_t189  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t467  Physics2D_CircleCast_m3452 (Object_t * __this /* static, unused */, Vector2_t189  ___origin, float ___radius, Vector2_t189  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2,System.Int32)
extern "C" Collider2D_t460 * Physics2D_OverlapPoint_m2112 (Object_t * __this /* static, unused */, Vector2_t189  ___point, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapPoint(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C" Collider2D_t460 * Physics2D_INTERNAL_CALL_OverlapPoint_m3453 (Object_t * __this /* static, unused */, Vector2_t189 * ___point, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" Collider2D_t460 * Physics2D_OverlapCircle_m2111 (Object_t * __this /* static, unused */, Vector2_t189  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircle(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2D_t460 * Physics2D_INTERNAL_CALL_OverlapCircle_m3454 (Object_t * __this /* static, unused */, Vector2_t189 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
