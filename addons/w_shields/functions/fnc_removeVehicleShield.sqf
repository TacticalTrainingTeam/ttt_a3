#include "..\script_component.hpp"
/*
* Author: Andx
*
* Description:
* Removes a vehicle shield previously added by ttt_w_shields_fnc_addVehicleShield. Only future damage stops
* being capped - damage already taken before removal is not reverted.
*
* Arguments:
* 0: Target vehicle <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/
params [
    ["_target", objNull, [objNull]]
];

if (isNull _target || {!(_target getVariable [QGVAR(hasVHS), false])}) exitWith {};

_target setVariable [QGVAR(hasVHS), false, true];

private _ehIndex = _target getVariable [QGVAR(vhsEHIndex), -1];
if (_ehIndex != -1) then {
    _target removeEventHandler ["HandleDamage", _ehIndex];
};
