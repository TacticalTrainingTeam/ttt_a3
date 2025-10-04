#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedtowing_fnc_findSurfaceASLUnderModel
 *
 * Public: No
 */

params ["_object", "_modelOffset", "_canFloat"];

[_object, (_object modelToWorldVisual _modelOffset), _canFloat] call FUNC(findSurfaceASLUnderPosition)
