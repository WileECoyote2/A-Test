#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1313;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t1552;
// System.Collections.Hashtable
struct Hashtable_t1377;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1548;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t1549;
// System.EventHandler
struct EventHandler_t1550;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t1551;

#include "mscorlib_System_Object.h"

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t971  : public Object_t
{
};
struct TypeDescriptor_t971_StaticFields{
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	Object_t * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t1313 * ___defaultConverters_1;
	// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::descriptorHandler
	Object_t * ___descriptorHandler_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t1377 * ___componentTable_3;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t1377 * ___typeTable_4;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::editors
	Hashtable_t1377 * ___editors_5;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	Object_t * ___typeDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t1548 * ___typeDescriptionProviders_7;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	Object_t * ___componentDescriptionProvidersLock_8;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t1549 * ___componentDescriptionProviders_9;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t1550 * ___onDispose_10;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t1551 * ___Refreshed_11;
};
