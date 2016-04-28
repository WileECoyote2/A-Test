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
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"

// System.Void Pathfinding.Int2::.ctor(System.Int32,System.Int32)
extern "C" void Int2__ctor_m476 (Int2_t112 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int2::.cctor()
extern "C" void Int2__cctor_m477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int2::get_sqrMagnitudeLong()
extern "C" int64_t Int2_get_sqrMagnitudeLong_m478 (Int2_t112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int2::DotLong(Pathfinding.Int2,Pathfinding.Int2)
extern "C" int64_t Int2_DotLong_m479 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int2::Equals(System.Object)
extern "C" bool Int2_Equals_m480 (Int2_t112 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int2::GetHashCode()
extern "C" int32_t Int2_GetHashCode_m481 (Int2_t112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::Rotate(Pathfinding.Int2,System.Int32)
extern "C" Int2_t112  Int2_Rotate_m482 (Object_t * __this /* static, unused */, Int2_t112  ___v, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::Min(Pathfinding.Int2,Pathfinding.Int2)
extern "C" Int2_t112  Int2_Min_m483 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::Max(Pathfinding.Int2,Pathfinding.Int2)
extern "C" Int2_t112  Int2_Max_m484 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::FromInt3XZ(Pathfinding.Int3)
extern "C" Int2_t112  Int2_FromInt3XZ_m485 (Object_t * __this /* static, unused */, Int3_t111  ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int2::ToInt3XZ(Pathfinding.Int2)
extern "C" Int3_t111  Int2_ToInt3XZ_m486 (Object_t * __this /* static, unused */, Int2_t112  ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Int2::ToString()
extern "C" String_t* Int2_ToString_m487 (Int2_t112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::op_Addition(Pathfinding.Int2,Pathfinding.Int2)
extern "C" Int2_t112  Int2_op_Addition_m488 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int2 Pathfinding.Int2::op_Subtraction(Pathfinding.Int2,Pathfinding.Int2)
extern "C" Int2_t112  Int2_op_Subtraction_m489 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int2::op_Equality(Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool Int2_op_Equality_m490 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int2::op_Inequality(Pathfinding.Int2,Pathfinding.Int2)
extern "C" bool Int2_op_Inequality_m491 (Object_t * __this /* static, unused */, Int2_t112  ___a, Int2_t112  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
