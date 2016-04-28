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

// GetNextTargetDelegate
struct GetNextTargetDelegate_t381;
// System.Object
struct Object_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;
// Pathfinding.Path
struct Path_t10;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_ArrayTypes.h"

// System.Void GetNextTargetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetNextTargetDelegate__ctor_m1664 (GetNextTargetDelegate_t381 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] GetNextTargetDelegate::Invoke(Pathfinding.Path,UnityEngine.Vector3)
extern "C" Vector3U5BU5D_t82* GetNextTargetDelegate_Invoke_m1665 (GetNextTargetDelegate_t381 * __this, Path_t10 * ___p, Vector3_t7  ___currentPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Vector3U5BU5D_t82* pinvoke_delegate_wrapper_GetNextTargetDelegate_t381(Il2CppObject* delegate, Path_t10 * ___p, Vector3_t7  ___currentPosition);
// System.IAsyncResult GetNextTargetDelegate::BeginInvoke(Pathfinding.Path,UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C" Object_t * GetNextTargetDelegate_BeginInvoke_m1666 (GetNextTargetDelegate_t381 * __this, Path_t10 * ___p, Vector3_t7  ___currentPosition, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] GetNextTargetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Vector3U5BU5D_t82* GetNextTargetDelegate_EndInvoke_m1667 (GetNextTargetDelegate_t381 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
