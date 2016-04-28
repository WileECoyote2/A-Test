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

// UnityStandardAssets.Utility.TimedObjectActivator
struct TimedObjectActivator_t371;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t365;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern "C" void TimedObjectActivator__ctor_m1619 (TimedObjectActivator_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern "C" void TimedObjectActivator_Awake_m1620 (TimedObjectActivator_t371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Activate_m1621 (TimedObjectActivator_t371 * __this, Entry_t365 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Deactivate_m1622 (TimedObjectActivator_t371 * __this, Entry_t365 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_ReloadLevel_m1623 (TimedObjectActivator_t371 * __this, Entry_t365 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
