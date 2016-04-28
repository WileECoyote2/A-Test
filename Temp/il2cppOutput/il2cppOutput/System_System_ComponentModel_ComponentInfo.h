#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.IComponent
struct IComponent_t1555;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t1525;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;

#include "System_System_ComponentModel_Info.h"

// System.ComponentModel.ComponentInfo
struct  ComponentInfo_t1554  : public Info_t1553
{
	// System.ComponentModel.IComponent System.ComponentModel.ComponentInfo::_component
	Object_t * ____component_6;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::_events
	EventDescriptorCollection_t1525 * ____events_7;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t1533 * ____properties_8;
};
