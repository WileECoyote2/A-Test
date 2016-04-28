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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<Pathfinding.Int2,System.Object>
struct ShimEnumerator_t2698;
// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>
struct Dictionary_2_t2685;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<Pathfinding.Int2,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17531_gshared (ShimEnumerator_t2698 * __this, Dictionary_2_t2685 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17531(__this, ___host, method) (( void (*) (ShimEnumerator_t2698 *, Dictionary_2_t2685 *, const MethodInfo*))ShimEnumerator__ctor_m17531_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<Pathfinding.Int2,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17532_gshared (ShimEnumerator_t2698 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17532(__this, method) (( bool (*) (ShimEnumerator_t2698 *, const MethodInfo*))ShimEnumerator_MoveNext_m17532_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<Pathfinding.Int2,System.Object>::get_Entry()
extern "C" DictionaryEntry_t963  ShimEnumerator_get_Entry_m17533_gshared (ShimEnumerator_t2698 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17533(__this, method) (( DictionaryEntry_t963  (*) (ShimEnumerator_t2698 *, const MethodInfo*))ShimEnumerator_get_Entry_m17533_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Pathfinding.Int2,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17534_gshared (ShimEnumerator_t2698 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17534(__this, method) (( Object_t * (*) (ShimEnumerator_t2698 *, const MethodInfo*))ShimEnumerator_get_Key_m17534_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Pathfinding.Int2,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17535_gshared (ShimEnumerator_t2698 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17535(__this, method) (( Object_t * (*) (ShimEnumerator_t2698 *, const MethodInfo*))ShimEnumerator_get_Value_m17535_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<Pathfinding.Int2,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17536_gshared (ShimEnumerator_t2698 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17536(__this, method) (( Object_t * (*) (ShimEnumerator_t2698 *, const MethodInfo*))ShimEnumerator_get_Current_m17536_gshared)(__this, method)
