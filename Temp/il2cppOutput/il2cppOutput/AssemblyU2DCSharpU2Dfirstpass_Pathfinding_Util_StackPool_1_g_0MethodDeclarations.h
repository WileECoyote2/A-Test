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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2486;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.StackPool`1<System.Object>::.cctor()
extern "C" void StackPool_1__cctor_m16133_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define StackPool_1__cctor_m16133(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))StackPool_1__cctor_m16133_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.Stack`1<T> Pathfinding.Util.StackPool`1<System.Object>::Claim()
extern "C" Stack_1_t2486 * StackPool_1_Claim_m16134_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define StackPool_1_Claim_m16134(__this /* static, unused */, method) (( Stack_1_t2486 * (*) (Object_t * /* static, unused */, const MethodInfo*))StackPool_1_Claim_m16134_gshared)(__this /* static, unused */, method)
// System.Void Pathfinding.Util.StackPool`1<System.Object>::Warmup(System.Int32)
extern "C" void StackPool_1_Warmup_m16135_gshared (Object_t * __this /* static, unused */, int32_t ___count, const MethodInfo* method);
#define StackPool_1_Warmup_m16135(__this /* static, unused */, ___count, method) (( void (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))StackPool_1_Warmup_m16135_gshared)(__this /* static, unused */, ___count, method)
// System.Void Pathfinding.Util.StackPool`1<System.Object>::Release(System.Collections.Generic.Stack`1<T>)
extern "C" void StackPool_1_Release_m16136_gshared (Object_t * __this /* static, unused */, Stack_1_t2486 * ___stack, const MethodInfo* method);
#define StackPool_1_Release_m16136(__this /* static, unused */, ___stack, method) (( void (*) (Object_t * /* static, unused */, Stack_1_t2486 *, const MethodInfo*))StackPool_1_Release_m16136_gshared)(__this /* static, unused */, ___stack, method)
// System.Void Pathfinding.Util.StackPool`1<System.Object>::Clear()
extern "C" void StackPool_1_Clear_m16137_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define StackPool_1_Clear_m16137(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))StackPool_1_Clear_m16137_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.StackPool`1<System.Object>::GetSize()
extern "C" int32_t StackPool_1_GetSize_m16138_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define StackPool_1_GetSize_m16138(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))StackPool_1_GetSize_m16138_gshared)(__this /* static, unused */, method)
