#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Pathfinding.AstarData
struct AstarData_t23;
// AstarPath
struct AstarPath_t48;
// Pathfinding.AstarColor
struct AstarColor_t62;
// System.String[]
struct StringU5BU5D_t63;
// Pathfinding.Path
struct Path_t10;
// System.Action
struct Action_t45;
// OnGraphDelegate
struct OnGraphDelegate_t73;
// OnPathDelegate
struct OnPathDelegate_t17;
// OnScanDelegate
struct OnScanDelegate_t74;
// System.Collections.Generic.Queue`1<Pathfinding.GraphUpdateObject>
struct Queue_1_t64;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t55;
// Pathfinding.ThreadControlQueue
struct ThreadControlQueue_t65;
// System.Threading.Thread[]
struct ThreadU5BU5D_t75;
// System.Threading.Thread
struct Thread_t66;
// Pathfinding.PathThreadInfo[]
struct PathThreadInfoU5BU5D_t76;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// Pathfinding.Util.LockFreeStack
struct LockFreeStack_t77;
// Pathfinding.EuclideanEmbedding
struct EuclideanEmbedding_t67;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t68;
// System.Collections.Generic.Queue`1<AstarPath/GUOSingle>
struct Queue_1_t69;
// System.Object
struct Object_t;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t70;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t71;
// System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>
struct Queue_1_t72;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t78;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarPath_AstarDistribution.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GraphDebugMode.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PathLog.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Heuristic.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ThreadCount.h"

