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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t3370;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3358;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m27001_gshared (ShimEnumerator_t3370 * __this, Dictionary_2_t3358 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m27001(__this, ___host, method) (( void (*) (ShimEnumerator_t3370 *, Dictionary_2_t3358 *, const MethodInfo*))ShimEnumerator__ctor_m27001_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m27002_gshared (ShimEnumerator_t3370 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m27002(__this, method) (( bool (*) (ShimEnumerator_t3370 *, const MethodInfo*))ShimEnumerator_MoveNext_m27002_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m27003_gshared (ShimEnumerator_t3370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m27003(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t3370 *, const MethodInfo*))ShimEnumerator_get_Entry_m27003_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m27004_gshared (ShimEnumerator_t3370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m27004(__this, method) (( Object_t * (*) (ShimEnumerator_t3370 *, const MethodInfo*))ShimEnumerator_get_Key_m27004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m27005_gshared (ShimEnumerator_t3370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m27005(__this, method) (( Object_t * (*) (ShimEnumerator_t3370 *, const MethodInfo*))ShimEnumerator_get_Value_m27005_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m27006_gshared (ShimEnumerator_t3370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m27006(__this, method) (( Object_t * (*) (ShimEnumerator_t3370 *, const MethodInfo*))ShimEnumerator_get_Current_m27006_gshared)(__this, method)
