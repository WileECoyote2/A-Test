﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t2048;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t2049;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void RenewalDelegate__ctor_m12007 (RenewalDelegate_t2048 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C" TimeSpan_t422  RenewalDelegate_Invoke_m12008 (RenewalDelegate_t2048 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" TimeSpan_t422  pinvoke_delegate_wrapper_RenewalDelegate_t2048(Il2CppObject* delegate, Object_t * ___lease);
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C" Object_t * RenewalDelegate_BeginInvoke_m12009 (RenewalDelegate_t2048 * __this, Object_t * ___lease, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C" TimeSpan_t422  RenewalDelegate_EndInvoke_m12010 (RenewalDelegate_t2048 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
