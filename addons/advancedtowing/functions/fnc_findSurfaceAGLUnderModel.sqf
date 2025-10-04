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
 * [params] call PREFIX_advancedtowing_fnc_findSurfaceAGLUnderModel
 *
 * Public: No
 */

params ["_object", "_modelOffset", "_returnSurfaceAGL", "_canFloat"];

_returnSurfaceAGL = [_object, _modelOffset, _canFloat] call FUNC(findSurfaceASLUnderModel);

_returnSurfaceAGL = ASLToAGL _returnSurfaceAGL;
