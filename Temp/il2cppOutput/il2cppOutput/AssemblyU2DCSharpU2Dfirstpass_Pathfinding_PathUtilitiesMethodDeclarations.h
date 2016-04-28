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

// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;
// Pathfinding.IRaycastableGraph
struct IRaycastableGraph_t395;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean Pathfinding.PathUtilities::IsPathPossible(Pathfinding.GraphNode,Pathfinding.GraphNode)
extern "C" bool PathUtilities_IsPathPossible_m1247 (Object_t * __this /* static, unused */, GraphNode_t61 * ___n1, GraphNode_t61 * ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PathUtilities::IsPathPossible(System.Collections.Generic.List`1<Pathfinding.GraphNode>)
extern "C" bool PathUtilities_IsPathPossible_m1248 (Object_t * __this /* static, unused */, List_1_t19 * ___nodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PathUtilities::IsPathPossible(System.Collections.Generic.List`1<Pathfinding.GraphNode>,System.Int32)
extern "C" bool PathUtilities_IsPathPossible_m1249 (Object_t * __this /* static, unused */, List_1_t19 * ___nodes, int32_t ___tagMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities::GetReachableNodes(Pathfinding.GraphNode,System.Int32)
extern "C" List_1_t19 * PathUtilities_GetReachableNodes_m1250 (Object_t * __this /* static, unused */, GraphNode_t61 * ___seed, int32_t ___tagMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities::BFS(Pathfinding.GraphNode,System.Int32,System.Int32)
extern "C" List_1_t19 * PathUtilities_BFS_m1251 (Object_t * __this /* static, unused */, GraphNode_t61 * ___seed, int32_t ___depth, int32_t ___tagMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.PathUtilities::GetSpiralPoints(System.Int32,System.Single)
extern "C" List_1_t18 * PathUtilities_GetSpiralPoints_m1252 (Object_t * __this /* static, unused */, int32_t ___count, float ___clearance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.PathUtilities::InvoluteOfCircle(System.Single,System.Single)
extern "C" Vector3_t7  PathUtilities_InvoluteOfCircle_m1253 (Object_t * __this /* static, unused */, float ___a, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathUtilities::GetPointsAroundPointWorld(UnityEngine.Vector3,Pathfinding.IRaycastableGraph,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,System.Single)
extern "C" void PathUtilities_GetPointsAroundPointWorld_m1254 (Object_t * __this /* static, unused */, Vector3_t7  ___p, Object_t * ___g, List_1_t18 * ___previousPoints, float ___radius, float ___clearanceRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathUtilities::GetPointsAroundPoint(UnityEngine.Vector3,Pathfinding.IRaycastableGraph,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,System.Single)
extern "C" void PathUtilities_GetPointsAroundPoint_m1255 (Object_t * __this /* static, unused */, Vector3_t7  ___p, Object_t * ___g, List_1_t18 * ___previousPoints, float ___radius, float ___clearanceRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.PathUtilities::GetPointsOnNodes(System.Collections.Generic.List`1<Pathfinding.GraphNode>,System.Int32,System.Single)
extern "C" List_1_t18 * PathUtilities_GetPointsOnNodes_m1256 (Object_t * __this /* static, unused */, List_1_t19 * ___nodes, int32_t ___count, float ___clearanceRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
