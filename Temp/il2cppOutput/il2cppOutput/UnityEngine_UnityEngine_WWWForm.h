#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t621;
// System.Collections.Generic.List`1<System.String>
struct List_1_t325;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "mscorlib_System_Object.h"

// UnityEngine.WWWForm
struct  WWWForm_t620  : public Object_t
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t621 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t325 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t325 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t325 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t29* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};
