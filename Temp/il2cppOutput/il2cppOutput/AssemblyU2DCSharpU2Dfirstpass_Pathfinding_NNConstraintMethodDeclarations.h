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

// Pathfinding.NNConstraint
struct NNConstraint_t132;
// Pathfinding.NavGraph
struct NavGraph_t109;
// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.NNConstraint::.ctor()
extern "C" void NNConstraint__ctor_m782 (NNConstraint_t132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NNConstraint::SuitableGraph(System.Int32,Pathfinding.NavGraph)
extern "C" bool NNConstraint_SuitableGraph_m783 (NNConstraint_t132 * __this, int32_t ___graphIndex, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NNConstraint::Suitable(Pathfinding.GraphNode)
extern "C" bool NNConstraint_Suitable_m784 (NNConstraint_t132 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNConstraint Pathfinding.NNConstraint::get_Default()
extern "C" NNConstraint_t132 * NNConstraint_get_Default_m785 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNConstraint Pathfinding.NNConstraint::get_None()
extern "C" NNConstraint_t132 * NNConstraint_get_None_m786 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
