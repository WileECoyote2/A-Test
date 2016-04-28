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

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t237;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Int64 Pathfinding.Polygon::TriangleArea2(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" int64_t Polygon_TriangleArea2_m229 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::TriangleArea2(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Polygon_TriangleArea2_m230 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Polygon::TriangleArea(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" int64_t Polygon_TriangleArea_m231 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::TriangleArea(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Polygon_TriangleArea_m232 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_ContainsPoint_m233 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_ContainsPointXZ_m234 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_ContainsPoint_m235 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPointXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_ContainsPointXZ_m236 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool Polygon_ContainsPoint_m237 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, Int2_t112  ___c, Int2_t112  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C" bool Polygon_ContainsPoint_m238 (Object_t * __this /* static, unused */, Vector3U5BU5D_t82* ___polyPoints, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPoint(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C" bool Polygon_ContainsPoint_m239 (Object_t * __this /* static, unused */, Vector2U5BU5D_t237* ___polyPoints, Vector2_t189  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::ContainsPointXZ(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C" bool Polygon_ContainsPointXZ_m240 (Object_t * __this /* static, unused */, Vector3U5BU5D_t82* ___polyPoints, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::LeftNotColinear(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_LeftNotColinear_m241 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_Left_m242 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Polygon_Left_m243 (Object_t * __this /* static, unused */, Vector2_t189  ___a, Vector2_t189  ___b, Vector2_t189  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_Left_m244 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::LeftNotColinear(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_LeftNotColinear_m245 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Left(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool Polygon_Left_m246 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, Int2_t112  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwiseMargin(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_IsClockwiseMargin_m247 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwise(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_IsClockwise_m248 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwise(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_IsClockwise_m249 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwiseMargin(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_IsClockwiseMargin_m250 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsClockwiseMargin(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool Polygon_IsClockwiseMargin_m251 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, Int2_t112  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsColinear(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_IsColinear_m252 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsColinearAlmost(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_IsColinearAlmost_m253 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IsColinear(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_IsColinear_m254 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectsUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_IntersectsUnclamped_m255 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___a2, Vector3_t7  ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Intersects(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool Polygon_Intersects_m256 (Object_t * __this /* static, unused */, Int2_t112  ___start1, Int2_t112  ___end1, Int2_t112  ___start2, Int2_t112  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Intersects(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_Intersects_m257 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::Intersects(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_Intersects_m258 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPointOptimized(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Polygon_IntersectionPointOptimized_m259 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___dir1, Vector3_t7  ___start2, Vector3_t7  ___dir2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPointOptimized(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C" Vector3_t7  Polygon_IntersectionPointOptimized_m260 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___dir1, Vector3_t7  ___start2, Vector3_t7  ___dir2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectionFactorRaySegment(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Polygon_IntersectionFactorRaySegment_m261 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectionFactor(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,System.Single&,System.Single&)
extern "C" bool Polygon_IntersectionFactor_m262 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, float* ___factor1, float* ___factor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::IntersectionFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single&)
extern "C" bool Polygon_IntersectionFactor_m263 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, float* ___factor1, float* ___factor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::IntersectionFactorRay(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" float Polygon_IntersectionFactorRay_m264 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::IntersectionFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Polygon_IntersectionFactor_m265 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Polygon_IntersectionPoint_m266 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C" Vector3_t7  Polygon_IntersectionPoint_m267 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t189  Polygon_IntersectionPoint_m268 (Object_t * __this /* static, unused */, Vector2_t189  ___start1, Vector2_t189  ___end1, Vector2_t189  ___start2, Vector2_t189  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.Polygon::IntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean&)
extern "C" Vector2_t189  Polygon_IntersectionPoint_m269 (Object_t * __this /* static, unused */, Vector2_t189  ___start1, Vector2_t189  ___end1, Vector2_t189  ___start2, Vector2_t189  ___end2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::SegmentIntersectionPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C" Vector3_t7  Polygon_SegmentIntersectionPoint_m270 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.Polygon::ConvexHull(UnityEngine.Vector3[])
extern "C" Vector3U5BU5D_t82* Polygon_ConvexHull_m271 (Object_t * __this /* static, unused */, Vector3U5BU5D_t82* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.Polygon::ConvexHullXZ(UnityEngine.Vector3[])
extern "C" Vector3U5BU5D_t82* Polygon_ConvexHullXZ_m272 (Object_t * __this /* static, unused */, Vector3U5BU5D_t82* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Polygon::LineIntersectsBounds(UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Polygon_LineIntersectsBounds_m273 (Object_t * __this /* static, unused */, Bounds_t171  ___bounds, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.Polygon::Subdivide(UnityEngine.Vector3[],System.Int32)
extern "C" Vector3U5BU5D_t82* Polygon_Subdivide_m274 (Object_t * __this /* static, unused */, Vector3U5BU5D_t82* ___path, int32_t ___subdivisions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::ClosestPointOnTriangle(UnityEngine.Vector3[],UnityEngine.Vector3)
extern "C" Vector3_t7  Polygon_ClosestPointOnTriangle_m275 (Object_t * __this /* static, unused */, Vector3U5BU5D_t82* ___triangle, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Polygon::ClosestPointOnTriangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Polygon_ClosestPointOnTriangle_m276 (Object_t * __this /* static, unused */, Vector3_t7  ___tr0, Vector3_t7  ___tr1, Vector3_t7  ___tr2, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Polygon::DistanceSegmentSegment3D(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Polygon_DistanceSegmentSegment3D_m277 (Object_t * __this /* static, unused */, Vector3_t7  ___s1, Vector3_t7  ___e1, Vector3_t7  ___s2, Vector3_t7  ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
