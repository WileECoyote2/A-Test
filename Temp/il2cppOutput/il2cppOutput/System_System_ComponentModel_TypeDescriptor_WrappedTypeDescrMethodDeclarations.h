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

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct WrappedTypeDescriptionProvider_t1546;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1544;
// System.Object
struct Object_t;
// System.IServiceProvider
struct IServiceProvider_t1698;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t34;
// System.Object[]
struct ObjectU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C" void WrappedTypeDescriptionProvider__ctor_m8034 (WrappedTypeDescriptionProvider_t1546 * __this, TypeDescriptionProvider_t1544 * ___wrapped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::get_Wrapped()
extern "C" TypeDescriptionProvider_t1544 * WrappedTypeDescriptionProvider_get_Wrapped_m8035 (WrappedTypeDescriptionProvider_t1546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::set_Wrapped(System.ComponentModel.TypeDescriptionProvider)
extern "C" void WrappedTypeDescriptionProvider_set_Wrapped_m8036 (WrappedTypeDescriptionProvider_t1546 * __this, TypeDescriptionProvider_t1544 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * WrappedTypeDescriptionProvider_CreateInstance_m8037 (WrappedTypeDescriptionProvider_t1546 * __this, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t34* ___argTypes, ObjectU5BU5D_t408* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
