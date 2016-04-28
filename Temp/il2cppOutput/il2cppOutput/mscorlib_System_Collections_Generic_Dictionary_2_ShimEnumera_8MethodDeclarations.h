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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t3063;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t3050;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m22600_gshared (ShimEnumerator_t3063 * __this, Dictionary_2_t3050 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m22600(__this, ___host, method) (( void (*) (ShimEnumerator_t3063 *, Dictionary_2_t3050 *, const MethodInfo*))ShimEnumerator__ctor_m22600_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m22601_gshared (ShimEnumerator_t3063 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m22601(__this, method) (( bool (*) (ShimEnumerator_t3063 *, const MethodInfo*))ShimEnumerator_MoveNext_m22601_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m22602_gshared (ShimEnumerator_t3063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m22602(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t3063 *, const MethodInfo*))ShimEnumerator_get_Entry_m22602_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m22603_gshared (ShimEnumerator_t3063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m22603(__this, method) (( Object_t * (*) (ShimEnumerator_t3063 *, const MethodInfo*))ShimEnumerator_get_Key_m22603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m22604_gshared (ShimEnumerator_t3063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m22604(__this, method) (( Object_t * (*) (ShimEnumerator_t3063 *, const MethodInfo*))ShimEnumerator_get_Value_m22604_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m22605_gshared (ShimEnumerator_t3063 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m22605(__this, method) (( Object_t * (*) (ShimEnumerator_t3063 *, const MethodInfo*))ShimEnumerator_get_Current_m22605_gshared)(__this, method)
