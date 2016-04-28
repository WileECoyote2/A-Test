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

// System.ComponentModel.TypeDescriptor
struct TypeDescriptor_t971;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t1551;
// System.Type
struct Type_t;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1544;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.IServiceProvider
struct IServiceProvider_t1698;
// System.Type[]
struct TypeU5BU5D_t34;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Collections.Hashtable
struct Hashtable_t1377;
// System.ComponentModel.Design.IDesigner
struct IDesigner_t1701;
// System.ComponentModel.IComponent
struct IComponent_t1555;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t1523;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t1498;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1501;
// System.ComponentModel.TypeConverter
struct TypeConverter_t969;
// System.Collections.ArrayList
struct ArrayList_t1313;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t1525;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t1699;
// System.Collections.IList
struct IList_t1655;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t1552;
// System.Reflection.Assembly
struct Assembly_t406;
// System.Reflection.Module
struct Module_t1700;
// System.EventArgs
struct EventArgs_t981;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t1554;
// System.ComponentModel.TypeInfo
struct TypeInfo_t1556;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor::.ctor()
extern "C" void TypeDescriptor__ctor_m8039 (TypeDescriptor_t971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C" void TypeDescriptor__cctor_m8040 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::add_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C" void TypeDescriptor_add_Refreshed_m8041 (Object_t * __this /* static, unused */, RefreshEventHandler_t1551 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::remove_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C" void TypeDescriptor_remove_Refreshed_m8042 (Object_t * __this /* static, unused */, RefreshEventHandler_t1551 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::get_ComObjectType()
extern "C" Type_t * TypeDescriptor_get_ComObjectType_m8043 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Object,System.Attribute[])
extern "C" TypeDescriptionProvider_t1544 * TypeDescriptor_AddAttributes_m8044 (Object_t * __this /* static, unused */, Object_t * ___instance, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Type,System.Attribute[])
extern "C" TypeDescriptionProvider_t1544 * TypeDescriptor_AddAttributes_m8045 (Object_t * __this /* static, unused */, Type_t * ___type, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C" void TypeDescriptor_AddProvider_m8046 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t1544 * ___provider, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C" void TypeDescriptor_AddProvider_m8047 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t1544 * ___provider, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * TypeDescriptor_CreateInstance_m8048 (Object_t * __this /* static, unused */, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t34* ___argTypes, ObjectU5BU5D_t408* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddEditorTable(System.Type,System.Collections.Hashtable)
extern "C" void TypeDescriptor_AddEditorTable_m8049 (Object_t * __this /* static, unused */, Type_t * ___editorBaseType, Hashtable_t1377 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.IDesigner System.ComponentModel.TypeDescriptor::CreateDesigner(System.ComponentModel.IComponent,System.Type)
extern "C" Object_t * TypeDescriptor_CreateDesigner_m8050 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___designerBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.String,System.Type,System.Attribute[])
extern "C" EventDescriptor_t1523 * TypeDescriptor_CreateEvent_m8051 (Object_t * __this /* static, unused */, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C" EventDescriptor_t1523 * TypeDescriptor_CreateEvent_m8052 (Object_t * __this /* static, unused */, Type_t * ___componentType, EventDescriptor_t1523 * ___oldEventDescriptor, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.String,System.Type,System.Attribute[])
extern "C" PropertyDescriptor_t1498 * TypeDescriptor_CreateProperty_m8053 (Object_t * __this /* static, unused */, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C" PropertyDescriptor_t1498 * TypeDescriptor_CreateProperty_m8054 (Object_t * __this /* static, unused */, Type_t * ___componentType, PropertyDescriptor_t1498 * ___oldPropertyDescriptor, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C" AttributeCollection_t1501 * TypeDescriptor_GetAttributes_m8055 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object)
extern "C" AttributeCollection_t1501 * TypeDescriptor_GetAttributes_m8056 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object,System.Boolean)
extern "C" AttributeCollection_t1501 * TypeDescriptor_GetAttributes_m8057 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object)
extern "C" String_t* TypeDescriptor_GetClassName_m8058 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object,System.Boolean)
extern "C" String_t* TypeDescriptor_GetClassName_m8059 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object)
extern "C" String_t* TypeDescriptor_GetComponentName_m8060 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object,System.Boolean)
extern "C" String_t* TypeDescriptor_GetComponentName_m8061 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetFullComponentName(System.Object)
extern "C" String_t* TypeDescriptor_GetFullComponentName_m8062 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Type)
extern "C" String_t* TypeDescriptor_GetClassName_m8063 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object)
extern "C" TypeConverter_t969 * TypeDescriptor_GetConverter_m8064 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object,System.Boolean)
extern "C" TypeConverter_t969 * TypeDescriptor_GetConverter_m8065 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C" ArrayList_t1313 * TypeDescriptor_get_DefaultConverters_m8066 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C" TypeConverter_t969 * TypeDescriptor_GetConverter_m4518 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C" Type_t * TypeDescriptor_FindDefaultConverterType_m8067 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Type)
extern "C" EventDescriptor_t1523 * TypeDescriptor_GetDefaultEvent_m8068 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object)
extern "C" EventDescriptor_t1523 * TypeDescriptor_GetDefaultEvent_m8069 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object,System.Boolean)
extern "C" EventDescriptor_t1523 * TypeDescriptor_GetDefaultEvent_m8070 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Type)
extern "C" PropertyDescriptor_t1498 * TypeDescriptor_GetDefaultProperty_m8071 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object)
extern "C" PropertyDescriptor_t1498 * TypeDescriptor_GetDefaultProperty_m8072 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object,System.Boolean)
extern "C" PropertyDescriptor_t1498 * TypeDescriptor_GetDefaultProperty_m8073 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateEditor(System.Type,System.Type)
extern "C" Object_t * TypeDescriptor_CreateEditor_m8074 (Object_t * __this /* static, unused */, Type_t * ___t, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::FindEditorInTable(System.Type,System.Type,System.Collections.Hashtable)
extern "C" Object_t * TypeDescriptor_FindEditorInTable_m8075 (Object_t * __this /* static, unused */, Type_t * ___componentType, Type_t * ___editorBaseType, Hashtable_t1377 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Type,System.Type)
extern "C" Object_t * TypeDescriptor_GetEditor_m8076 (Object_t * __this /* static, unused */, Type_t * ___componentType, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type)
extern "C" Object_t * TypeDescriptor_GetEditor_m8077 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type,System.Boolean)
extern "C" Object_t * TypeDescriptor_GetEditor_m8078 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___editorBaseType, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object)
extern "C" EventDescriptorCollection_t1525 * TypeDescriptor_GetEvents_m8079 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type)
extern "C" EventDescriptorCollection_t1525 * TypeDescriptor_GetEvents_m8080 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[])
extern "C" EventDescriptorCollection_t1525 * TypeDescriptor_GetEvents_m8081 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Boolean)
extern "C" EventDescriptorCollection_t1525 * TypeDescriptor_GetEvents_m8082 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type,System.Attribute[])
extern "C" EventDescriptorCollection_t1525 * TypeDescriptor_GetEvents_m8083 (Object_t * __this /* static, unused */, Type_t * ___componentType, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[],System.Boolean)
extern "C" EventDescriptorCollection_t1525 * TypeDescriptor_GetEvents_m8084 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1531* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object)
extern "C" PropertyDescriptorCollection_t1533 * TypeDescriptor_GetProperties_m8085 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type)
extern "C" PropertyDescriptorCollection_t1533 * TypeDescriptor_GetProperties_m8086 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t1533 * TypeDescriptor_GetProperties_m8087 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C" PropertyDescriptorCollection_t1533 * TypeDescriptor_GetProperties_m8088 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1531* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Boolean)
extern "C" PropertyDescriptorCollection_t1533 * TypeDescriptor_GetProperties_m8089 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type,System.Attribute[])
extern "C" PropertyDescriptorCollection_t1533 * TypeDescriptor_GetProperties_m8090 (Object_t * __this /* static, unused */, Type_t * ___componentType, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Object)
extern "C" TypeDescriptionProvider_t1544 * TypeDescriptor_GetProvider_m8091 (Object_t * __this /* static, unused */, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
extern "C" TypeDescriptionProvider_t1544 * TypeDescriptor_GetProvider_m8092 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Object)
extern "C" Type_t * TypeDescriptor_GetReflectionType_m8093 (Object_t * __this /* static, unused */, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Type)
extern "C" Type_t * TypeDescriptor_GetReflectionType_m8094 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::CreateAssociation(System.Object,System.Object)
extern "C" void TypeDescriptor_CreateAssociation_m8095 (Object_t * __this /* static, unused */, Object_t * ___primary, Object_t * ___secondary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetAssociation(System.Type,System.Object)
extern "C" Object_t * TypeDescriptor_GetAssociation_m8096 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___primary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociation(System.Object,System.Object)
extern "C" void TypeDescriptor_RemoveAssociation_m8097 (Object_t * __this /* static, unused */, Object_t * ___primary, Object_t * ___secondary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociations(System.Object)
extern "C" void TypeDescriptor_RemoveAssociations_m8098 (Object_t * __this /* static, unused */, Object_t * ___primary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C" void TypeDescriptor_RemoveProvider_m8099 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t1544 * ___provider, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C" void TypeDescriptor_RemoveProvider_m8100 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t1544 * ___provider, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>)
extern "C" void TypeDescriptor_RemoveProvider_m8101 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t1544 * ___provider, LinkedList_1_t1699 * ___plist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::SortDescriptorArray(System.Collections.IList)
extern "C" void TypeDescriptor_SortDescriptorArray_m8102 (Object_t * __this /* static, unused */, Object_t * ___infos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::get_ComNativeDescriptorHandler()
extern "C" Object_t * TypeDescriptor_get_ComNativeDescriptorHandler_m8103 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::set_ComNativeDescriptorHandler(System.ComponentModel.IComNativeDescriptorHandler)
extern "C" void TypeDescriptor_set_ComNativeDescriptorHandler_m8104 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Assembly)
extern "C" void TypeDescriptor_Refresh_m8105 (Object_t * __this /* static, unused */, Assembly_t406 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Module)
extern "C" void TypeDescriptor_Refresh_m8106 (Object_t * __this /* static, unused */, Module_t1700 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Object)
extern "C" void TypeDescriptor_Refresh_m8107 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Type)
extern "C" void TypeDescriptor_Refresh_m8108 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C" void TypeDescriptor_OnComponentDisposed_m8109 (Object_t * __this /* static, unused */, Object_t * ___sender, EventArgs_t981 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C" ComponentInfo_t1554 * TypeDescriptor_GetComponentInfo_m8110 (Object_t * __this /* static, unused */, Object_t * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C" TypeInfo_t1556 * TypeDescriptor_GetTypeInfo_m8111 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C" Type_t * TypeDescriptor_GetTypeFromName_m8112 (Object_t * __this /* static, unused */, Object_t * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
