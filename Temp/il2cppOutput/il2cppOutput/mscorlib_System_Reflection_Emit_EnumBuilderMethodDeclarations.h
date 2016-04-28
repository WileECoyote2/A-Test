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

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1918;
// System.Reflection.Assembly
struct Assembly_t406;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1700;
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
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t1721;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t895;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1976;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t894;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.String[]
struct StringU5BU5D_t63;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C" Assembly_t406 * EnumBuilder_get_Assembly_m11305 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m11306 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C" Type_t * EnumBuilder_get_BaseType_m11307 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C" Type_t * EnumBuilder_get_DeclaringType_m11308 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C" String_t* EnumBuilder_get_FullName_m11309 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C" Module_t1700 * EnumBuilder_get_Module_m11310 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C" String_t* EnumBuilder_get_Name_m11311 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C" String_t* EnumBuilder_get_Namespace_m11312 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C" Type_t * EnumBuilder_get_ReflectedType_m11313 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1717  EnumBuilder_get_TypeHandle_m11314 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m11315 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m11316 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t723 * EnumBuilder_GetConstructorImpl_m11317 (EnumBuilder_t1918 * __this, int32_t ___bindingAttr, Binder_t897 * ___binder, int32_t ___callConvention, TypeU5BU5D_t34* ___types, ParameterModifierU5BU5D_t898* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t890* EnumBuilder_GetConstructors_m11318 (EnumBuilder_t1918 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t408* EnumBuilder_GetCustomAttributes_m11319 (EnumBuilder_t1918 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t408* EnumBuilder_GetCustomAttributes_m11320 (EnumBuilder_t1918 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C" Type_t * EnumBuilder_GetElementType_m11321 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * EnumBuilder_GetEvent_m11322 (EnumBuilder_t1918 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.EnumBuilder::GetEvents()
extern "C" EventInfoU5BU5D_t1721* EnumBuilder_GetEvents_m11323 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo[] System.Reflection.Emit.EnumBuilder::GetEvents(System.Reflection.BindingFlags)
extern "C" EventInfoU5BU5D_t1721* EnumBuilder_GetEvents_m11324 (EnumBuilder_t1918 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * EnumBuilder_GetField_m11325 (EnumBuilder_t1918 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t895* EnumBuilder_GetFields_m11326 (EnumBuilder_t1918 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetInterface(System.String,System.Boolean)
extern "C" Type_t * EnumBuilder_GetInterface_m11327 (EnumBuilder_t1918 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t34* EnumBuilder_GetInterfaces_m11328 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m11329 (EnumBuilder_t1918 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t897 * ___binder, int32_t ___callConvention, TypeU5BU5D_t34* ___types, ParameterModifierU5BU5D_t898* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1976* EnumBuilder_GetMethods_m11330 (EnumBuilder_t1918 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t894* EnumBuilder_GetProperties_m11331 (EnumBuilder_t1918 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m11332 (EnumBuilder_t1918 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t897 * ___binder, Type_t * ___returnType, TypeU5BU5D_t34* ___types, ParameterModifierU5BU5D_t898* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C" bool EnumBuilder_HasElementTypeImpl_m11333 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * EnumBuilder_InvokeMember_m11334 (EnumBuilder_t1918 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t897 * ___binder, Object_t * ___target, ObjectU5BU5D_t408* ___args, ParameterModifierU5BU5D_t898* ___modifiers, CultureInfo_t867 * ___culture, StringU5BU5D_t63* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C" bool EnumBuilder_IsArrayImpl_m11335 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C" bool EnumBuilder_IsByRefImpl_m11336 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C" bool EnumBuilder_IsPointerImpl_m11337 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C" bool EnumBuilder_IsPrimitiveImpl_m11338 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C" bool EnumBuilder_IsValueTypeImpl_m11339 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool EnumBuilder_IsDefined_m11340 (EnumBuilder_t1918 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t52 * EnumBuilder_CreateNotSupportedException_m11341 (EnumBuilder_t1918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
