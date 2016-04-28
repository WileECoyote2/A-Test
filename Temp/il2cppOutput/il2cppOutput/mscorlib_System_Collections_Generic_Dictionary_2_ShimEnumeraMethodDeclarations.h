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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2540;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2527;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15600_gshared (ShimEnumerator_t2540 * __this, Dictionary_2_t2527 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15600(__this, ___host, method) (( void (*) (ShimEnumerator_t2540 *, Dictionary_2_t2527 *, const MethodInfo*))ShimEnumerator__ctor_m15600_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15601_gshared (ShimEnumerator_t2540 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15601(__this, method) (( bool (*) (ShimEnumerator_t2540 *, const MethodInfo*))ShimEnumerator_MoveNext_m15601_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m15602_gshared (ShimEnumerator_t2540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15602(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t2540 *, const MethodInfo*))ShimEnumerator_get_Entry_m15602_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15603_gshared (ShimEnumerator_t2540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15603(__this, method) (( Object_t * (*) (ShimEnumerator_t2540 *, const MethodInfo*))ShimEnumerator_get_Key_m15603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15604_gshared (ShimEnumerator_t2540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15604(__this, method) (( Object_t * (*) (ShimEnumerator_t2540 *, const MethodInfo*))ShimEnumerator_get_Value_m15604_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15605_gshared (ShimEnumerator_t2540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15605(__this, method) (( Object_t * (*) (ShimEnumerator_t2540 *, const MethodInfo*))ShimEnumerator_get_Current_m15605_gshared)(__this, method)
