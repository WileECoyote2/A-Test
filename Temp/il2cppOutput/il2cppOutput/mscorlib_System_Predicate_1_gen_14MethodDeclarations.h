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

// System.Predicate`1<Pathfinding.Int3>
struct Predicate_1_t2653;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"

// System.Void System.Predicate`1<Pathfinding.Int3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17071_gshared (Predicate_1_t2653 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17071(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2653 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17071_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Pathfinding.Int3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17072_gshared (Predicate_1_t2653 * __this, Int3_t111  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17072(__this, ___obj, method) (( bool (*) (Predicate_1_t2653 *, Int3_t111 , const MethodInfo*))Predicate_1_Invoke_m17072_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Pathfinding.Int3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17073_gshared (Predicate_1_t2653 * __this, Int3_t111  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17073(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2653 *, Int3_t111 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17073_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Pathfinding.Int3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17074_gshared (Predicate_1_t2653 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17074(__this, ___result, method) (( bool (*) (Predicate_1_t2653 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17074_gshared)(__this, ___result, method)
