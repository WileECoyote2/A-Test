#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t100;
// UnityEngine.Transform
struct Transform_t4;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityStandardAssets.Utility.CameraRefocus
struct  CameraRefocus_t336  : public Object_t
{
	// UnityEngine.Camera UnityStandardAssets.Utility.CameraRefocus::Camera
	Camera_t100 * ___Camera_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::Lookatpoint
	Vector3_t7  ___Lookatpoint_1;
	// UnityEngine.Transform UnityStandardAssets.Utility.CameraRefocus::Parent
	Transform_t4 * ___Parent_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::m_OrigCameraPos
	Vector3_t7  ___m_OrigCameraPos_3;
	// System.Boolean UnityStandardAssets.Utility.CameraRefocus::m_Refocus
	bool ___m_Refocus_4;
};
