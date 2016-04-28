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

// UnityEngine.Object
struct Object_t328;
struct Object_t328_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t419;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t328 * Resources_Load_m3133 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Resources::LoadAll(System.String,System.Type)
extern "C" ObjectU5BU5D_t419* Resources_LoadAll_m1969 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
