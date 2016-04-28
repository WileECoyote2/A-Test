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

// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>
struct Dictionary_2_t2685;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17484_gshared (Enumerator_t2692 * __this, Dictionary_2_t2685 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17484(__this, ___dictionary, method) (( void (*) (Enumerator_t2692 *, Dictionary_2_t2685 *, const MethodInfo*))Enumerator__ctor_m17484_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17485_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17485(__this, method) (( Object_t * (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17485_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17486_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17486(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17486_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17487_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17487(__this, method) (( Object_t * (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17487_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17488_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17488(__this, method) (( Object_t * (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17489_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17489(__this, method) (( bool (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_MoveNext_m17489_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2687  Enumerator_get_Current_m17490_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17490(__this, method) (( KeyValuePair_2_t2687  (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_get_Current_m17490_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::get_CurrentKey()
extern "C" Int2_t112  Enumerator_get_CurrentKey_m17491_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17491(__this, method) (( Int2_t112  (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_get_CurrentKey_m17491_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m17492_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17492(__this, method) (( Object_t * (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_get_CurrentValue_m17492_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m17493_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17493(__this, method) (( void (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_VerifyState_m17493_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17494_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17494(__this, method) (( void (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_VerifyCurrent_m17494_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.Int2,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m17495_gshared (Enumerator_t2692 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17495(__this, method) (( void (*) (Enumerator_t2692 *, const MethodInfo*))Enumerator_Dispose_m17495_gshared)(__this, method)
