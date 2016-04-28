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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t478;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<System.Single>::.cctor()
extern "C" void ListPool_1__cctor_m18856_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m18856(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m18856_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Single>::Claim()
extern "C" List_1_t478 * ListPool_1_Claim_m18857_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m18857(__this /* static, unused */, method) (( List_1_t478 * (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m18857_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Single>::Claim(System.Int32)
extern "C" List_1_t478 * ListPool_1_Claim_m2220_gshared (Object_t * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method);
#define ListPool_1_Claim_m2220(__this /* static, unused */, ___capacity, method) (( List_1_t478 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m2220_gshared)(__this /* static, unused */, ___capacity, method)
// System.Void Pathfinding.Util.ListPool`1<System.Single>::Warmup(System.Int32,System.Int32)
extern "C" void ListPool_1_Warmup_m18858_gshared (Object_t * __this /* static, unused */, int32_t ___count, int32_t ___size, const MethodInfo* method);
#define ListPool_1_Warmup_m18858(__this /* static, unused */, ___count, ___size, method) (( void (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m18858_gshared)(__this /* static, unused */, ___count, ___size, method)
// System.Void Pathfinding.Util.ListPool`1<System.Single>::Release(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_Release_m2222_gshared (Object_t * __this /* static, unused */, List_1_t478 * ___list, const MethodInfo* method);
#define ListPool_1_Release_m2222(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, List_1_t478 *, const MethodInfo*))ListPool_1_Release_m2222_gshared)(__this /* static, unused */, ___list, method)
// System.Void Pathfinding.Util.ListPool`1<System.Single>::Clear()
extern "C" void ListPool_1_Clear_m18859_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m18859(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m18859_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<System.Single>::GetSize()
extern "C" int32_t ListPool_1_GetSize_m18860_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m18860(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m18860_gshared)(__this /* static, unused */, method)
