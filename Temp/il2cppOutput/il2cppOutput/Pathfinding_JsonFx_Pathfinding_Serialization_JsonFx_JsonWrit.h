#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t951;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct List_1_t943;

#include "mscorlib_System_Object.h"

// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct  JsonWriterSettings_t157  : public Object_t
{
	// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::dateTimeSerializer
	WriteDelegate_1_t951 * ___dateTimeSerializer_0;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::maxDepth
	int32_t ___maxDepth_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::newLine
	String_t* ___newLine_2;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::prettyPrint
	bool ___prettyPrint_3;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::tab
	String_t* ___tab_4;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::typeHintName
	String_t* ___typeHintName_5;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::useXmlSerializationAttributes
	bool ___useXmlSerializationAttributes_6;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter> Pathfinding.Serialization.JsonFx.JsonWriterSettings::converters
	List_1_t943 * ___converters_7;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::<HandleCyclicReferences>k__BackingField
	bool ___U3CHandleCyclicReferencesU3Ek__BackingField_8;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::<DebugMode>k__BackingField
	bool ___U3CDebugModeU3Ek__BackingField_9;
};
