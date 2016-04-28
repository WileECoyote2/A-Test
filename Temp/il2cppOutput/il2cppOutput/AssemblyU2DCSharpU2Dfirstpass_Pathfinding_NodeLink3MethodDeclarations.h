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

// Pathfinding.NodeLink3
struct NodeLink3_t119;
// Pathfinding.GraphNode
struct GraphNode_t61;
// UnityEngine.Transform
struct Transform_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Pathfinding.NodeLink3::.ctor()
extern "C" void NodeLink3__ctor_m528 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::.cctor()
extern "C" void NodeLink3__cctor_m529 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NodeLink3 Pathfinding.NodeLink3::GetNodeLink(Pathfinding.GraphNode)
extern "C" NodeLink3_t119 * NodeLink3_GetNodeLink_m530 (Object_t * __this /* static, unused */, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink3::get_StartTransform()
extern "C" Transform_t4 * NodeLink3_get_StartTransform_m531 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink3::get_EndTransform()
extern "C" Transform_t4 * NodeLink3_get_EndTransform_m532 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3::get_StartNode()
extern "C" GraphNode_t61 * NodeLink3_get_StartNode_m533 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3::get_EndNode()
extern "C" GraphNode_t61 * NodeLink3_get_EndNode_m534 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnPostScan()
extern "C" void NodeLink3_OnPostScan_m535 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::InternalOnPostScan()
extern "C" void NodeLink3_InternalOnPostScan_m536 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnGraphsPostUpdate()
extern "C" void NodeLink3_OnGraphsPostUpdate_m537 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnEnable()
extern "C" void NodeLink3_OnEnable_m538 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDisable()
extern "C" void NodeLink3_OnDisable_m539 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::RemoveConnections(Pathfinding.GraphNode)
extern "C" void NodeLink3_RemoveConnections_m540 (NodeLink3_t119 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::ContextApplyForce()
extern "C" void NodeLink3_ContextApplyForce_m541 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::Apply(System.Boolean)
extern "C" void NodeLink3_Apply_m542 (NodeLink3_t119 * __this, bool ___forceNewCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::DrawCircle(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color)
extern "C" void NodeLink3_DrawCircle_m543 (NodeLink3_t119 * __this, Vector3_t7  ___o, float ___r, int32_t ___detail, Color_t117  ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::DrawGizmoBezier(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void NodeLink3_DrawGizmoBezier_m544 (NodeLink3_t119 * __this, Vector3_t7  ___p1, Vector3_t7  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDrawGizmosSelected()
extern "C" void NodeLink3_OnDrawGizmosSelected_m545 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDrawGizmos()
extern "C" void NodeLink3_OnDrawGizmos_m546 (NodeLink3_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink3::OnDrawGizmos(System.Boolean)
extern "C" void NodeLink3_OnDrawGizmos_m547 (NodeLink3_t119 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink3::<OnPostScan>m__13(System.Boolean)
extern "C" bool NodeLink3_U3COnPostScanU3Em__13_m548 (NodeLink3_t119 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