// AstarPath
struct  AstarPath_t48  : public MonoBehaviour_t3
{
	// Pathfinding.AstarData AstarPath::astarData
	AstarData_t23 * ___astarData_5;
	// System.Boolean AstarPath::showNavGraphs
	bool ___showNavGraphs_7;
	// System.Boolean AstarPath::showUnwalkableNodes
	bool ___showUnwalkableNodes_8;
	// GraphDebugMode AstarPath::debugMode
	int32_t ___debugMode_9;
	// System.Single AstarPath::debugFloor
	float ___debugFloor_10;
	// System.Single AstarPath::debugRoof
	float ___debugRoof_11;
	// System.Boolean AstarPath::manualDebugFloorRoof
	bool ___manualDebugFloorRoof_12;
	// System.Boolean AstarPath::showSearchTree
	bool ___showSearchTree_13;
	// System.Single AstarPath::unwalkableNodeDebugSize
	float ___unwalkableNodeDebugSize_14;
	// PathLog AstarPath::logPathResults
	int32_t ___logPathResults_15;
	// System.Single AstarPath::maxNearestNodeDistance
	float ___maxNearestNodeDistance_16;
	// System.Boolean AstarPath::scanOnStartup
	bool ___scanOnStartup_17;
	// System.Boolean AstarPath::fullGetNearestSearch
	bool ___fullGetNearestSearch_18;
	// System.Boolean AstarPath::prioritizeGraphs
	bool ___prioritizeGraphs_19;
	// System.Single AstarPath::prioritizeGraphsLimit
	float ___prioritizeGraphsLimit_20;
	// Pathfinding.AstarColor AstarPath::colorSettings
	AstarColor_t62 * ___colorSettings_21;
	// System.String[] AstarPath::tagNames
	StringU5BU5D_t63* ___tagNames_22;
	// Heuristic AstarPath::heuristic
	int32_t ___heuristic_23;
	// System.Single AstarPath::heuristicScale
	float ___heuristicScale_24;
	// ThreadCount AstarPath::threadCount
	int32_t ___threadCount_25;
	// System.Single AstarPath::maxFrameTime
	float ___maxFrameTime_26;
	// System.Int32 AstarPath::minAreaSize
	int32_t ___minAreaSize_27;
	// System.Boolean AstarPath::batchGraphUpdates
	bool ___batchGraphUpdates_28;
	// System.Single AstarPath::graphUpdateBatchingInterval
	float ___graphUpdateBatchingInterval_29;
	// System.Single AstarPath::lastScanTime
	float ___lastScanTime_30;
	// Pathfinding.Path AstarPath::debugPath
	Path_t10 * ___debugPath_31;
	// System.String AstarPath::inGameDebugPath
	String_t* ___inGameDebugPath_32;
	// System.Boolean AstarPath::graphUpdateRoutineRunning
	bool ___graphUpdateRoutineRunning_33;
	// System.Boolean AstarPath::isRegisteredForUpdate
	bool ___isRegisteredForUpdate_34;
	// System.Boolean AstarPath::workItemsQueued
	bool ___workItemsQueued_35;
	// System.Boolean AstarPath::queuedWorkItemFloodFill
	bool ___queuedWorkItemFloodFill_36;
	// System.Action AstarPath::OnDrawGizmosCallback
	Action_t45 * ___OnDrawGizmosCallback_48;
	// System.Action AstarPath::OnUnloadGizmoMeshes
	Action_t45 * ___OnUnloadGizmoMeshes_49;
	// System.Action AstarPath::OnGraphsWillBeUpdated
	Action_t45 * ___OnGraphsWillBeUpdated_50;
	// System.Action AstarPath::OnGraphsWillBeUpdated2
	Action_t45 * ___OnGraphsWillBeUpdated2_51;
	// System.Collections.Generic.Queue`1<Pathfinding.GraphUpdateObject> AstarPath::graphUpdateQueue
	Queue_1_t64 * ___graphUpdateQueue_52;
	// System.Collections.Generic.Stack`1<Pathfinding.GraphNode> AstarPath::floodStack
	Stack_1_t55 * ___floodStack_53;
	// Pathfinding.ThreadControlQueue AstarPath::pathQueue
	ThreadControlQueue_t65 * ___pathQueue_54;
	// System.Threading.Thread AstarPath::graphUpdateThread
	Thread_t66 * ___graphUpdateThread_56;
	// Pathfinding.EuclideanEmbedding AstarPath::euclideanEmbedding
	EuclideanEmbedding_t67 * ___euclideanEmbedding_60;
	// System.Int32 AstarPath::nextNodeIndex
	int32_t ___nextNodeIndex_61;
	// System.Collections.Generic.Stack`1<System.Int32> AstarPath::nodeIndexPool
	Stack_1_t68 * ___nodeIndexPool_62;
	// Pathfinding.Path AstarPath::pathReturnPop
	Path_t10 * ___pathReturnPop_63;
	// System.Collections.Generic.Queue`1<AstarPath/GUOSingle> AstarPath::graphUpdateQueueAsync
	Queue_1_t69 * ___graphUpdateQueueAsync_64;
	// System.Collections.Generic.Queue`1<AstarPath/GUOSingle> AstarPath::graphUpdateQueueRegular
	Queue_1_t69 * ___graphUpdateQueueRegular_65;
	// System.Boolean AstarPath::showGraphs
	bool ___showGraphs_66;
	// System.UInt32 AstarPath::lastUniqueAreaIndex
	uint32_t ___lastUniqueAreaIndex_68;
	// System.Threading.AutoResetEvent AstarPath::graphUpdateAsyncEvent
	AutoResetEvent_t70 * ___graphUpdateAsyncEvent_70;
	// System.Threading.ManualResetEvent AstarPath::processingGraphUpdatesAsync
	ManualResetEvent_t71 * ___processingGraphUpdatesAsync_71;
	// System.Single AstarPath::lastGraphUpdate
	float ___lastGraphUpdate_72;
	// System.UInt16 AstarPath::nextFreePathID
	uint16_t ___nextFreePathID_73;
	// System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem> AstarPath::workItems
	Queue_1_t72 * ___workItems_74;
	// System.Boolean AstarPath::processingWorkItems
	bool ___processingWorkItems_75;
	// System.Boolean AstarPath::<isScanning>k__BackingField
	bool ___U3CisScanningU3Ek__BackingField_77;
};
struct AstarPath_t48_StaticFields{
	// AstarPath/AstarDistribution AstarPath::Distribution
	int32_t ___Distribution_2;
	// System.String AstarPath::Branch
	String_t* ___Branch_3;
	// System.Boolean AstarPath::HasPro
	bool ___HasPro_4;
	// AstarPath AstarPath::active
	AstarPath_t48 * ___active_6;
	// System.Action AstarPath::OnAwakeSettings
	Action_t45 * ___OnAwakeSettings_37;
	// OnGraphDelegate AstarPath::OnGraphPreScan
	OnGraphDelegate_t73 * ___OnGraphPreScan_38;
	// OnGraphDelegate AstarPath::OnGraphPostScan
	OnGraphDelegate_t73 * ___OnGraphPostScan_39;
	// OnPathDelegate AstarPath::OnPathPreSearch
	OnPathDelegate_t17 * ___OnPathPreSearch_40;
	// OnPathDelegate AstarPath::OnPathPostSearch
	OnPathDelegate_t17 * ___OnPathPostSearch_41;
	// OnScanDelegate AstarPath::OnPreScan
	OnScanDelegate_t74 * ___OnPreScan_42;
	// OnScanDelegate AstarPath::OnPostScan
	OnScanDelegate_t74 * ___OnPostScan_43;
	// OnScanDelegate AstarPath::OnLatePostScan
	OnScanDelegate_t74 * ___OnLatePostScan_44;
	// OnScanDelegate AstarPath::OnGraphsUpdated
	OnScanDelegate_t74 * ___OnGraphsUpdated_45;
	// System.Action AstarPath::On65KOverflow
	Action_t45 * ___On65KOverflow_46;
	// System.Action AstarPath::OnThreadSafeCallback
	Action_t45 * ___OnThreadSafeCallback_47;
	// System.Threading.Thread[] AstarPath::threads
	ThreadU5BU5D_t75* ___threads_55;
	// Pathfinding.PathThreadInfo[] AstarPath::threadInfos
	PathThreadInfoU5BU5D_t76* ___threadInfos_57;
	// System.Collections.IEnumerator AstarPath::threadEnumerator
	Object_t * ___threadEnumerator_58;
	// Pathfinding.Util.LockFreeStack AstarPath::pathReturnStack
	LockFreeStack_t77 * ___pathReturnStack_59;
	// System.Boolean AstarPath::isEditor
	bool ___isEditor_67;
	// System.Object AstarPath::safeUpdateLock
	Object_t * ___safeUpdateLock_69;
	// System.Int32 AstarPath::waitForPathDepth
	int32_t ___waitForPathDepth_76;
	// Pathfinding.GraphNodeDelegateCancelable AstarPath::<>f__am$cache4C
	GraphNodeDelegateCancelable_t78 * ___U3CU3Ef__amU24cache4C_78;
	// Pathfinding.GraphNodeDelegateCancelable AstarPath::<>f__am$cache4D
	GraphNodeDelegateCancelable_t78 * ___U3CU3Ef__amU24cache4D_79;
};
