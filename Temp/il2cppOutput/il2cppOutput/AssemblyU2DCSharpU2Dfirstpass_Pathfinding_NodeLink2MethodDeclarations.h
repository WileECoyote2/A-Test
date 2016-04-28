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

// Pathfinding.NodeLink2
struct NodeLink2_t87;
// Pathfinding.GraphNode
struct GraphNode_t61;
// UnityEngine.Transform
struct Transform_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Pathfinding.NodeLink2::.ctor()
extern "C" void NodeLink2__ctor_m503 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::.cctor()
extern "C" void NodeLink2__cctor_m504 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NodeLink2 Pathfinding.NodeLink2::GetNodeLink(Pathfinding.GraphNode)
extern "C" NodeLink2_t87 * NodeLink2_GetNodeLink_m505 (Object_t * __this /* static, unused */, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink2::get_StartTransform()
extern "C" Transform_t4 * NodeLink2_get_StartTransform_m506 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink2::get_EndTransform()
extern "C" Transform_t4 * NodeLink2_get_EndTransform_m507 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink2::get_StartNode()
extern "C" GraphNode_t61 * NodeLink2_get_StartNode_m508 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink2::get_EndNode()
extern "C" GraphNode_t61 * NodeLink2_get_EndNode_m509 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnPostScan()
extern "C" void NodeLink2_OnPostScan_m510 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::InternalOnPostScan()
extern "C" void NodeLink2_InternalOnPostScan_m511 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnGraphsPostUpdate()
extern "C" void NodeLink2_OnGraphsPostUpdate_m512 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnEnable()
extern "C" void NodeLink2_OnEnable_m513 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDisable()
extern "C" void NodeLink2_OnDisable_m514 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::RemoveConnections(Pathfinding.GraphNode)
extern "C" void NodeLink2_RemoveConnections_m515 (NodeLink2_t87 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::ContextApplyForce()
extern "C" void NodeLink2_ContextApplyForce_m516 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::Apply(System.Boolean)
extern "C" void NodeLink2_Apply_m517 (NodeLink2_t87 * __this, bool ___forceNewCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::DrawCircle(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color)
extern "C" void NodeLink2_DrawCircle_m518 (NodeLink2_t87 * __this, Vector3_t7  ___o, float ___r, int32_t ___detail, Color_t117  ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::DrawGizmoBezier(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void NodeLink2_DrawGizmoBezier_m519 (NodeLink2_t87 * __this, Vector3_t7  ___p1, Vector3_t7  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDrawGizmosSelected()
extern "C" void NodeLink2_OnDrawGizmosSelected_m520 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDrawGizmos()
extern "C" void NodeLink2_OnDrawGizmos_m521 (NodeLink2_t87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink2::OnDrawGizmos(System.Boolean)
extern "C" void NodeLink2_OnDrawGizmos_m522 (NodeLink2_t87 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink2::<OnPostScan>m__B(System.Boolean)
extern "C" bool NodeLink2_U3COnPostScanU3Em__B_m523 (NodeLink2_t87 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
