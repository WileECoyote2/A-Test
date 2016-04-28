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
// System.MarshalByRefObject
struct MarshalByRefObject_t1585;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2039;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2036;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t2050;

#include "mscorlib_System_Runtime_Remoting_Identity.h"

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t1755  : public Identity_t2092
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t1585 * ____serverObject_8;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.ServerIdentity::_serverSink
	Object_t * ____serverSink_9;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t2036 * ____context_10;
	// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::_lease
	Lease_t2050 * ____lease_11;
};
