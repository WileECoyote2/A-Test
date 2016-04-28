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
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m1775 (Vector3_t7 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" void Vector3__ctor_m1907 (Vector3_t7 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  Vector3_Lerp_m1708 (Object_t * __this /* static, unused */, Vector3_t7  ___from, Vector3_t7  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  Vector3_Slerp_m2230 (Object_t * __this /* static, unused */, Vector3_t7  ___from, Vector3_t7  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t7  Vector3_INTERNAL_CALL_Slerp_m2961 (Object_t * __this /* static, unused */, Vector3_t7 * ___from, Vector3_t7 * ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C" Vector3_t7  Vector3_SmoothDamp_m2241 (Object_t * __this /* static, unused */, Vector3_t7  ___current, Vector3_t7  ___target, Vector3_t7 * ___currentVelocity, float ___smoothTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
extern "C" Vector3_t7  Vector3_SmoothDamp_m2962 (Object_t * __this /* static, unused */, Vector3_t7  ___current, Vector3_t7  ___target, Vector3_t7 * ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C" float Vector3_get_Item_m2963 (Vector3_t7 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C" void Vector3_set_Item_m2964 (Vector3_t7 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
extern "C" void Vector3_Set_m2530 (Vector3_t7 * __this, float ___new_x, float ___new_y, float ___new_z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_Scale_m2301 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_Cross_m1778 (Object_t * __this /* static, unused */, Vector3_t7  ___lhs, Vector3_t7  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" int32_t Vector3_GetHashCode_m2965 (Vector3_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" bool Vector3_Equals_m2966 (Vector3_t7 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_Normalize_m1770 (Object_t * __this /* static, unused */, Vector3_t7  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C" void Vector3_Normalize_m2146 (Vector3_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" Vector3_t7  Vector3_get_normalized_m1705 (Vector3_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C" String_t* Vector3_ToString_m2189 (Vector3_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
extern "C" String_t* Vector3_ToString_m2967 (Vector3_t7 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Dot_m1710 (Object_t * __this /* static, unused */, Vector3_t7  ___lhs, Vector3_t7  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_Project_m2968 (Object_t * __this /* static, unused */, Vector3_t7  ___vector, Vector3_t7  ___onNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_ProjectOnPlane_m2269 (Object_t * __this /* static, unused */, Vector3_t7  ___vector, Vector3_t7  ___planeNormal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Angle_m2291 (Object_t * __this /* static, unused */, Vector3_t7  ___from, Vector3_t7  ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Vector3_Distance_m1955 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  Vector3_ClampMagnitude_m1723 (Object_t * __this /* static, unused */, Vector3_t7  ___vector, float ___maxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" float Vector3_Magnitude_m2969 (Object_t * __this /* static, unused */, Vector3_t7  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" float Vector3_get_magnitude_m1702 (Vector3_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m2970 (Object_t * __this /* static, unused */, Vector3_t7  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" float Vector3_get_sqrMagnitude_m1709 (Vector3_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_Min_m1868 (Object_t * __this /* static, unused */, Vector3_t7  ___lhs, Vector3_t7  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_Max_m1869 (Object_t * __this /* static, unused */, Vector3_t7  ___lhs, Vector3_t7  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t7  Vector3_get_zero_m1707 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" Vector3_t7  Vector3_get_one_m1805 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t7  Vector3_get_forward_m2255 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t7  Vector3_get_back_m2971 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" Vector3_t7  Vector3_get_up_m1727 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" Vector3_t7  Vector3_get_down_m2267 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" Vector3_t7  Vector3_get_left_m2972 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" Vector3_t7  Vector3_get_right_m1912 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_op_Addition_m1722 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_op_Subtraction_m1701 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_op_UnaryNegation_m2116 (Object_t * __this /* static, unused */, Vector3_t7  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  Vector3_op_Multiply_m1706 (Object_t * __this /* static, unused */, Vector3_t7  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" Vector3_t7  Vector3_op_Multiply_m1769 (Object_t * __this /* static, unused */, float ___d, Vector3_t7  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  Vector3_op_Division_m1726 (Object_t * __this /* static, unused */, Vector3_t7  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m1734 (Object_t * __this /* static, unused */, Vector3_t7  ___lhs, Vector3_t7  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Inequality_m1712 (Object_t * __this /* static, unused */, Vector3_t7  ___lhs, Vector3_t7  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
