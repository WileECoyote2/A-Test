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

// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t42;
// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void Pathfinding.GraphUpdateObject::.ctor()
extern "C" void GraphUpdateObject__ctor_m800 (GraphUpdateObject_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::.ctor(UnityEngine.Bounds)
extern "C" void GraphUpdateObject__ctor_m801 (GraphUpdateObject_t42 * __this, Bounds_t171  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::WillUpdateNode(Pathfinding.GraphNode)
extern "C" void GraphUpdateObject_WillUpdateNode_m802 (GraphUpdateObject_t42 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::RevertFromBackup()
extern "C" void GraphUpdateObject_RevertFromBackup_m803 (GraphUpdateObject_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateObject::Apply(Pathfinding.GraphNode)
extern "C" void GraphUpdateObject_Apply_m804 (GraphUpdateObject_t42 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
