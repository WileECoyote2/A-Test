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

// UnityEngine.Rigidbody
struct Rigidbody_t12;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RigidbodyConstraints.h"
#include "UnityEngine_UnityEngine_ForceMode.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" Vector3_t7  Rigidbody_get_velocity_m2226 (Rigidbody_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_velocity_m2289 (Rigidbody_t12 * __this, Vector3_t7  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_velocity_m3423 (Rigidbody_t12 * __this, Vector3_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m3424 (Rigidbody_t12 * __this, Vector3_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" void Rigidbody_set_angularVelocity_m2403 (Rigidbody_t12 * __this, Vector3_t7  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m3425 (Rigidbody_t12 * __this, Vector3_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" float Rigidbody_get_drag_m2374 (Rigidbody_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" void Rigidbody_set_drag_m2288 (Rigidbody_t12 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" float Rigidbody_get_angularDrag_m2375 (Rigidbody_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" void Rigidbody_set_angularDrag_m2376 (Rigidbody_t12 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" bool Rigidbody_get_isKinematic_m2280 (Rigidbody_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m2384 (Rigidbody_t12 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C" void Rigidbody_set_constraints_m2310 (Rigidbody_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForce_m2287 (Rigidbody_t12 * __this, Vector3_t7  ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m1730 (Rigidbody_t12 * __this, Vector3_t7  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m3426 (Object_t * __this /* static, unused */, Rigidbody_t12 * ___self, Vector3_t7 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C" void Rigidbody_AddTorque_m2298 (Rigidbody_t12 * __this, Vector3_t7  ___torque, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddTorque_m3427 (Object_t * __this /* static, unused */, Rigidbody_t12 * ___self, Vector3_t7 * ___torque, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" void Rigidbody_AddForceAtPosition_m2282 (Rigidbody_t12 * __this, Vector3_t7  ___force, Vector3_t7  ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m3428 (Object_t * __this /* static, unused */, Rigidbody_t12 * ___self, Vector3_t7 * ___force, Vector3_t7 * ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" Vector3_t7  Rigidbody_get_position_m2313 (Rigidbody_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_position_m3429 (Rigidbody_t12 * __this, Vector3_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" void Rigidbody_MovePosition_m2531 (Rigidbody_t12 * __this, Vector3_t7  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_CALL_MovePosition_m3430 (Object_t * __this /* static, unused */, Rigidbody_t12 * ___self, Vector3_t7 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" void Rigidbody_MoveRotation_m2532 (Rigidbody_t12 * __this, Quaternion_t206  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_CALL_MoveRotation_m3431 (Object_t * __this /* static, unused */, Rigidbody_t12 * ___self, Quaternion_t206 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C" void Rigidbody_Sleep_m2290 (Rigidbody_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C" void Rigidbody_INTERNAL_CALL_Sleep_m3432 (Object_t * __this /* static, unused */, Rigidbody_t12 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C" void Rigidbody_set_maxAngularVelocity_m2297 (Rigidbody_t12 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
