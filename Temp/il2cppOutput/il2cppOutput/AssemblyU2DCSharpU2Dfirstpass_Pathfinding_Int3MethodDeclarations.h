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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.Int3::.ctor(UnityEngine.Vector3)
extern "C" void Int3__ctor_m445 (Int3_t111 * __this, Vector3_t7  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int3::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void Int3__ctor_m446 (Int3_t111 * __this, int32_t ____x, int32_t ____y, int32_t ____z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int3::.cctor()
extern "C" void Int3__cctor_m447 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::get_zero()
extern "C" Int3_t111  Int3_get_zero_m448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::get_Item(System.Int32)
extern "C" int32_t Int3_get_Item_m449 (Int3_t111 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Int3::set_Item(System.Int32,System.Int32)
extern "C" void Int3_set_Item_m450 (Int3_t111 * __this, int32_t ___i, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::Angle(Pathfinding.Int3,Pathfinding.Int3)
extern "C" float Int3_Angle_m451 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Int3_t111  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::Dot(Pathfinding.Int3,Pathfinding.Int3)
extern "C" int32_t Int3_Dot_m452 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Int3_t111  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int3::DotLong(Pathfinding.Int3,Pathfinding.Int3)
extern "C" int64_t Int3_DotLong_m453 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Int3_t111  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::Normal2D()
extern "C" Int3_t111  Int3_Normal2D_m454 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::get_magnitude()
extern "C" float Int3_get_magnitude_m455 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::get_costMagnitude()
extern "C" int32_t Int3_get_costMagnitude_m456 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::get_worldMagnitude()
extern "C" float Int3_get_worldMagnitude_m457 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Int3::get_sqrMagnitude()
extern "C" float Int3_get_sqrMagnitude_m458 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Int3::get_sqrMagnitudeLong()
extern "C" int64_t Int3_get_sqrMagnitudeLong_m459 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Int3::ToString()
extern "C" String_t* Int3_ToString_m460 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int3::Equals(System.Object)
extern "C" bool Int3_Equals_m461 (Int3_t111 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Int3::GetHashCode()
extern "C" int32_t Int3_GetHashCode_m462 (Int3_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int3::op_Equality(Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Int3_op_Equality_m463 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Int3_t111  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Int3::op_Inequality(Pathfinding.Int3,Pathfinding.Int3)
extern "C" bool Int3_op_Inequality_m464 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Int3_t111  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Explicit(UnityEngine.Vector3)
extern "C" Int3_t111  Int3_op_Explicit_m465 (Object_t * __this /* static, unused */, Vector3_t7  ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.Int3::op_Explicit(Pathfinding.Int3)
extern "C" Vector3_t7  Int3_op_Explicit_m466 (Object_t * __this /* static, unused */, Int3_t111  ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Subtraction(Pathfinding.Int3,Pathfinding.Int3)
extern "C" Int3_t111  Int3_op_Subtraction_m467 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Int3_t111  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_UnaryNegation(Pathfinding.Int3)
extern "C" Int3_t111  Int3_op_UnaryNegation_m468 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Addition(Pathfinding.Int3,Pathfinding.Int3)
extern "C" Int3_t111  Int3_op_Addition_m469 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Int3_t111  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,System.Int32)
extern "C" Int3_t111  Int3_op_Multiply_m470 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, int32_t ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,System.Single)
extern "C" Int3_t111  Int3_op_Multiply_m471 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, float ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,System.Double)
extern "C" Int3_t111  Int3_op_Multiply_m472 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, double ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Multiply(Pathfinding.Int3,UnityEngine.Vector3)
extern "C" Int3_t111  Int3_op_Multiply_m473 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, Vector3_t7  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Int3::op_Division(Pathfinding.Int3,System.Single)
extern "C" Int3_t111  Int3_op_Division_m474 (Object_t * __this /* static, unused */, Int3_t111  ___lhs, float ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Int3::op_Implicit(Pathfinding.Int3)
extern "C" String_t* Int3_op_Implicit_m475 (Object_t * __this /* static, unused */, Int3_t111  ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
