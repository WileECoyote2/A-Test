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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2937;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21182_gshared (Enumerator_t2944 * __this, Dictionary_2_t2937 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21182(__this, ___dictionary, method) (( void (*) (Enumerator_t2944 *, Dictionary_2_t2937 *, const MethodInfo*))Enumerator__ctor_m21182_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21183_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21183(__this, method) (( Object_t * (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21183_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21184_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21184(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21184_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21185_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21185(__this, method) (( Object_t * (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21185_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21186_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21186(__this, method) (( Object_t * (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21186_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21187_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21187(__this, method) (( bool (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_MoveNext_m21187_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2939  Enumerator_get_Current_m21188_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21188(__this, method) (( KeyValuePair_2_t2939  (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_get_Current_m21188_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21189_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21189(__this, method) (( Object_t * (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_get_CurrentKey_m21189_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m21190_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21190(__this, method) (( int64_t (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_get_CurrentValue_m21190_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m21191_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21191(__this, method) (( void (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_VerifyState_m21191_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21192_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21192(__this, method) (( void (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_VerifyCurrent_m21192_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m21193_gshared (Enumerator_t2944 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21193(__this, method) (( void (*) (Enumerator_t2944 *, const MethodInfo*))Enumerator_Dispose_m21193_gshared)(__this, method)
