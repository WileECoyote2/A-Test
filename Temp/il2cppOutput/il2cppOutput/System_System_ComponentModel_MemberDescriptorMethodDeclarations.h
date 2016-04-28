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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1524;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.Collections.IList
struct IList_t1655;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1501;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t1487;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m7867 (MemberDescriptor_t1524 * __this, String_t* ___name, AttributeU5BU5D_t1531* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m7868 (MemberDescriptor_t1524 * __this, MemberDescriptor_t1524 * ___reference, AttributeU5BU5D_t1531* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C" AttributeU5BU5D_t1531* MemberDescriptor_get_AttributeArray_m7869 (MemberDescriptor_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C" void MemberDescriptor_FillAttributes_m7870 (MemberDescriptor_t1524 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C" AttributeCollection_t1501 * MemberDescriptor_get_Attributes_m7871 (MemberDescriptor_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C" AttributeCollection_t1501 * MemberDescriptor_CreateAttributeCollection_m7872 (MemberDescriptor_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C" String_t* MemberDescriptor_get_Name_m7873 (MemberDescriptor_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C" int32_t MemberDescriptor_GetHashCode_m7874 (MemberDescriptor_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C" bool MemberDescriptor_Equals_m7875 (MemberDescriptor_t1524 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.MemberDescriptor::get_DefaultComparer()
extern "C" Object_t * MemberDescriptor_get_DefaultComparer_m7876 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
