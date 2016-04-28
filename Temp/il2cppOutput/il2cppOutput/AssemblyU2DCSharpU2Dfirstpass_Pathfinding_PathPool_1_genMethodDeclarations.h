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

// System.Void Pathfinding.PathPool`1<System.Object>::Recycle(T)
extern "C" void PathPool_1_Recycle_m16128_gshared (Object_t * __this /* static, unused */, Object_t * ___path, const MethodInfo* method);
#define PathPool_1_Recycle_m16128(__this /* static, unused */, ___path, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))PathPool_1_Recycle_m16128_gshared)(__this /* static, unused */, ___path, method)
// System.Void Pathfinding.PathPool`1<System.Object>::Warmup(System.Int32,System.Int32)
extern "C" void PathPool_1_Warmup_m16129_gshared (Object_t * __this /* static, unused */, int32_t ___count, int32_t ___length, const MethodInfo* method);
#define PathPool_1_Warmup_m16129(__this /* static, unused */, ___count, ___length, method) (( void (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))PathPool_1_Warmup_m16129_gshared)(__this /* static, unused */, ___count, ___length, method)
// System.Int32 Pathfinding.PathPool`1<System.Object>::GetTotalCreated()
extern "C" int32_t PathPool_1_GetTotalCreated_m16130_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define PathPool_1_GetTotalCreated_m16130(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))PathPool_1_GetTotalCreated_m16130_gshared)(__this /* static, unused */, method)
// System.Int32 Pathfinding.PathPool`1<System.Object>::GetSize()
extern "C" int32_t PathPool_1_GetSize_m16131_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define PathPool_1_GetSize_m16131(__this /* static, unused */, method) (( int32_t (*) (Object_t * /* static, unused */, const MethodInfo*))PathPool_1_GetSize_m16131_gshared)(__this /* static, unused */, method)
// T Pathfinding.PathPool`1<System.Object>::GetPath()
extern "C" Object_t * PathPool_1_GetPath_m16132_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define PathPool_1_GetPath_m16132(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))PathPool_1_GetPath_m16132_gshared)(__this /* static, unused */, method)
