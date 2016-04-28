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

// Pathfinding.GraphUpdateShape
struct GraphUpdateShape_t83;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;
// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.GraphUpdateShape::.ctor()
extern "C" void GraphUpdateShape__ctor_m397 (GraphUpdateShape_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Pathfinding.GraphUpdateShape::get_points()
extern "C" Vector3U5BU5D_t82* GraphUpdateShape_get_points_m398 (GraphUpdateShape_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateShape::set_points(UnityEngine.Vector3[])
extern "C" void GraphUpdateShape_set_points_m399 (GraphUpdateShape_t83 * __this, Vector3U5BU5D_t82* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateShape::get_convex()
extern "C" bool GraphUpdateShape_get_convex_m400 (GraphUpdateShape_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateShape::set_convex(System.Boolean)
extern "C" void GraphUpdateShape_set_convex_m401 (GraphUpdateShape_t83 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateShape::CalculateConvexHull()
extern "C" void GraphUpdateShape_CalculateConvexHull_m402 (GraphUpdateShape_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Pathfinding.GraphUpdateShape::GetBounds()
extern "C" Bounds_t171  GraphUpdateShape_GetBounds_m403 (GraphUpdateShape_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateShape::Contains(Pathfinding.GraphNode)
extern "C" bool GraphUpdateShape_Contains_m404 (GraphUpdateShape_t83 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateShape::Contains(UnityEngine.Vector3)
extern "C" bool GraphUpdateShape_Contains_m405 (GraphUpdateShape_t83 * __this, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
