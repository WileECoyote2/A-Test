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

// System.Predicate`1<System.Byte>
struct Predicate_1_t3183;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m24226_gshared (Predicate_1_t3183 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m24226(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3183 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24226_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m24227_gshared (Predicate_1_t3183 * __this, uint8_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m24227(__this, ___obj, method) (( bool (*) (Predicate_1_t3183 *, uint8_t, const MethodInfo*))Predicate_1_Invoke_m24227_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m24228_gshared (Predicate_1_t3183 * __this, uint8_t ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m24228(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3183 *, uint8_t, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24228_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m24229_gshared (Predicate_1_t3183 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m24229(__this, ___result, method) (( bool (*) (Predicate_1_t3183 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24229_gshared)(__this, ___result, method)
