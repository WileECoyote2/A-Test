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

// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t3328;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t3332;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera_0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m26552_gshared (Enumerator_t3336 * __this, SortedDictionary_2_t3328 * ___dic, const MethodInfo* method);
#define Enumerator__ctor_m26552(__this, ___dic, method) (( void (*) (Enumerator_t3336 *, SortedDictionary_2_t3328 *, const MethodInfo*))Enumerator__ctor_m26552_gshared)(__this, ___dic, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26553_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26553(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m26553_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26554_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26554(__this, method) (( Object_t * (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m26554_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26555_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26555(__this, method) (( Object_t * (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m26555_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26556_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m26556(__this, method) (( Object_t * (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m26556_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2529  Enumerator_get_Current_m26557_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m26557(__this, method) (( KeyValuePair_2_t2529  (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_get_Current_m26557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m26558_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m26558(__this, method) (( bool (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_MoveNext_m26558_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m26559_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m26559(__this, method) (( void (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_Dispose_m26559_gshared)(__this, method)
// System.Collections.Generic.SortedDictionary`2/Node<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_CurrentNode()
extern "C" Node_t3332 * Enumerator_get_CurrentNode_m26560_gshared (Enumerator_t3336 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentNode_m26560(__this, method) (( Node_t3332 * (*) (Enumerator_t3336 *, const MethodInfo*))Enumerator_get_CurrentNode_m26560_gshared)(__this, method)
