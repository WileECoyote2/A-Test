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

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t172;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::.cctor()
extern "C" void ListPool_1__cctor_m17079_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m17079(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m17079_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.UInt32>::Claim()
extern "C" List_1_t172 * ListPool_1_Claim_m2041_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m2041(__this /* static, unused */, method) (( List_1_t172 * (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m2041_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.UInt32>::Claim(System.Int32)
extern "C" List_1_t172 * ListPool_1_Claim_m17080_gshared (Object_t * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method);
#define ListPool_1_Claim_m17080(__this /* static, unused */, ___capacity, method) (( List_1_t172 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m17080_gshared)(__this /* static, unused */, ___capacity, method)
// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::Warmup(System.Int32,System.Int32)
extern "C" void ListPool_1_Warmup_m17081_gshared (Object_t * __this /* static, unused */, int32_t ___count, int32_t ___size, const MethodInfo* method);
#define ListPool_1_Warmup_m17081(__this /* static, unused */, ___count, ___size, method) (( void (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m17081_gshared)(__this /* static, unused */, ___count, ___size, method)
// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::Release(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_Release_m2043_gshared (Object_t * __this /* static, unused */, List_1_t172 * ___list, const MethodInfo* method);
#define ListPool_1_Release_m2043(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, List_1_t172 *, const MethodInfo*))ListPool_1_Release_m2043_gshared)(__this /* static, unused */, ___list, method)
// System.Void Pathfinding.Util.ListPool`1<System.UInt32>::Clear()
extern "C" void ListPool_1_Clear_m17082_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m17082(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m17082_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<System.UInt32>::GetSize()
extern "C" int32_t ListPool_1_GetSize_m17083_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m17083(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m17083_gshared)(__this /* static, unused */, method)
