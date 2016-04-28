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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t133;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ListPool`1<System.Object>::.cctor()
extern "C" void ListPool_1__cctor_m15174_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1__cctor_m15174(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1__cctor_m15174_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Object>::Claim()
extern "C" List_1_t133 * ListPool_1_Claim_m15175_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Claim_m15175(__this /* static, unused */, method) (( List_1_t133 * (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Claim_m15175_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.List`1<T> Pathfinding.Util.ListPool`1<System.Object>::Claim(System.Int32)
extern "C" List_1_t133 * ListPool_1_Claim_m15177_gshared (Object_t * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method);
#define ListPool_1_Claim_m15177(__this /* static, unused */, ___capacity, method) (( List_1_t133 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))ListPool_1_Claim_m15177_gshared)(__this /* static, unused */, ___capacity, method)
// System.Void Pathfinding.Util.ListPool`1<System.Object>::Warmup(System.Int32,System.Int32)
extern "C" void ListPool_1_Warmup_m15179_gshared (Object_t * __this /* static, unused */, int32_t ___count, int32_t ___size, const MethodInfo* method);
#define ListPool_1_Warmup_m15179(__this /* static, unused */, ___count, ___size, method) (( void (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))ListPool_1_Warmup_m15179_gshared)(__this /* static, unused */, ___count, ___size, method)
// System.Void Pathfinding.Util.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
extern "C" void ListPool_1_Release_m15180_gshared (Object_t * __this /* static, unused */, List_1_t133 * ___list, const MethodInfo* method);
#define ListPool_1_Release_m15180(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, List_1_t133 *, const MethodInfo*))ListPool_1_Release_m15180_gshared)(__this /* static, unused */, ___list, method)
// System.Void Pathfinding.Util.ListPool`1<System.Object>::Clear()
extern "C" void ListPool_1_Clear_m15182_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_Clear_m15182(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_Clear_m15182_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ListPool`1<System.Object>::GetSize()
extern "C" int32_t ListPool_1_GetSize_m15183_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ListPool_1_GetSize_m15183(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))ListPool_1_GetSize_m15183_gshared)(__this /* static, unused */, method)
