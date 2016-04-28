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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2863;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2851;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19856_gshared (ShimEnumerator_t2863 * __this, Dictionary_2_t2851 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19856(__this, ___host, method) (( void (*) (ShimEnumerator_t2863 *, Dictionary_2_t2851 *, const MethodInfo*))ShimEnumerator__ctor_m19856_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19857_gshared (ShimEnumerator_t2863 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19857(__this, method) (( bool (*) (ShimEnumerator_t2863 *, const MethodInfo*))ShimEnumerator_MoveNext_m19857_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m19858_gshared (ShimEnumerator_t2863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19858(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t2863 *, const MethodInfo*))ShimEnumerator_get_Entry_m19858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19859_gshared (ShimEnumerator_t2863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19859(__this, method) (( Object_t * (*) (ShimEnumerator_t2863 *, const MethodInfo*))ShimEnumerator_get_Key_m19859_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19860_gshared (ShimEnumerator_t2863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19860(__this, method) (( Object_t * (*) (ShimEnumerator_t2863 *, const MethodInfo*))ShimEnumerator_get_Value_m19860_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19861_gshared (ShimEnumerator_t2863 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19861(__this, method) (( Object_t * (*) (ShimEnumerator_t2863 *, const MethodInfo*))ShimEnumerator_get_Current_m19861_gshared)(__this, method)
