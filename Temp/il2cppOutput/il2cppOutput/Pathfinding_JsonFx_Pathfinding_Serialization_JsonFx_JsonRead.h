#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t942;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct List_1_t943;

#include "mscorlib_System_Object.h"

// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct  JsonReaderSettings_t158  : public Object_t
{
	// Pathfinding.Serialization.JsonFx.TypeCoercionUtility Pathfinding.Serialization.JsonFx.JsonReaderSettings::Coercion
	TypeCoercionUtility_t942 * ___Coercion_0;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::allowUnquotedObjectKeys
	bool ___allowUnquotedObjectKeys_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonReaderSettings::typeHintName
	String_t* ___typeHintName_2;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter> Pathfinding.Serialization.JsonFx.JsonReaderSettings::converters
	List_1_t943 * ___converters_3;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::<HandleCyclicReferences>k__BackingField
	bool ___U3CHandleCyclicReferencesU3Ek__BackingField_4;
};
