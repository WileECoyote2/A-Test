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

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t1921;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t723;
// System.Reflection.Binder
struct Binder_t897;
// System.Type[]
struct TypeU5BU5D_t34;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t898;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t890;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t1721;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t895;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1976;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t894;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.String[]
struct StringU5BU5D_t63;
// System.Reflection.Assembly
struct Assembly_t406;
// System.Reflection.Module
struct Module_t1700;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_RuntimeTypeHandle.h"

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m11357 (GenericTypeParameterBuilder_t1921 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m11358 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t723 * GenericTypeParameterBuilder_GetConstructorImpl_m11359 (GenericTypeParameterBuilder_t1921 * __this, int32_t ___bindingAttr, Binder_t897 * ___binder, int32_t ___callConvention, TypeU5BU5D_t34* ___types, ParameterModifierU5BU5D_t898* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t890* GenericTypeParameterBuilder_GetConstructors_m11360 (GenericTypeParameterBuilder_t1921 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m11361 (GenericTypeParameterBuilder_t1921 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetEvents()
extern "C" EventInfoU5BU5D_t1721* GenericTypeParameterBuilder_GetEvents_m11362 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetEvents(System.Reflection.BindingFlags)
extern "C" EventInfoU5BU5D_t1721* GenericTypeParameterBuilder_GetEvents_m11363 (GenericTypeParameterBuilder_t1921 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m11364 (GenericTypeParameterBuilder_t1921 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t895* GenericTypeParameterBuilder_GetFields_m11365 (GenericTypeParameterBuilder_t1921 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetInterface(System.String,System.Boolean)
extern "C" Type_t * GenericTypeParameterBuilder_GetInterface_m11366 (GenericTypeParameterBuilder_t1921 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t34* GenericTypeParameterBuilder_GetInterfaces_m11367 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1976* GenericTypeParameterBuilder_GetMethods_m11368 (GenericTypeParameterBuilder_t1921 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m11369 (GenericTypeParameterBuilder_t1921 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t897 * ___binder, int32_t ___callConvention, TypeU5BU5D_t34* ___types, ParameterModifierU5BU5D_t898* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t894* GenericTypeParameterBuilder_GetProperties_m11370 (GenericTypeParameterBuilder_t1921 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m11371 (GenericTypeParameterBuilder_t1921 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t897 * ___binder, Type_t * ___returnType, TypeU5BU5D_t34* ___types, ParameterModifierU5BU5D_t898* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m11372 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m11373 (GenericTypeParameterBuilder_t1921 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m11374 (GenericTypeParameterBuilder_t1921 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m11375 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m11376 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m11377 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m11378 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m11379 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m11380 (GenericTypeParameterBuilder_t1921 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t897 * ___binder, Object_t * ___target, ObjectU5BU5D_t408* ___args, ParameterModifierU5BU5D_t898* ___modifiers, CultureInfo_t867 * ___culture, StringU5BU5D_t63* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m11381 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m11382 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C" Assembly_t406 * GenericTypeParameterBuilder_get_Assembly_m11383 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m11384 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m11385 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m11386 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool GenericTypeParameterBuilder_IsDefined_m11387 (GenericTypeParameterBuilder_t1921 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t408* GenericTypeParameterBuilder_GetCustomAttributes_m11388 (GenericTypeParameterBuilder_t1921 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t408* GenericTypeParameterBuilder_GetCustomAttributes_m11389 (GenericTypeParameterBuilder_t1921 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m11390 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m11391 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C" Module_t1700 * GenericTypeParameterBuilder_get_Module_m11392 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m11393 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m11394 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1717  GenericTypeParameterBuilder_get_TypeHandle_m11395 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t34* GenericTypeParameterBuilder_GetGenericArguments_m11396 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m11397 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m11398 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m11399 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m11400 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m11401 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C" Exception_t52 * GenericTypeParameterBuilder_not_supported_m11402 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C" String_t* GenericTypeParameterBuilder_ToString_m11403 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C" bool GenericTypeParameterBuilder_Equals_m11404 (GenericTypeParameterBuilder_t1921 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m11405 (GenericTypeParameterBuilder_t1921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m11406 (GenericTypeParameterBuilder_t1921 * __this, TypeU5BU5D_t34* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
