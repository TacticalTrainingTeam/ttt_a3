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
 * [params] call ttt_advancedslingloading_fnc_attachRopesActionCheck
 *
 * Public: No
 */

private ["_vehicleWithIndex","_cargo"];

_vehicleWithIndex = player getVariable ["ASL_Ropes_Vehicle", [objNull,0]];
_cargo = cursorTarget;
[_vehicleWithIndex select 0,_cargo] call FUNC(canAttachRopes);
