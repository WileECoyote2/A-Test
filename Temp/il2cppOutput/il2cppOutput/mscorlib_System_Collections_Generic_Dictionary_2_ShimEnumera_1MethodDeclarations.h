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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2606;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t436;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16476_gshared (ShimEnumerator_t2606 * __this, Dictionary_2_t436 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16476(__this, ___host, method) (( void (*) (ShimEnumerator_t2606 *, Dictionary_2_t436 *, const MethodInfo*))ShimEnumerator__ctor_m16476_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16477_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16477(__this, method) (( bool (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_MoveNext_m16477_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m16478_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16478(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Entry_m16478_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16479_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16479(__this, method) (( Object_t * (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Key_m16479_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16480_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16480(__this, method) (( Object_t * (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Value_m16480_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16481_gshared (ShimEnumerator_t2606 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16481(__this, method) (( Object_t * (*) (ShimEnumerator_t2606 *, const MethodInfo*))ShimEnumerator_get_Current_m16481_gshared)(__this, method)
