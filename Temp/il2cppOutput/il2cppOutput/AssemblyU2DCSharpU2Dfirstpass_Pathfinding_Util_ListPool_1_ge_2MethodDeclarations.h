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

// System.Collections.Generic.List`1<Pathfinding.Int3>
struct List_1_t173;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::.cctor()
extern "C" void ListPool_1__cctor_m17201_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m17201(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m17201_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Claim()
extern "C" List_1_t173 * ListPool_1_Claim_m2042_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m2042(__this /* static, unused */, method) (( List_1_t173 * (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m2042_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Claim(System.Int32)
extern "C" List_1_t173 * ListPool_1_Claim_m17202_gshared (Object_t * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method);
#define ListPool_1_Claim_m17202(__this /* static, unused */, ___capacity, method) (( List_1_t173 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m17202_gshared)(__this /* static, unused */, ___capacity, method)
// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Warmup(System.Int32,System.Int32)
extern "C" void ListPool_1_Warmup_m17203_gshared (Object_t * __this /* static, unused */, int32_t ___count, int32_t ___size, const MethodInfo* method);
#define ListPool_1_Warmup_m17203(__this /* static, unused */, ___count, ___size, method) (( void (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m17203_gshared)(__this /* static, unused */, ___count, ___size, method)
// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Release(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_Release_m2044_gshared (Object_t * __this /* static, unused */, List_1_t173 * ___list, const MethodInfo* method);
#define ListPool_1_Release_m2044(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, List_1_t173 *, const MethodInfo*))ListPool_1_Release_m2044_gshared)(__this /* static, unused */, ___list, method)
// System.Void Pathfinding.Util.ListPool`1<Pathfinding.Int3>::Clear()
extern "C" void ListPool_1_Clear_m17204_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m17204(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m17204_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<Pathfinding.Int3>::GetSize()
extern "C" int32_t ListPool_1_GetSize_m17205_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m17205(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m17205_gshared)(__this /* static, unused */, method)
