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

// UnityEngine.Collider
struct Collider_t205;
// UnityEngine.Rigidbody
struct Rigidbody_t12;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Boolean UnityEngine.Collider::get_enabled()
extern "C" bool Collider_get_enabled_m2078 (Collider_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t12 * Collider_get_attachedRigidbody_m2250 (Collider_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern "C" bool Collider_get_isTrigger_m2099 (Collider_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C" void Collider_set_isTrigger_m2520 (Collider_t205 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" Bounds_t171  Collider_get_bounds_m1864 (Collider_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Collider_INTERNAL_get_bounds_m3434 (Collider_t205 * __this, Bounds_t171 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
