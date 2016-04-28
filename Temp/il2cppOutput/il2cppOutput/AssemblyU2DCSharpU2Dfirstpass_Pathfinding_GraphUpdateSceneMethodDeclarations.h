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

// Pathfinding.GraphUpdateScene
struct GraphUpdateScene_t80;
// AstarPath
struct AstarPath_t48;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void Pathfinding.GraphUpdateScene::.ctor()
extern "C" void GraphUpdateScene__ctor_m384 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::Start()
extern "C" void GraphUpdateScene_Start_m385 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::OnPostScan()
extern "C" void GraphUpdateScene_OnPostScan_m386 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::InvertSettings()
extern "C" void GraphUpdateScene_InvertSettings_m387 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::RecalcConvex()
extern "C" void GraphUpdateScene_RecalcConvex_m388 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::ToggleUseWorldSpace()
extern "C" void GraphUpdateScene_ToggleUseWorldSpace_m389 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::LockToY()
extern "C" void GraphUpdateScene_LockToY_m390 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::Apply(AstarPath)
extern "C" void GraphUpdateScene_Apply_m391 (GraphUpdateScene_t80 * __this, AstarPath_t48 * ___active, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Pathfinding.GraphUpdateScene::GetBounds()
extern "C" Bounds_t171  GraphUpdateScene_GetBounds_m392 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::Apply()
extern "C" void GraphUpdateScene_Apply_m393 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::OnDrawGizmos()
extern "C" void GraphUpdateScene_OnDrawGizmos_m394 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::OnDrawGizmosSelected()
extern "C" void GraphUpdateScene_OnDrawGizmosSelected_m395 (GraphUpdateScene_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphUpdateScene::OnDrawGizmos(System.Boolean)
extern "C" void GraphUpdateScene_OnDrawGizmos_m396 (GraphUpdateScene_t80 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
