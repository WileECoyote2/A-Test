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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2574;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t950;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16061_gshared (ShimEnumerator_t2574 * __this, Dictionary_2_t950 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16061(__this, ___host, method) (( void (*) (ShimEnumerator_t2574 *, Dictionary_2_t950 *, const MethodInfo*))ShimEnumerator__ctor_m16061_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16062_gshared (ShimEnumerator_t2574 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16062(__this, method) (( bool (*) (ShimEnumerator_t2574 *, const MethodInfo*))ShimEnumerator_MoveNext_m16062_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m16063_gshared (ShimEnumerator_t2574 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16063(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t2574 *, const MethodInfo*))ShimEnumerator_get_Entry_m16063_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16064_gshared (ShimEnumerator_t2574 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16064(__this, method) (( Object_t * (*) (ShimEnumerator_t2574 *, const MethodInfo*))ShimEnumerator_get_Key_m16064_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16065_gshared (ShimEnumerator_t2574 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16065(__this, method) (( Object_t * (*) (ShimEnumerator_t2574 *, const MethodInfo*))ShimEnumerator_get_Value_m16065_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16066_gshared (ShimEnumerator_t2574 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16066(__this, method) (( Object_t * (*) (ShimEnumerator_t2574 *, const MethodInfo*))ShimEnumerator_get_Current_m16066_gshared)(__this, method)
