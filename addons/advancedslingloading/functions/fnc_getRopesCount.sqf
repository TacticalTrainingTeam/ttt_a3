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
 * [params] call ttt_advancedslingloading_fnc_getRopesCount
 *
 * Public: No
 */

params ["_vehicle"];

count (_vehicle getVariable [QGVAR(custom_ropes),[]]);
