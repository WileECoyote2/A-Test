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

// Pathfinding.NodeLink
struct NodeLink_t113;
// UnityEngine.Transform
struct Transform_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.NodeLink::.ctor()
extern "C" void NodeLink__ctor_m492 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink::get_Start()
extern "C" Transform_t4 * NodeLink_get_Start_m493 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.NodeLink::get_End()
extern "C" Transform_t4 * NodeLink_get_End_m494 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::OnPostScan()
extern "C" void NodeLink_OnPostScan_m495 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::InternalOnPostScan()
extern "C" void NodeLink_InternalOnPostScan_m496 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::OnGraphsPostUpdate()
extern "C" void NodeLink_OnGraphsPostUpdate_m497 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::Apply()
extern "C" void NodeLink_Apply_m498 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::OnDrawGizmos()
extern "C" void NodeLink_OnDrawGizmos_m499 (NodeLink_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NodeLink::DrawGizmoBezier(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void NodeLink_DrawGizmoBezier_m500 (NodeLink_t113 * __this, Vector3_t7  ___p1, Vector3_t7  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink::<OnPostScan>m__E(System.Boolean)
extern "C" bool NodeLink_U3COnPostScanU3Em__E_m501 (NodeLink_t113 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink::<OnGraphsPostUpdate>m__F(System.Boolean)
extern "C" bool NodeLink_U3COnGraphsPostUpdateU3Em__F_m502 (NodeLink_t113 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
