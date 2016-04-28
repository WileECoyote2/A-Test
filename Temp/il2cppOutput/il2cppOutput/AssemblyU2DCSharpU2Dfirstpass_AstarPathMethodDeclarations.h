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

// AstarPath
struct AstarPath_t48;
// System.Version
struct Version_t165;
// System.Type[]
struct TypeU5BU5D_t34;
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t28;
// Pathfinding.PathHandler
struct PathHandler_t53;
// System.String[]
struct StringU5BU5D_t63;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.String
struct String_t;
// Pathfinding.Path
struct Path_t10;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t42;
// System.Object
struct Object_t;
// OnScanStatus
struct OnScanStatus_t57;
// System.Action
struct Action_t45;
// Pathfinding.NNConstraint
struct NNConstraint_t132;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarPath_AstarWorkItem.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ThreadCount.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NNInfo.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void AstarPath::.ctor()
extern "C" void AstarPath__ctor_m307 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::.cctor()
extern "C" void AstarPath__cctor_m308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version AstarPath::get_Version()
extern "C" Version_t165 * AstarPath_get_Version_m309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] AstarPath::get_graphTypes()
extern "C" TypeU5BU5D_t34* AstarPath_get_graphTypes_m310 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph[] AstarPath::get_graphs()
extern "C" NavGraphU5BU5D_t28* AstarPath_get_graphs_m311 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_graphs(Pathfinding.NavGraph[])
extern "C" void AstarPath_set_graphs_m312 (AstarPath_t48 * __this, NavGraphU5BU5D_t28* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AstarPath::get_maxNearestNodeDistanceSqr()
extern "C" float AstarPath_get_maxNearestNodeDistanceSqr_m313 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_limitGraphUpdates()
extern "C" bool AstarPath_get_limitGraphUpdates_m314 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_limitGraphUpdates(System.Boolean)
extern "C" void AstarPath_set_limitGraphUpdates_m315 (AstarPath_t48 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AstarPath::get_maxGraphUpdateFreq()
extern "C" float AstarPath_get_maxGraphUpdateFreq_m316 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_maxGraphUpdateFreq(System.Single)
extern "C" void AstarPath_set_maxGraphUpdateFreq_m317 (AstarPath_t48 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathHandler AstarPath::get_debugPathData()
extern "C" PathHandler_t53 * AstarPath_get_debugPathData_m318 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_isScanning()
extern "C" bool AstarPath_get_isScanning_m319 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::set_isScanning(System.Boolean)
extern "C" void AstarPath_set_isScanning_m320 (AstarPath_t48 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::get_NumParallelThreads()
extern "C" int32_t AstarPath_get_NumParallelThreads_m321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_IsUsingMultithreading()
extern "C" bool AstarPath_get_IsUsingMultithreading_m322 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::get_IsAnyGraphUpdatesQueued()
extern "C" bool AstarPath_get_IsAnyGraphUpdatesQueued_m323 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] AstarPath::GetTagNames()
extern "C" StringU5BU5D_t63* AstarPath_GetTagNames_m324 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] AstarPath::FindTagNames()
extern "C" StringU5BU5D_t63* AstarPath_FindTagNames_m325 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 AstarPath::GetNextPathID()
extern "C" uint16_t AstarPath_GetNextPathID_m326 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnDrawGizmos()
extern "C" void AstarPath_OnDrawGizmos_m327 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::DrawUnwalkableNode(Pathfinding.GraphNode)
extern "C" bool AstarPath_DrawUnwalkableNode_m328 (AstarPath_t48 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnGUI()
extern "C" void AstarPath_OnGUI_m329 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::AstarLog(System.String)
extern "C" void AstarPath_AstarLog_m330 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::AstarLogError(System.String)
extern "C" void AstarPath_AstarLogError_m331 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::LogPathResults(Pathfinding.Path)
extern "C" void AstarPath_LogPathResults_m332 (AstarPath_t48 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Update()
extern "C" void AstarPath_Update_m333 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::PerformBlockingActions(System.Boolean,System.Boolean)
extern "C" void AstarPath_PerformBlockingActions_m334 (AstarPath_t48 * __this, bool ___force, bool ___unblockOnComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::QueueWorkItemFloodFill()
extern "C" void AstarPath_QueueWorkItemFloodFill_m335 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::EnsureValidFloodFill()
extern "C" void AstarPath_EnsureValidFloodFill_m336 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::AddWorkItem(AstarPath/AstarWorkItem)
extern "C" void AstarPath_AddWorkItem_m337 (AstarPath_t48 * __this, AstarWorkItem_t44  ___itm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::ProcessWorkItems(System.Boolean)
extern "C" int32_t AstarPath_ProcessWorkItems_m338 (AstarPath_t48 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::QueueGraphUpdates()
extern "C" void AstarPath_QueueGraphUpdates_m339 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AstarPath::DelayedGraphUpdate()
extern "C" Object_t * AstarPath_DelayedGraphUpdate_m340 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(UnityEngine.Bounds,System.Single)
extern "C" void AstarPath_UpdateGraphs_m341 (AstarPath_t48 * __this, Bounds_t171  ___bounds, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(Pathfinding.GraphUpdateObject,System.Single)
extern "C" void AstarPath_UpdateGraphs_m342 (AstarPath_t48 * __this, GraphUpdateObject_t42 * ___ob, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AstarPath::UpdateGraphsInteral(Pathfinding.GraphUpdateObject,System.Single)
extern "C" Object_t * AstarPath_UpdateGraphsInteral_m343 (AstarPath_t48 * __this, GraphUpdateObject_t42 * ___ob, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(UnityEngine.Bounds)
extern "C" void AstarPath_UpdateGraphs_m344 (AstarPath_t48 * __this, Bounds_t171  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::UpdateGraphs(Pathfinding.GraphUpdateObject)
extern "C" void AstarPath_UpdateGraphs_m345 (AstarPath_t48 * __this, GraphUpdateObject_t42 * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FlushGraphUpdates()
extern "C" void AstarPath_FlushGraphUpdates_m346 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FlushWorkItems(System.Boolean,System.Boolean)
extern "C" void AstarPath_FlushWorkItems_m347 (AstarPath_t48 * __this, bool ___unblockOnComplete, bool ___block, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::QueueGraphUpdatesInternal()
extern "C" void AstarPath_QueueGraphUpdatesInternal_m348 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::ProcessGraphUpdates(System.Boolean)
extern "C" bool AstarPath_ProcessGraphUpdates_m349 (AstarPath_t48 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::ProcessGraphUpdatesAsync(System.Object)
extern "C" void AstarPath_ProcessGraphUpdatesAsync_m350 (AstarPath_t48 * __this, Object_t * ____astar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FlushThreadSafeCallbacks()
extern "C" void AstarPath_FlushThreadSafeCallbacks_m351 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::CalculateThreadCount(ThreadCount)
extern "C" int32_t AstarPath_CalculateThreadCount_m352 (Object_t * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Awake()
extern "C" void AstarPath_Awake_m353 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::VerifyIntegrity()
extern "C" void AstarPath_VerifyIntegrity_m354 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::SetUpReferences()
extern "C" void AstarPath_SetUpReferences_m355 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Initialize()
extern "C" void AstarPath_Initialize_m356 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnDisable()
extern "C" void AstarPath_OnDisable_m357 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnDestroy()
extern "C" void AstarPath_OnDestroy_m358 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FloodFill(Pathfinding.GraphNode)
extern "C" void AstarPath_FloodFill_m359 (AstarPath_t48 * __this, GraphNode_t61 * ___seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FloodFill(Pathfinding.GraphNode,System.UInt32)
extern "C" void AstarPath_FloodFill_m360 (AstarPath_t48 * __this, GraphNode_t61 * ___seed, uint32_t ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::FloodFill()
extern "C" void AstarPath_FloodFill_m361 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarPath::GetNewNodeIndex()
extern "C" int32_t AstarPath_GetNewNodeIndex_m362 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::InitializeNode(Pathfinding.GraphNode)
extern "C" void AstarPath_InitializeNode_m363 (AstarPath_t48 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::DestroyNode(Pathfinding.GraphNode)
extern "C" void AstarPath_DestroyNode_m364 (AstarPath_t48 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::BlockUntilPathQueueBlocked()
extern "C" void AstarPath_BlockUntilPathQueueBlocked_m365 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::Scan()
extern "C" void AstarPath_Scan_m366 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::ScanLoop(OnScanStatus)
extern "C" void AstarPath_ScanLoop_m367 (AstarPath_t48 * __this, OnScanStatus_t57 * ___statusCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::WaitForPath(Pathfinding.Path)
extern "C" void AstarPath_WaitForPath_m368 (Object_t * __this /* static, unused */, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::RegisterSafeUpdate(System.Action,System.Boolean)
extern "C" void AstarPath_RegisterSafeUpdate_m369 (Object_t * __this /* static, unused */, Action_t45 * ___callback, bool ___threadSafe, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::RegisterSafeUpdate(System.Action)
extern "C" void AstarPath_RegisterSafeUpdate_m370 (Object_t * __this /* static, unused */, Action_t45 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::InterruptPathfinding()
extern "C" void AstarPath_InterruptPathfinding_m371 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::StartPath(Pathfinding.Path,System.Boolean)
extern "C" void AstarPath_StartPath_m372 (Object_t * __this /* static, unused */, Path_t10 * ___p, bool ___pushToFront, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::OnApplicationQuit()
extern "C" void AstarPath_OnApplicationQuit_m373 (AstarPath_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::ReturnPaths(System.Boolean)
extern "C" void AstarPath_ReturnPaths_m374 (AstarPath_t48 * __this, bool ___timeSlice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarPath::CalculatePathsThreaded(System.Object)
extern "C" void AstarPath_CalculatePathsThreaded_m375 (Object_t * __this /* static, unused */, Object_t * ____threadInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AstarPath::CalculatePaths(System.Object)
extern "C" Object_t * AstarPath_CalculatePaths_m376 (Object_t * __this /* static, unused */, Object_t * ____threadInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo AstarPath::GetNearest(UnityEngine.Vector3)
extern "C" NNInfo_t169  AstarPath_GetNearest_m377 (AstarPath_t48 * __this, Vector3_t7  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo AstarPath::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C" NNInfo_t169  AstarPath_GetNearest_m378 (AstarPath_t48 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo AstarPath::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C" NNInfo_t169  AstarPath_GetNearest_m379 (AstarPath_t48 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, GraphNode_t61 * ___hint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode AstarPath::GetNearest(UnityEngine.Ray)
extern "C" GraphNode_t61 * AstarPath_GetNearest_m380 (AstarPath_t48 * __this, Ray_t277  ___ray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::<OnDrawGizmos>m__4(Pathfinding.GraphNode)
extern "C" bool AstarPath_U3COnDrawGizmosU3Em__4_m381 (AstarPath_t48 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::<FloodFill>m__5(Pathfinding.GraphNode)
extern "C" bool AstarPath_U3CFloodFillU3Em__5_m382 (Object_t * __this /* static, unused */, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AstarPath::<ScanLoop>m__7(Pathfinding.GraphNode)
extern "C" bool AstarPath_U3CScanLoopU3Em__7_m383 (Object_t * __this /* static, unused */, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
