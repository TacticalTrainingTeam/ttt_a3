#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action check for attaching ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can attach ropes <BOOL>
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_attachRopesActionCheck
 *
 * Public: No
 */

private ["_vehicleWithIndex","_cargo"];
_vehicleWithIndex = player getVariable ["ASL_Ropes_Vehicle", [objNull,0]];
_cargo = cursorTarget;
[_vehicleWithIndex select 0,_cargo] call FUNC(canAttachRopes);
