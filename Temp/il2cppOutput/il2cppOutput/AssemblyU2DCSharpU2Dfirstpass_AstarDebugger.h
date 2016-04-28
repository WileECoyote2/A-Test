#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t94;
// System.Text.StringBuilder
struct StringBuilder_t95;
// System.String
struct String_t;
// AstarDebugger/GraphPoint[]
struct GraphPointU5BU5D_t96;
// System.Single[]
struct SingleU5BU5D_t97;
// UnityEngine.GUIStyle
struct GUIStyle_t99;
// UnityEngine.Camera
struct Camera_t100;
// AstarDebugger/PathTypeDebug[]
struct PathTypeDebugU5BU5D_t101;
// System.Func`1<System.Int32>
struct Func_1_t92;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"

// AstarDebugger
struct  AstarDebugger_t93  : public MonoBehaviour_t3
{
	// System.Int32 AstarDebugger::yOffset
	int32_t ___yOffset_2;
	// System.Boolean AstarDebugger::show
	bool ___show_3;
	// System.Boolean AstarDebugger::showInEditor
	bool ___showInEditor_4;
	// System.Boolean AstarDebugger::showFPS
	bool ___showFPS_5;
	// System.Boolean AstarDebugger::showPathProfile
	bool ___showPathProfile_6;
	// System.Boolean AstarDebugger::showMemProfile
	bool ___showMemProfile_7;
	// System.Boolean AstarDebugger::showGraph
	bool ___showGraph_8;
	// System.Int32 AstarDebugger::graphBufferSize
	int32_t ___graphBufferSize_9;
	// UnityEngine.Font AstarDebugger::font
	Font_t94 * ___font_10;
	// System.Int32 AstarDebugger::fontSize
	int32_t ___fontSize_11;
	// System.Text.StringBuilder AstarDebugger::text
	StringBuilder_t95 * ___text_12;
	// System.String AstarDebugger::cachedText
	String_t* ___cachedText_13;
	// System.Single AstarDebugger::lastUpdate
	float ___lastUpdate_14;
	// AstarDebugger/GraphPoint[] AstarDebugger::graph
	GraphPointU5BU5D_t96* ___graph_15;
	// System.Single AstarDebugger::delayedDeltaTime
	float ___delayedDeltaTime_16;
	// System.Single AstarDebugger::lastCollect
	float ___lastCollect_17;
	// System.Single AstarDebugger::lastCollectNum
	float ___lastCollectNum_18;
	// System.Single AstarDebugger::delta
	float ___delta_19;
	// System.Single AstarDebugger::lastDeltaTime
	float ___lastDeltaTime_20;
	// System.Int32 AstarDebugger::allocRate
	int32_t ___allocRate_21;
	// System.Int32 AstarDebugger::lastAllocMemory
	int32_t ___lastAllocMemory_22;
	// System.Single AstarDebugger::lastAllocSet
	float ___lastAllocSet_23;
	// System.Int32 AstarDebugger::allocMem
	int32_t ___allocMem_24;
	// System.Int32 AstarDebugger::collectAlloc
	int32_t ___collectAlloc_25;
	// System.Int32 AstarDebugger::peakAlloc
	int32_t ___peakAlloc_26;
	// System.Int32 AstarDebugger::fpsDropCounterSize
	int32_t ___fpsDropCounterSize_27;
	// System.Single[] AstarDebugger::fpsDrops
	SingleU5BU5D_t97* ___fpsDrops_28;
	// UnityEngine.Rect AstarDebugger::boxRect
	Rect_t98  ___boxRect_29;
	// UnityEngine.GUIStyle AstarDebugger::style
	GUIStyle_t99 * ___style_30;
	// UnityEngine.Camera AstarDebugger::cam
	Camera_t100 * ___cam_31;
	// System.Single AstarDebugger::graphWidth
	float ___graphWidth_32;
	// System.Single AstarDebugger::graphHeight
	float ___graphHeight_33;
	// System.Single AstarDebugger::graphOffset
	float ___graphOffset_34;
	// System.Int32 AstarDebugger::maxVecPool
	int32_t ___maxVecPool_35;
	// System.Int32 AstarDebugger::maxNodePool
	int32_t ___maxNodePool_36;
	// AstarDebugger/PathTypeDebug[] AstarDebugger::debugTypes
	PathTypeDebugU5BU5D_t101* ___debugTypes_37;
};
struct AstarDebugger_t93_StaticFields{
	// System.Func`1<System.Int32> AstarDebugger::<>f__am$cache24
	Func_1_t92 * ___U3CU3Ef__amU24cache24_38;
	// System.Func`1<System.Int32> AstarDebugger::<>f__am$cache25
	Func_1_t92 * ___U3CU3Ef__amU24cache25_39;
};
