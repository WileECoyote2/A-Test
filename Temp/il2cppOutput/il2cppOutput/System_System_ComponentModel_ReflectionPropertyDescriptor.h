#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;

#include "System_System_ComponentModel_PropertyDescriptor.h"

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t1537  : public PropertyDescriptor_t1498
{
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;
};
