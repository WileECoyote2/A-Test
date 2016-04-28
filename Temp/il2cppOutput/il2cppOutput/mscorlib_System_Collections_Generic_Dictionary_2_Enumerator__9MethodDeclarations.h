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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t950;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16014_gshared (Enumerator_t2568 * __this, Dictionary_2_t950 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16014(__this, ___dictionary, method) (( void (*) (Enumerator_t2568 *, Dictionary_2_t950 *, const MethodInfo*))Enumerator__ctor_m16014_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16015_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16015(__this, method) (( Object_t * (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16015_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16016_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16016(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16017_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16017(__this, method) (( Object_t * (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16018_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16018(__this, method) (( Object_t * (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16018_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16019_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16019(__this, method) (( bool (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_MoveNext_m16019_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2564  Enumerator_get_Current_m16020_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16020(__this, method) (( KeyValuePair_2_t2564  (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_get_Current_m16020_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16021_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16021(__this, method) (( Object_t * (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_get_CurrentKey_m16021_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16022_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16022(__this, method) (( int32_t (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_get_CurrentValue_m16022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m16023_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16023(__this, method) (( void (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_VerifyState_m16023_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16024_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16024(__this, method) (( void (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_VerifyCurrent_m16024_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m16025_gshared (Enumerator_t2568 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16025(__this, method) (( void (*) (Enumerator_t2568 *, const MethodInfo*))Enumerator_Dispose_m16025_gshared)(__this, method)
