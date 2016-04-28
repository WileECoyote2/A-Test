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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.ObjectPool`1<System.Object>::.cctor()
extern "C" void ObjectPool_1__cctor_m15761_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ObjectPool_1__cctor_m15761(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ObjectPool_1__cctor_m15761_gshared)(__this /* static, unused */, method)
// T Pathfinding.Util.ObjectPool`1<System.Object>::Claim()
extern "C" Object_t * ObjectPool_1_Claim_m15762_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ObjectPool_1_Claim_m15762(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ObjectPool_1_Claim_m15762_gshared)(__this /* static, unused */, method)
// System.Void Pathfinding.Util.ObjectPool`1<System.Object>::Warmup(System.Int32)
extern "C" void ObjectPool_1_Warmup_m15763_gshared (Object_t * __this /* static, unused */, int32_t ___count, const MethodInfo* method);
#define ObjectPool_1_Warmup_m15763(__this /* static, unused */, ___count, method) (( void (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))ObjectPool_1_Warmup_m15763_gshared)(__this /* static, unused */, ___count, method)
// System.Void Pathfinding.Util.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m15764_gshared (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method);
#define ObjectPool_1_Release_m15764(__this /* static, unused */, ___obj, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ObjectPool_1_Release_m15764_gshared)(__this /* static, unused */, ___obj, method)
// System.Void Pathfinding.Util.ObjectPool`1<System.Object>::Clear()
extern "C" void ObjectPool_1_Clear_m15765_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ObjectPool_1_Clear_m15765(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ObjectPool_1_Clear_m15765_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.Util.ObjectPool`1<System.Object>::GetSize()
extern "C" int32_t ObjectPool_1_GetSize_m15766_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ObjectPool_1_GetSize_m15766(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))ObjectPool_1_GetSize_m15766_gshared)(__this /* static, unused */, method)
