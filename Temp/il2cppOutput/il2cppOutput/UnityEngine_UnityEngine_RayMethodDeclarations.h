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
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Ray__ctor_m2117 (Ray_t277 * __this, Vector3_t7  ___origin, Vector3_t7  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" Vector3_t7  Ray_get_origin_m1857 (Ray_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::set_origin(UnityEngine.Vector3)
extern "C" void Ray_set_origin_m2247 (Ray_t277 * __this, Vector3_t7  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" Vector3_t7  Ray_get_direction_m1856 (Ray_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
extern "C" void Ray_set_direction_m2248 (Ray_t277 * __this, Vector3_t7  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C" Vector3_t7  Ray_GetPoint_m2377 (Ray_t277 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C" String_t* Ray_ToString_m3074 (Ray_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
