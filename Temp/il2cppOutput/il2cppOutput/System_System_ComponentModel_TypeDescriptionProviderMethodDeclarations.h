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

// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern "C" void TypeDescriptionProvider__ctor_m8030 (TypeDescriptionProvider_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C" void TypeDescriptionProvider__ctor_m8031 (TypeDescriptionProvider_t1544 * __this, TypeDescriptionProvider_t1544 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * TypeDescriptionProvider_CreateInstance_m8032 (TypeDescriptionProvider_t1544 * __this, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t34* ___argTypes, ObjectU5BU5D_t408* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
