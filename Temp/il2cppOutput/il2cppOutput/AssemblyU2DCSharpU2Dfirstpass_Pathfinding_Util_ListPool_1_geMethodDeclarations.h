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

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C" void ListPool_1__cctor_m14873_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m14873(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m14873_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Claim()
extern "C" List_1_t18 * ListPool_1_Claim_m1782_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m1782(__this /* static, unused */, method) (( List_1_t18 * (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m1782_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Claim(System.Int32)
extern "C" List_1_t18 * ListPool_1_Claim_m2177_gshared (Object_t * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method);
#define ListPool_1_Claim_m2177(__this /* static, unused */, ___capacity, method) (( List_1_t18 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m2177_gshared)(__this /* static, unused */, ___capacity, method)
// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Warmup(System.Int32,System.Int32)
extern "C" void ListPool_1_Warmup_m14874_gshared (Object_t * __this /* static, unused */, int32_t ___count, int32_t ___size, const MethodInfo* method);
#define ListPool_1_Warmup_m14874(__this /* static, unused */, ___count, ___size, method) (( void (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m14874_gshared)(__this /* static, unused */, ___count, ___size, method)
// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_Release_m1784_gshared (Object_t * __this /* static, unused */, List_1_t18 * ___list, const MethodInfo* method);
#define ListPool_1_Release_m1784(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, List_1_t18 *, const MethodInfo*))ListPool_1_Release_m1784_gshared)(__this /* static, unused */, ___list, method)
// System.Void Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::Clear()
extern "C" void ListPool_1_Clear_m14875_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m14875(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m14875_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::GetSize()
extern "C" int32_t ListPool_1_GetSize_m1925_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m1925(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m1925_gshared)(__this /* static, unused */, method)
