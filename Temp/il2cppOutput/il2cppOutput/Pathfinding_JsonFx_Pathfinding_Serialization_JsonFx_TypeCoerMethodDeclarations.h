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

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t942;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t952;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t957;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t955;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.IEnumerable
struct IEnumerable_t389;
// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
extern "C" void TypeCoercionUtility__ctor_m4425 (TypeCoercionUtility_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::get_MemberMapCache()
extern "C" Dictionary_2_t952 * TypeCoercionUtility_get_MemberMapCache_m4426 (TypeCoercionUtility_t942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Collections.IDictionary,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C" Object_t * TypeCoercionUtility_ProcessTypeHint_m4427 (TypeCoercionUtility_t942 * __this, Object_t * ___result, String_t* ___typeInfo, Type_t ** ___objectType, Dictionary_2_t955 ** ___memberMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C" Object_t * TypeCoercionUtility_InstantiateObject_m4428 (TypeCoercionUtility_t942 * __this, Type_t * ___objectType, Dictionary_2_t955 ** ___memberMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberMap(System.Type)
extern "C" Dictionary_2_t955 * TypeCoercionUtility_GetMemberMap_m4429 (TypeCoercionUtility_t942 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CreateMemberMap(System.Type)
extern "C" Dictionary_2_t955 * TypeCoercionUtility_CreateMemberMap_m4430 (TypeCoercionUtility_t942 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberInfo(System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.String,System.Reflection.MemberInfo&)
extern "C" Type_t * TypeCoercionUtility_GetMemberInfo_m4431 (Object_t * __this /* static, unused */, Dictionary_2_t955 * ___memberMap, String_t* ___memberName, MemberInfo_t ** ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::SetMemberValue(System.Object,System.Type,System.Reflection.MemberInfo,System.Object)
extern "C" void TypeCoercionUtility_SetMemberValue_m4432 (TypeCoercionUtility_t942 * __this, Object_t * ___result, Type_t * ___memberType, MemberInfo_t * ___memberInfo, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Object)
extern "C" Object_t * TypeCoercionUtility_CoerceType_m4433 (TypeCoercionUtility_t942 * __this, Type_t * ___targetType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Collections.IDictionary,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C" Object_t * TypeCoercionUtility_CoerceType_m4434 (TypeCoercionUtility_t942 * __this, Type_t * ___targetType, Object_t * ___value, Dictionary_2_t955 ** ___memberMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceList(System.Type,System.Type,System.Collections.IEnumerable)
extern "C" Object_t * TypeCoercionUtility_CoerceList_m4435 (TypeCoercionUtility_t942 * __this, Type_t * ___targetType, Type_t * ___arrayType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceArray(System.Type,System.Collections.IEnumerable)
extern "C" Array_t * TypeCoercionUtility_CoerceArray_m4436 (TypeCoercionUtility_t942 * __this, Type_t * ___elementType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::IsNullable(System.Type)
extern "C" bool TypeCoercionUtility_IsNullable_m4437 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
