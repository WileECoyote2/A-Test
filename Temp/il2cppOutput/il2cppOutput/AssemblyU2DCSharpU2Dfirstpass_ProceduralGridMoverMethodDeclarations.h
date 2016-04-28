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

// ProceduralGridMover
struct ProceduralGridMover_t186;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ProceduralGridMover::.ctor()
extern "C" void ProceduralGridMover__ctor_m834 (ProceduralGridMover_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProceduralGridMover::get_updatingGraph()
extern "C" bool ProceduralGridMover_get_updatingGraph_m835 (ProceduralGridMover_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralGridMover::set_updatingGraph(System.Boolean)
extern "C" void ProceduralGridMover_set_updatingGraph_m836 (ProceduralGridMover_t186 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralGridMover::Start()
extern "C" void ProceduralGridMover_Start_m837 (ProceduralGridMover_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralGridMover::Update()
extern "C" void ProceduralGridMover_Update_m838 (ProceduralGridMover_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProceduralGridMover::PointToGraphSpace(UnityEngine.Vector3)
extern "C" Vector3_t7  ProceduralGridMover_PointToGraphSpace_m839 (ProceduralGridMover_t186 * __this, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralGridMover::UpdateGraph()
extern "C" void ProceduralGridMover_UpdateGraph_m840 (ProceduralGridMover_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ProceduralGridMover::UpdateGraphCoroutine()
extern "C" Object_t * ProceduralGridMover_UpdateGraphCoroutine_m841 (ProceduralGridMover_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
