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

// OnScanStatus
struct OnScanStatus_t57;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Progress.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_ProgressMethodDeclarations.h"

// System.Void OnScanStatus::.ctor(System.Object,System.IntPtr)
extern "C" void OnScanStatus__ctor_m1680 (OnScanStatus_t57 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanStatus::Invoke(Pathfinding.Progress)
extern "C" void OnScanStatus_Invoke_m1681 (OnScanStatus_t57 * __this, Progress_t170  ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnScanStatus_t57(Il2CppObject* delegate, Progress_t170  ___progress);
// System.IAsyncResult OnScanStatus::BeginInvoke(Pathfinding.Progress,System.AsyncCallback,System.Object)
extern "C" Object_t * OnScanStatus_BeginInvoke_m1682 (OnScanStatus_t57 * __this, Progress_t170  ___progress, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanStatus::EndInvoke(System.IAsyncResult)
extern "C" void OnScanStatus_EndInvoke_m1683 (OnScanStatus_t57 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
