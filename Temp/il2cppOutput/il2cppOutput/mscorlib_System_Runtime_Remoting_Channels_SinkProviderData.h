﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1313;
// System.Collections.Hashtable
struct Hashtable_t1377;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t2035  : public Object_t
{
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t1313 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t1377 * ___properties_2;
};
