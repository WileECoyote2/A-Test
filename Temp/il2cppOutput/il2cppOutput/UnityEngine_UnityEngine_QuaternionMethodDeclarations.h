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
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m2983 (Quaternion_t206 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t206  Quaternion_get_identity_m1905 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m2984 (Object_t * __this /* static, unused */, Quaternion_t206  ___a, Quaternion_t206  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t206  Quaternion_AngleAxis_m2295 (Object_t * __this /* static, unused */, float ___angle, Vector3_t7  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t206  Quaternion_INTERNAL_CALL_AngleAxis_m2985 (Object_t * __this /* static, unused */, float ___angle, Vector3_t7 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t206  Quaternion_LookRotation_m2073 (Object_t * __this /* static, unused */, Vector3_t7  ___forward, Vector3_t7  ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" Quaternion_t206  Quaternion_LookRotation_m1718 (Object_t * __this /* static, unused */, Vector3_t7  ___forward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t206  Quaternion_INTERNAL_CALL_LookRotation_m2986 (Object_t * __this /* static, unused */, Vector3_t7 * ___forward, Vector3_t7 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t206  Quaternion_Slerp_m1719 (Object_t * __this /* static, unused */, Quaternion_t206  ___from, Quaternion_t206  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t206  Quaternion_INTERNAL_CALL_Slerp_m2987 (Object_t * __this /* static, unused */, Quaternion_t206 * ___from, Quaternion_t206 * ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t206  Quaternion_Lerp_m2231 (Object_t * __this /* static, unused */, Quaternion_t206  ___from, Quaternion_t206  ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t206  Quaternion_INTERNAL_CALL_Lerp_m2988 (Object_t * __this /* static, unused */, Quaternion_t206 * ___from, Quaternion_t206 * ___to, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t206  Quaternion_Inverse_m2989 (Object_t * __this /* static, unused */, Quaternion_t206  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t206  Quaternion_INTERNAL_CALL_Inverse_m2990 (Object_t * __this /* static, unused */, Quaternion_t206 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m2991 (Quaternion_t206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Angle_m2084 (Object_t * __this /* static, unused */, Quaternion_t206  ___a, Quaternion_t206  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t7  Quaternion_get_eulerAngles_m1735 (Quaternion_t206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t206  Quaternion_Euler_m2059 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t206  Quaternion_Euler_m1736 (Object_t * __this /* static, unused */, Vector3_t7  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t7  Quaternion_Internal_ToEulerRad_m2992 (Object_t * __this /* static, unused */, Quaternion_t206  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t7  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m2993 (Object_t * __this /* static, unused */, Quaternion_t206 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t206  Quaternion_Internal_FromEulerRad_m2994 (Object_t * __this /* static, unused */, Vector3_t7  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t206  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2995 (Object_t * __this /* static, unused */, Vector3_t7 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m2996 (Quaternion_t206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m2997 (Quaternion_t206 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t206  Quaternion_op_Multiply_m2240 (Object_t * __this /* static, unused */, Quaternion_t206  ___lhs, Quaternion_t206  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t7  Quaternion_op_Multiply_m2296 (Object_t * __this /* static, unused */, Quaternion_t206  ___rotation, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m2998 (Object_t * __this /* static, unused */, Quaternion_t206  ___lhs, Quaternion_t206  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
