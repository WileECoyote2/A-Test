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

// System.Predicate`1<System.UInt32>
struct Predicate_1_t2642;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16921_gshared (Predicate_1_t2642 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16921(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2642 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16921_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.UInt32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16922_gshared (Predicate_1_t2642 * __this, uint32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16922(__this, ___obj, method) (( bool (*) (Predicate_1_t2642 *, uint32_t, const MethodInfo*))Predicate_1_Invoke_m16922_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16923_gshared (Predicate_1_t2642 * __this, uint32_t ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16923(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2642 *, uint32_t, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16923_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16924_gshared (Predicate_1_t2642 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16924(__this, ___result, method) (( bool (*) (Predicate_1_t2642 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16924_gshared)(__this, ___result, method)
