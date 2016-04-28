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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t3029;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3018;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m22292_gshared (ShimEnumerator_t3029 * __this, Dictionary_2_t3018 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m22292(__this, ___host, method) (( void (*) (ShimEnumerator_t3029 *, Dictionary_2_t3018 *, const MethodInfo*))ShimEnumerator__ctor_m22292_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m22293_gshared (ShimEnumerator_t3029 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m22293(__this, method) (( bool (*) (ShimEnumerator_t3029 *, const MethodInfo*))ShimEnumerator_MoveNext_m22293_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m22294_gshared (ShimEnumerator_t3029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m22294(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t3029 *, const MethodInfo*))ShimEnumerator_get_Entry_m22294_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m22295_gshared (ShimEnumerator_t3029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m22295(__this, method) (( Object_t * (*) (ShimEnumerator_t3029 *, const MethodInfo*))ShimEnumerator_get_Key_m22295_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m22296_gshared (ShimEnumerator_t3029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m22296(__this, method) (( Object_t * (*) (ShimEnumerator_t3029 *, const MethodInfo*))ShimEnumerator_get_Value_m22296_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m22297_gshared (ShimEnumerator_t3029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m22297(__this, method) (( Object_t * (*) (ShimEnumerator_t3029 *, const MethodInfo*))ShimEnumerator_get_Current_m22297_gshared)(__this, method)
