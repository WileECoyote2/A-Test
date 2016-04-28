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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2950;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2937;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21229_gshared (ShimEnumerator_t2950 * __this, Dictionary_2_t2937 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21229(__this, ___host, method) (( void (*) (ShimEnumerator_t2950 *, Dictionary_2_t2937 *, const MethodInfo*))ShimEnumerator__ctor_m21229_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21230_gshared (ShimEnumerator_t2950 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21230(__this, method) (( bool (*) (ShimEnumerator_t2950 *, const MethodInfo*))ShimEnumerator_MoveNext_m21230_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m21231_gshared (ShimEnumerator_t2950 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21231(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t2950 *, const MethodInfo*))ShimEnumerator_get_Entry_m21231_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21232_gshared (ShimEnumerator_t2950 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21232(__this, method) (( Object_t * (*) (ShimEnumerator_t2950 *, const MethodInfo*))ShimEnumerator_get_Key_m21232_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21233_gshared (ShimEnumerator_t2950 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21233(__this, method) (( Object_t * (*) (ShimEnumerator_t2950 *, const MethodInfo*))ShimEnumerator_get_Value_m21233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21234_gshared (ShimEnumerator_t2950 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21234(__this, method) (( Object_t * (*) (ShimEnumerator_t2950 *, const MethodInfo*))ShimEnumerator_get_Current_m21234_gshared)(__this, method)
