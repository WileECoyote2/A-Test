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

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t1939;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1976;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t891;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t897;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.Reflection.Module
struct Module_t1700;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C" int32_t PropertyBuilder_get_Attributes_m11471 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C" bool PropertyBuilder_get_CanRead_m11472 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C" bool PropertyBuilder_get_CanWrite_m11473 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C" Type_t * PropertyBuilder_get_DeclaringType_m11474 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C" String_t* PropertyBuilder_get_Name_m11475 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C" Type_t * PropertyBuilder_get_PropertyType_m11476 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C" Type_t * PropertyBuilder_get_ReflectedType_m11477 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t1976* PropertyBuilder_GetAccessors_m11478 (PropertyBuilder_t1939 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t408* PropertyBuilder_GetCustomAttributes_m11479 (PropertyBuilder_t1939 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t408* PropertyBuilder_GetCustomAttributes_m11480 (PropertyBuilder_t1939 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetGetMethod_m11481 (PropertyBuilder_t1939 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t891* PropertyBuilder_GetIndexParameters_m11482 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetSetMethod_m11483 (PropertyBuilder_t1939 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyBuilder_GetValue_m11484 (PropertyBuilder_t1939 * __this, Object_t * ___obj, ObjectU5BU5D_t408* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * PropertyBuilder_GetValue_m11485 (PropertyBuilder_t1939 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t897 * ___binder, ObjectU5BU5D_t408* ___index, CultureInfo_t867 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool PropertyBuilder_IsDefined_m11486 (PropertyBuilder_t1939 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyBuilder_SetValue_m11487 (PropertyBuilder_t1939 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t408* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void PropertyBuilder_SetValue_m11488 (PropertyBuilder_t1939 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t897 * ___binder, ObjectU5BU5D_t408* ___index, CultureInfo_t867 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C" Module_t1700 * PropertyBuilder_get_Module_m11489 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C" Exception_t52 * PropertyBuilder_not_supported_m11490 (PropertyBuilder_t1939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
