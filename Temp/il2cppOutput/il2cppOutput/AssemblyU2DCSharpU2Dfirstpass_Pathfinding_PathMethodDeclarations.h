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

// Pathfinding.Path
struct Path_t10;
// Pathfinding.PathHandler
struct PathHandler_t53;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t16;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Object
struct Object_t;
// Pathfinding.PathNode
struct PathNode_t105;
// System.Text.StringBuilder
struct StringBuilder_t95;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PathCompleteState.h"
#include "mscorlib_System_DateTime.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PathState.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PathLog.h"

// System.Void Pathfinding.Path::.ctor()
extern "C" void Path__ctor_m620 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::.cctor()
extern "C" void Path__cctor_m621 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathHandler Pathfinding.Path::get_pathHandler()
extern "C" PathHandler_t53 * Path_get_pathHandler_m622 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_pathHandler(Pathfinding.PathHandler)
extern "C" void Path_set_pathHandler_m623 (Path_t10 * __this, PathHandler_t53 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PathCompleteState Pathfinding.Path::get_CompleteState()
extern "C" int32_t Path_get_CompleteState_m624 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_CompleteState(PathCompleteState)
extern "C" void Path_set_CompleteState_m625 (Path_t10 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::get_error()
extern "C" bool Path_get_error_m626 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Path::get_errorLog()
extern "C" String_t* Path_get_errorLog_m627 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Path::get_callTime()
extern "C" DateTime_t134  Path_get_callTime_m628 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_callTime(System.DateTime)
extern "C" void Path_set_callTime_m629 (Path_t10 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::get_recycled()
extern "C" bool Path_get_recycled_m630 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_recycled(System.Boolean)
extern "C" void Path_set_recycled_m631 (Path_t10 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.Path::get_pathID()
extern "C" uint16_t Path_get_pathID_m632 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_pathID(System.UInt16)
extern "C" void Path_set_pathID_m633 (Path_t10 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Pathfinding.Path::get_tagPenalties()
extern "C" Int32U5BU5D_t16* Path_get_tagPenalties_m634 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::set_tagPenalties(System.Int32[])
extern "C" void Path_set_tagPenalties_m635 (Path_t10 * __this, Int32U5BU5D_t16* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::get_FloodingPath()
extern "C" bool Path_get_FloodingPath_m636 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Path::GetTotalLength()
extern "C" float Path_GetTotalLength_m637 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Pathfinding.Path::WaitForPath()
extern "C" Object_t * Path_WaitForPath_m638 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::CalculateHScore(Pathfinding.GraphNode)
extern "C" uint32_t Path_CalculateHScore_m639 (Path_t10 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::GetTagPenalty(System.Int32)
extern "C" uint32_t Path_GetTagPenalty_m640 (Path_t10 * __this, int32_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.Path::GetHTarget()
extern "C" Int3_t111  Path_GetHTarget_m641 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::CanTraverse(Pathfinding.GraphNode)
extern "C" bool Path_CanTraverse_m642 (Path_t10 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::GetTraversalCost(Pathfinding.GraphNode)
extern "C" uint32_t Path_GetTraversalCost_m643 (Path_t10 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Path::GetConnectionSpecialCost(Pathfinding.GraphNode,Pathfinding.GraphNode,System.UInt32)
extern "C" uint32_t Path_GetConnectionSpecialCost_m644 (Path_t10 * __this, GraphNode_t61 * ___a, GraphNode_t61 * ___b, uint32_t ___currentCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::IsDone()
extern "C" bool Path_IsDone_m645 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::AdvanceState(PathState)
extern "C" void Path_AdvanceState_m646 (Path_t10 * __this, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PathState Pathfinding.Path::GetState()
extern "C" int32_t Path_GetState_m647 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::LogError(System.String)
extern "C" void Path_LogError_m648 (Path_t10 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ForceLogError(System.String)
extern "C" void Path_ForceLogError_m649 (Path_t10 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Log(System.String)
extern "C" void Path_Log_m650 (Path_t10 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Error()
extern "C" void Path_Error_m651 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ErrorCheck()
extern "C" void Path_ErrorCheck_m652 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::OnEnterPool()
extern "C" void Path_OnEnterPool_m653 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Reset()
extern "C" void Path_Reset_m654 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Path::HasExceededTime(System.Int32,System.Int64)
extern "C" bool Path_HasExceededTime_m655 (Path_t10 * __this, int32_t ___searchedNodes, int64_t ___targetTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Claim(System.Object)
extern "C" void Path_Claim_m656 (Path_t10 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ReleaseSilent(System.Object)
extern "C" void Path_ReleaseSilent_m657 (Path_t10 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Release(System.Object,System.Boolean)
extern "C" void Path_Release_m658 (Path_t10 * __this, Object_t * ___o, bool ___silent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Trace(Pathfinding.PathNode)
extern "C" void Path_Trace_m659 (Path_t10 * __this, PathNode_t105 * ___from, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::DebugStringPrefix(PathLog,System.Text.StringBuilder)
extern "C" void Path_DebugStringPrefix_m660 (Path_t10 * __this, int32_t ___logMode, StringBuilder_t95 * ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::DebugStringSuffix(PathLog,System.Text.StringBuilder)
extern "C" void Path_DebugStringSuffix_m661 (Path_t10 * __this, int32_t ___logMode, StringBuilder_t95 * ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Path::DebugString(PathLog)
extern "C" String_t* Path_DebugString_m662 (Path_t10 * __this, int32_t ___logMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::ReturnPath()
extern "C" void Path_ReturnPath_m663 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::PrepareBase(Pathfinding.PathHandler)
extern "C" void Path_PrepareBase_m664 (Path_t10 * __this, PathHandler_t53 * ___pathHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Path::Cleanup()
extern "C" void Path_Cleanup_m665 (Path_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
