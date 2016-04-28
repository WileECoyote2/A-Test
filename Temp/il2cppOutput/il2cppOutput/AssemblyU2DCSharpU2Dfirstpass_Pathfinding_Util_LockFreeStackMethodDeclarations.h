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

// Pathfinding.Util.LockFreeStack
struct LockFreeStack_t77;
// Pathfinding.Path
struct Path_t10;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.LockFreeStack::.ctor()
extern "C" void LockFreeStack__ctor_m1238 (LockFreeStack_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.LockFreeStack::Push(Pathfinding.Path)
extern "C" void LockFreeStack_Push_m1239 (LockFreeStack_t77 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Pathfinding.Util.LockFreeStack::PopAll()
extern "C" Path_t10 * LockFreeStack_PopAll_m1240 (LockFreeStack_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
