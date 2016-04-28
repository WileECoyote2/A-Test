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

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t2090;
// System.MarshalByRefObject
struct MarshalByRefObject_t1585;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2084;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2099;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2036;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2366;

#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t1585 * ProxyAttribute_CreateInstance_m12177 (ProxyAttribute_t2090 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t2084 * ProxyAttribute_CreateProxy_m12178 (ProxyAttribute_t2090 * __this, ObjRef_t2099 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t2036 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m12179 (ProxyAttribute_t2090 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m12180 (ProxyAttribute_t2090 * __this, Context_t2036 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
