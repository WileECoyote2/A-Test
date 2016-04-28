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

// Pathfinding.Path
struct Path_t10;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.PathPool::.cctor()
extern "C" void PathPool__cctor_m549 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathPool::Pool(Pathfinding.Path)
extern "C" void PathPool_Pool_m550 (Object_t * __this /* static, unused */, Path_t10 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PathPool::GetTotalCreated(System.Type)
extern "C" int32_t PathPool_GetTotalCreated_m551 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PathPool::GetSize(System.Type)
extern "C" int32_t PathPool_GetSize_m552 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
