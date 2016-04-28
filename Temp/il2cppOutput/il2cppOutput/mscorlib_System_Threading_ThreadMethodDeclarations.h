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

// System.Threading.Thread
struct Thread_t66;
// System.Threading.ThreadStart
struct ThreadStart_t2337;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t420;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2036;
// System.MulticastDelegate
struct MulticastDelegate_t378;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t2059;
// System.Threading.CompressedStack
struct CompressedStack_t2210;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Threading_ThreadPriority.h"
#include "mscorlib_System_Threading_ThreadState.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C" void Thread__ctor_m13212 (Thread_t66 * __this, ThreadStart_t2337 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
extern "C" void Thread__ctor_m1837 (Thread_t66 * __this, ParameterizedThreadStart_t420 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
extern "C" void Thread__cctor_m13213 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t2036 * Thread_get_CurrentContext_m13214 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t66 * Thread_CurrentThread_internal_m13215 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" Thread_t66 * Thread_get_CurrentThread_m13216 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::FreeLocalSlotValues(System.Int32,System.Boolean)
extern "C" void Thread_FreeLocalSlotValues_m13217 (Object_t * __this /* static, unused */, int32_t ___slot, bool ___thread_local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m13218 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep_internal(System.Int32)
extern "C" void Thread_Sleep_internal_m13219 (Object_t * __this /* static, unused */, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" void Thread_Sleep_m1849 (Object_t * __this /* static, unused */, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C" IntPtr_t Thread_Thread_internal_m13220 (Thread_t66 * __this, MulticastDelegate_t378 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
extern "C" void Thread_Thread_init_m13221 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t867 * Thread_GetCachedCurrentCulture_m13222 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t29* Thread_GetSerializedCurrentCulture_m13223 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m13224 (Thread_t66 * __this, CultureInfo_t867 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t867 * Thread_GetCachedCurrentUICulture_m13225 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t29* Thread_GetSerializedCurrentUICulture_m13226 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m13227 (Thread_t66 * __this, CultureInfo_t867 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" CultureInfo_t867 * Thread_get_CurrentCulture_m13228 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C" CultureInfo_t867 * Thread_get_CurrentUICulture_m13229 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Thread::get_IsAlive()
extern "C" bool Thread_get_IsAlive_m1823 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C" void Thread_set_IsBackground_m1839 (Thread_t66 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C" void Thread_SetName_internal_m13230 (Thread_t66 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C" void Thread_set_Name_m1838 (Thread_t66 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Priority(System.Threading.ThreadPriority)
extern "C" void Thread_set_Priority_m1841 (Thread_t66 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort_internal(System.Object)
extern "C" void Thread_Abort_internal_m13231 (Thread_t66 * __this, Object_t * ___stateInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
extern "C" void Thread_Abort_m1843 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Thread::Join_internal(System.Int32,System.IntPtr)
extern "C" bool Thread_Join_internal_m13232 (Thread_t66 * __this, int32_t ___ms, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Thread::Join(System.Int32)
extern "C" bool Thread_Join_m1842 (Thread_t66 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C" void Thread_Start_m13233 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m13234 (Thread_t66 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m13235 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C" void Thread_SetState_m13236 (Thread_t66 * __this, int32_t ___set, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C" void Thread_ClrState_m13237 (Thread_t66 * __this, int32_t ___clr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ThreadState System.Threading.Thread::GetState()
extern "C" int32_t Thread_GetState_m13238 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C" int32_t Thread_GetNewManagedId_m13239 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m13240 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern "C" ExecutionContext_t2059 * Thread_get_ExecutionContext_m13241 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" int32_t Thread_get_ManagedThreadId_m13242 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m13243 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start(System.Object)
extern "C" void Thread_Start_m1840 (Thread_t66 * __this, Object_t * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C" CompressedStack_t2210 * Thread_GetCompressedStack_m13244 (Thread_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
