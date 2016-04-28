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

// AIFollow
struct AIFollow_t201;
// Pathfinding.Path
struct Path_t10;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void AIFollow::.ctor()
extern "C" void AIFollow__ctor_m881 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Start()
extern "C" void AIFollow_Start_m882 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Reset()
extern "C" void AIFollow_Reset_m883 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::OnPathComplete(Pathfinding.Path)
extern "C" void AIFollow_OnPathComplete_m884 (AIFollow_t201 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AIFollow::WaitToRepath()
extern "C" Object_t * AIFollow_WaitToRepath_m885 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Stop()
extern "C" void AIFollow_Stop_m886 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Resume()
extern "C" void AIFollow_Resume_m887 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Repath()
extern "C" void AIFollow_Repath_m888 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::PathToTarget(UnityEngine.Vector3)
extern "C" void AIFollow_PathToTarget_m889 (AIFollow_t201 * __this, Vector3_t7  ___targetPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::ReachedEndOfPath()
extern "C" void AIFollow_ReachedEndOfPath_m890 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::Update()
extern "C" void AIFollow_Update_m891 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIFollow::OnDrawGizmos()
extern "C" void AIFollow_OnDrawGizmos_m892 (AIFollow_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
