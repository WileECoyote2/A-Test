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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityEngine.Vector3 Pathfinding.VectorMath::ClosestPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  VectorMath_ClosestPointOnLine_m143 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::ClosestPointOnLineFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float VectorMath_ClosestPointOnLineFactor_m144 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::ClosestPointOnLineFactor(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" float VectorMath_ClosestPointOnLineFactor_m145 (Object_t * __this /* static, unused */, Int3_t111  ___lineStart, Int3_t111  ___lineEnd, Int3_t111  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::ClosestPointOnLineFactor(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" float VectorMath_ClosestPointOnLineFactor_m146 (Object_t * __this /* static, unused */, Int2_t112  ___lineStart, Int2_t112  ___lineEnd, Int2_t112  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::ClosestPointOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  VectorMath_ClosestPointOnSegment_m147 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::ClosestPointOnSegmentXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  VectorMath_ClosestPointOnSegmentXZ_m148 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistancePointSegmentApproximate(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" float VectorMath_SqrDistancePointSegmentApproximate_m149 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___z, int32_t ___px, int32_t ___pz, int32_t ___qx, int32_t ___qz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistancePointSegmentApproximate(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" float VectorMath_SqrDistancePointSegmentApproximate_m150 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistancePointSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float VectorMath_SqrDistancePointSegment_m151 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistanceSegmentSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float VectorMath_SqrDistanceSegmentSegment_m152 (Object_t * __this /* static, unused */, Vector3_t7  ___s1, Vector3_t7  ___e1, Vector3_t7  ___s2, Vector3_t7  ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SqrDistanceXZ(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float VectorMath_SqrDistanceXZ_m153 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.VectorMath::SignedTriangleAreaTimes2XZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" int64_t VectorMath_SignedTriangleAreaTimes2XZ_m154 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::SignedTriangleAreaTimes2XZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float VectorMath_SignedTriangleAreaTimes2XZ_m155 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool VectorMath_RightXZ_m156 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_RightXZ_m157 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinear(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool VectorMath_RightOrColinear_m158 (Object_t * __this /* static, unused */, Vector2_t189  ___a, Vector2_t189  ___b, Vector2_t189  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinear(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool VectorMath_RightOrColinear_m159 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, Int2_t112  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinearXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool VectorMath_RightOrColinearXZ_m160 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RightOrColinearXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_RightOrColinearXZ_m161 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseMarginXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool VectorMath_IsClockwiseMarginXZ_m162 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool VectorMath_IsClockwiseXZ_m163 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_IsClockwiseXZ_m164 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseOrColinearXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_IsClockwiseOrColinearXZ_m165 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsClockwiseOrColinear(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool VectorMath_IsClockwiseOrColinear_m166 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, Int2_t112  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsColinearXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_IsColinearXZ_m167 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsColinearXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool VectorMath_IsColinearXZ_m168 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::IsColinearAlmostXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_IsColinearAlmostXZ_m169 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentsIntersect(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool VectorMath_SegmentsIntersect_m170 (Object_t * __this /* static, unused */, Int2_t112  ___start1, Int2_t112  ___end1, Int2_t112  ___start2, Int2_t112  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentsIntersectXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_SegmentsIntersectXZ_m171 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentsIntersectXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool VectorMath_SegmentsIntersectXZ_m172 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineDirIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  VectorMath_LineDirIntersectionPointXZ_m173 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___dir1, Vector3_t7  ___start2, Vector3_t7  ___dir2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineDirIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C" Vector3_t7  VectorMath_LineDirIntersectionPointXZ_m174 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___dir1, Vector3_t7  ___start2, Vector3_t7  ___dir2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::RaySegmentIntersectXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool VectorMath_RaySegmentIntersectXZ_m175 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::LineIntersectionFactorXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,System.Single&,System.Single&)
extern "C" bool VectorMath_LineIntersectionFactorXZ_m176 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, float* ___factor1, float* ___factor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::LineIntersectionFactorXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single&)
extern "C" bool VectorMath_LineIntersectionFactorXZ_m177 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, float* ___factor1, float* ___factor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::LineRayIntersectionFactorXZ(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" float VectorMath_LineRayIntersectionFactorXZ_m178 (Object_t * __this /* static, unused */, Int3_t111  ___start1, Int3_t111  ___end1, Int3_t111  ___start2, Int3_t111  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.VectorMath::LineIntersectionFactorXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float VectorMath_LineIntersectionFactorXZ_m179 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  VectorMath_LineIntersectionPointXZ_m180 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::LineIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C" Vector3_t7  VectorMath_LineIntersectionPointXZ_m181 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.VectorMath::LineIntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t189  VectorMath_LineIntersectionPoint_m182 (Object_t * __this /* static, unused */, Vector2_t189  ___start1, Vector2_t189  ___end1, Vector2_t189  ___start2, Vector2_t189  ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.VectorMath::LineIntersectionPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean&)
extern "C" Vector2_t189  VectorMath_LineIntersectionPoint_m183 (Object_t * __this /* static, unused */, Vector2_t189  ___start1, Vector2_t189  ___end1, Vector2_t189  ___start2, Vector2_t189  ___end2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.VectorMath::SegmentIntersectionPointXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean&)
extern "C" Vector3_t7  VectorMath_SegmentIntersectionPointXZ_m184 (Object_t * __this /* static, unused */, Vector3_t7  ___start1, Vector3_t7  ___end1, Vector3_t7  ___start2, Vector3_t7  ___end2, bool* ___intersects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::SegmentIntersectsBounds(UnityEngine.Bounds,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool VectorMath_SegmentIntersectsBounds_m185 (Object_t * __this /* static, unused */, Bounds_t171  ___bounds, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.VectorMath::ReversesFaceOrientations(UnityEngine.Matrix4x4)
extern "C" bool VectorMath_ReversesFaceOrientations_m186 (Object_t * __this /* static, unused */, Matrix4x4_t216  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
