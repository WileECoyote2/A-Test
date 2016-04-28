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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"
#include "UnityEngine_UnityEngine_Color.h"

// UnityEngine.Vector3 Pathfinding.AstarMath::NearestPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  AstarMath_NearestPoint_m187 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::NearestPointFactor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float AstarMath_NearestPointFactor_m188 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::NearestPointFactor(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" float AstarMath_NearestPointFactor_m189 (Object_t * __this /* static, unused */, Int3_t111  ___lineStart, Int3_t111  ___lineEnd, Int3_t111  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::NearestPointFactor(Pathfinding.Int2,Pathfinding.Int2,Pathfinding.Int2)
extern "C" float AstarMath_NearestPointFactor_m190 (Object_t * __this /* static, unused */, Int2_t112  ___lineStart, Int2_t112  ___lineEnd, Int2_t112  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.AstarMath::NearestPointStrict(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  AstarMath_NearestPointStrict_m191 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.AstarMath::NearestPointStrictXZ(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  AstarMath_NearestPointStrictXZ_m192 (Object_t * __this /* static, unused */, Vector3_t7  ___lineStart, Vector3_t7  ___lineEnd, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" float AstarMath_DistancePointSegment_m193 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___z, int32_t ___px, int32_t ___pz, int32_t ___qx, int32_t ___qz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment(Pathfinding.Int3,Pathfinding.Int3,Pathfinding.Int3)
extern "C" float AstarMath_DistancePointSegment_m194 (Object_t * __this /* static, unused */, Int3_t111  ___a, Int3_t111  ___b, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegmentStrict(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float AstarMath_DistancePointSegmentStrict_m195 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.AstarMath::CubicBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  AstarMath_CubicBezier_m196 (Object_t * __this /* static, unused */, Vector3_t7  ___p0, Vector3_t7  ___p1, Vector3_t7  ___p2, Vector3_t7  ___p3, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MapTo(System.Single,System.Single,System.Single)
extern "C" float AstarMath_MapTo_m197 (Object_t * __this /* static, unused */, float ___startMin, float ___startMax, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MapTo(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" float AstarMath_MapTo_m198 (Object_t * __this /* static, unused */, float ___startMin, float ___startMax, float ___targetMin, float ___targetMax, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.AstarMath::FormatBytesBinary(System.Int32)
extern "C" String_t* AstarMath_FormatBytesBinary_m199 (Object_t * __this /* static, unused */, int32_t ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Bit(System.Int32,System.Int32)
extern "C" int32_t AstarMath_Bit_m200 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Pathfinding.AstarMath::IntToColor(System.Int32,System.Single)
extern "C" Color_t117  AstarMath_IntToColor_m201 (Object_t * __this /* static, unused */, int32_t ___i, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::SqrMagnitudeXZ(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float AstarMath_SqrMagnitudeXZ_m202 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" float AstarMath_DistancePointSegment2_m203 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___z, int32_t ___px, int32_t ___pz, int32_t ___qx, int32_t ___qz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::DistancePointSegment2(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float AstarMath_DistancePointSegment2_m204 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::ComputeVertexHash(System.Int32,System.Int32,System.Int32)
extern "C" int32_t AstarMath_ComputeVertexHash_m205 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Hermite(System.Single,System.Single,System.Single)
extern "C" float AstarMath_Hermite_m206 (Object_t * __this /* static, unused */, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MapToRange(System.Single,System.Single,System.Single)
extern "C" float AstarMath_MapToRange_m207 (Object_t * __this /* static, unused */, float ___targetMin, float ___targetMax, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.AstarMath::FormatBytes(System.Int32)
extern "C" String_t* AstarMath_FormatBytes_m208 (Object_t * __this /* static, unused */, int32_t ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::MagnitudeXZ(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float AstarMath_MagnitudeXZ_m209 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Repeat(System.Int32,System.Int32)
extern "C" int32_t AstarMath_Repeat_m210 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Abs(System.Single)
extern "C" float AstarMath_Abs_m211 (Object_t * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Abs(System.Int32)
extern "C" int32_t AstarMath_Abs_m212 (Object_t * __this /* static, unused */, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Min(System.Single,System.Single)
extern "C" float AstarMath_Min_m213 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Min(System.Int32,System.Int32)
extern "C" int32_t AstarMath_Min_m214 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.AstarMath::Min(System.UInt32,System.UInt32)
extern "C" uint32_t AstarMath_Min_m215 (Object_t * __this /* static, unused */, uint32_t ___a, uint32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Max(System.Single,System.Single)
extern "C" float AstarMath_Max_m216 (Object_t * __this /* static, unused */, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Max(System.Int32,System.Int32)
extern "C" int32_t AstarMath_Max_m217 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.AstarMath::Max(System.UInt32,System.UInt32)
extern "C" uint32_t AstarMath_Max_m218 (Object_t * __this /* static, unused */, uint32_t ___a, uint32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.AstarMath::Max(System.UInt16,System.UInt16)
extern "C" uint16_t AstarMath_Max_m219 (Object_t * __this /* static, unused */, uint16_t ___a, uint16_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Sign(System.Single)
extern "C" float AstarMath_Sign_m220 (Object_t * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Sign(System.Int32)
extern "C" int32_t AstarMath_Sign_m221 (Object_t * __this /* static, unused */, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Clamp(System.Single,System.Single,System.Single)
extern "C" float AstarMath_Clamp_m222 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" int32_t AstarMath_Clamp_m223 (Object_t * __this /* static, unused */, int32_t ___a, int32_t ___b, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Clamp01(System.Single)
extern "C" float AstarMath_Clamp01_m224 (Object_t * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::Clamp01(System.Int32)
extern "C" int32_t AstarMath_Clamp01_m225 (Object_t * __this /* static, unused */, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.AstarMath::Lerp(System.Single,System.Single,System.Single)
extern "C" float AstarMath_Lerp_m226 (Object_t * __this /* static, unused */, float ___a, float ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::RoundToInt(System.Single)
extern "C" int32_t AstarMath_RoundToInt_m227 (Object_t * __this /* static, unused */, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarMath::RoundToInt(System.Double)
extern "C" int32_t AstarMath_RoundToInt_m228 (Object_t * __this /* static, unused */, double ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
