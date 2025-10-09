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
 * [params] call PREFIX_advancedtowing_fnc_canDropTowRopes
 *
 * Public: No
 */

!isNull (player getVariable [QGVAR(Ropes_Vehicle), objNull]) && isNull objectParent player;
