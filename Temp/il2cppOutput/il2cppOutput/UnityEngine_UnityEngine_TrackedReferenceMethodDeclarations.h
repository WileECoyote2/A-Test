﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.TrackedReference
struct TrackedReference_t659;
struct TrackedReference_t659_marshaled;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m4032 (TrackedReference_t659 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m4033 (TrackedReference_t659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m4034 (Object_t * __this /* static, unused */, TrackedReference_t659 * ___x, TrackedReference_t659 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TrackedReference_t659_marshal(const TrackedReference_t659& unmarshaled, TrackedReference_t659_marshaled& marshaled);
extern "C" void TrackedReference_t659_marshal_back(const TrackedReference_t659_marshaled& marshaled, TrackedReference_t659& unmarshaled);
extern "C" void TrackedReference_t659_marshal_cleanup(TrackedReference_t659_marshaled& marshaled);
