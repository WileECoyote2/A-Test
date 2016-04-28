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

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t374;
// UnityEngine.Transform[]
struct TransformU5BU5D_t350;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C" void WaypointCircuit__ctor_m1629 (WaypointCircuit_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C" float WaypointCircuit_get_Length_m1630 (WaypointCircuit_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C" void WaypointCircuit_set_Length_m1631 (WaypointCircuit_t374 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C" TransformU5BU5D_t350* WaypointCircuit_get_Waypoints_m1632 (WaypointCircuit_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C" void WaypointCircuit_Awake_m1633 (WaypointCircuit_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C" RoutePoint_t375  WaypointCircuit_GetRoutePoint_m1634 (WaypointCircuit_t374 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C" Vector3_t7  WaypointCircuit_GetRoutePosition_m1635 (WaypointCircuit_t374 * __this, float ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  WaypointCircuit_CatmullRom_m1636 (WaypointCircuit_t374 * __this, Vector3_t7  ___p0, Vector3_t7  ___p1, Vector3_t7  ___p2, Vector3_t7  ___p3, float ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C" void WaypointCircuit_CachePositionsAndDistances_m1637 (WaypointCircuit_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C" void WaypointCircuit_OnDrawGizmos_m1638 (WaypointCircuit_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C" void WaypointCircuit_OnDrawGizmosSelected_m1639 (WaypointCircuit_t374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C" void WaypointCircuit_DrawGizmos_m1640 (WaypointCircuit_t374 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
