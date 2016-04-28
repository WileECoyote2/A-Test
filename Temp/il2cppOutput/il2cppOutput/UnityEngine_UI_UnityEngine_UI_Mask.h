#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t498;
// UnityEngine.UI.Graphic
struct Graphic_t1159;
// UnityEngine.RectTransform
struct RectTransform_t608;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"

// UnityEngine.UI.Mask
struct  Mask_t1241  : public UIBehaviour_t1091
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t498 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t1159 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t608 * ___m_RectTransform_5;
};
