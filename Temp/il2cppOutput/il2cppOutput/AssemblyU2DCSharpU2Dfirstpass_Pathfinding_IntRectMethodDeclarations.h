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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_IntRect.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Pathfinding.IntRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void IntRect__ctor_m806 (IntRect_t174 * __this, int32_t ___xmin, int32_t ___ymin, int32_t ___xmax, int32_t ___ymax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.IntRect::.cctor()
extern "C" void IntRect__cctor_m807 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::Contains(System.Int32,System.Int32)
extern "C" bool IntRect_Contains_m808 (IntRect_t174 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.IntRect::get_Width()
extern "C" int32_t IntRect_get_Width_m809 (IntRect_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.IntRect::get_Height()
extern "C" int32_t IntRect_get_Height_m810 (IntRect_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::IsValid()
extern "C" bool IntRect_IsValid_m811 (IntRect_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::Equals(System.Object)
extern "C" bool IntRect_Equals_m812 (IntRect_t174 * __this, Object_t * ____b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.IntRect::GetHashCode()
extern "C" int32_t IntRect_GetHashCode_m813 (IntRect_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Intersection(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C" IntRect_t174  IntRect_Intersection_m814 (Object_t * __this /* static, unused */, IntRect_t174  ___a, IntRect_t174  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::Intersects(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C" bool IntRect_Intersects_m815 (Object_t * __this /* static, unused */, IntRect_t174  ___a, IntRect_t174  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Union(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C" IntRect_t174  IntRect_Union_m816 (Object_t * __this /* static, unused */, IntRect_t174  ___a, IntRect_t174  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::ExpandToContain(System.Int32,System.Int32)
extern "C" IntRect_t174  IntRect_ExpandToContain_m817 (IntRect_t174 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Expand(System.Int32)
extern "C" IntRect_t174  IntRect_Expand_m818 (IntRect_t174 * __this, int32_t ___range, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Rotate(System.Int32)
extern "C" IntRect_t174  IntRect_Rotate_m819 (IntRect_t174 * __this, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Offset(Pathfinding.Int2)
extern "C" IntRect_t174  IntRect_Offset_m820 (IntRect_t174 * __this, Int2_t112  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.IntRect Pathfinding.IntRect::Offset(System.Int32,System.Int32)
extern "C" IntRect_t174  IntRect_Offset_m821 (IntRect_t174 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.IntRect::ToString()
extern "C" String_t* IntRect_ToString_m822 (IntRect_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.IntRect::DebugDraw(UnityEngine.Matrix4x4,UnityEngine.Color)
extern "C" void IntRect_DebugDraw_m823 (IntRect_t174 * __this, Matrix4x4_t216  ___matrix, Color_t117  ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::op_Equality(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C" bool IntRect_op_Equality_m824 (Object_t * __this /* static, unused */, IntRect_t174  ___a, IntRect_t174  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.IntRect::op_Inequality(Pathfinding.IntRect,Pathfinding.IntRect)
extern "C" bool IntRect_op_Inequality_m825 (Object_t * __this /* static, unused */, IntRect_t174  ___a, IntRect_t174  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
