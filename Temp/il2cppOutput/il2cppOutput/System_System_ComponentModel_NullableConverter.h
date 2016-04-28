#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t969;

#include "System_System_ComponentModel_TypeConverter.h"

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1532  : public TypeConverter_t969
{
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t969 * ___underlyingTypeConverter_2;
};
