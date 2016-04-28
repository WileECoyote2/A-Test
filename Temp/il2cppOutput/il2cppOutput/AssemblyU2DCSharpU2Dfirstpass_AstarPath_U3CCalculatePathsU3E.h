#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Exception
struct Exception_t52;
// Pathfinding.PathHandler
struct PathHandler_t53;
// AstarPath
struct AstarPath_t48;
// Pathfinding.Path
struct Path_t10;
// OnPathDelegate
struct OnPathDelegate_t17;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_PathThreadInfo.h"

// AstarPath/<CalculatePaths>c__Iterator7
struct  U3CCalculatePathsU3Ec__Iterator7_t50  : public Object_t
{
	// System.Object AstarPath/<CalculatePaths>c__Iterator7::_threadInfo
	Object_t * ____threadInfo_0;
	// Pathfinding.PathThreadInfo AstarPath/<CalculatePaths>c__Iterator7::<threadInfo>__0
	PathThreadInfo_t51  ___U3CthreadInfoU3E__0_1;
	// System.Exception AstarPath/<CalculatePaths>c__Iterator7::<e>__1
	Exception_t52 * ___U3CeU3E__1_2;
	// System.Int32 AstarPath/<CalculatePaths>c__Iterator7::<numPaths>__2
	int32_t ___U3CnumPathsU3E__2_3;
	// Pathfinding.PathHandler AstarPath/<CalculatePaths>c__Iterator7::<runData>__3
	PathHandler_t53 * ___U3CrunDataU3E__3_4;
	// AstarPath AstarPath/<CalculatePaths>c__Iterator7::<astar>__4
	AstarPath_t48 * ___U3CastarU3E__4_5;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<maxTicks>__5
	int64_t ___U3CmaxTicksU3E__5_6;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<targetTick>__6
	int64_t ___U3CtargetTickU3E__6_7;
	// Pathfinding.Path AstarPath/<CalculatePaths>c__Iterator7::<p>__7
	Path_t10 * ___U3CpU3E__7_8;
	// System.Boolean AstarPath/<CalculatePaths>c__Iterator7::<blockedBefore>__8
	bool ___U3CblockedBeforeU3E__8_9;
	// OnPathDelegate AstarPath/<CalculatePaths>c__Iterator7::<tmpOnPathPreSearch>__9
	OnPathDelegate_t17 * ___U3CtmpOnPathPreSearchU3E__9_10;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<startTicks>__10
	int64_t ___U3CstartTicksU3E__10_11;
	// System.Int64 AstarPath/<CalculatePaths>c__Iterator7::<totalTicks>__11
	int64_t ___U3CtotalTicksU3E__11_12;
	// OnPathDelegate AstarPath/<CalculatePaths>c__Iterator7::<tmpImmediateCallback>__12
	OnPathDelegate_t17 * ___U3CtmpImmediateCallbackU3E__12_13;
	// OnPathDelegate AstarPath/<CalculatePaths>c__Iterator7::<tmpOnPathPostSearch>__13
	OnPathDelegate_t17 * ___U3CtmpOnPathPostSearchU3E__13_14;
	// System.Int32 AstarPath/<CalculatePaths>c__Iterator7::$PC
	int32_t ___U24PC_15;
	// System.Object AstarPath/<CalculatePaths>c__Iterator7::$current
	Object_t * ___U24current_16;
	// System.Object AstarPath/<CalculatePaths>c__Iterator7::<$>_threadInfo
	Object_t * ___U3CU24U3E_threadInfo_17;
};
