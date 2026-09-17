#include "..\script_component.hpp"
/*
* Author: Andx
*
* Description:
* Removes a vehicle shield previously added by ttt_w_shields_fnc_addVehicleShield. Only future damage stops
* being capped - damage already taken before removal is not reverted.
*
* Guards on the locally stored HandleDamage handler index rather than the broadcast hasVHS flag: this runs on
* every machine (see XEH_postInit.sqf), and hasVHS could already read false there due to another machine's
* broadcast arriving first, which would incorrectly skip removing THIS machine's own handler.
*
* Arguments:
* 0: Target vehicle <OBJECT>
*
* Return Value:
* Whether a shield was actually removed <BOOLEAN>
*
* Public: No
*/
params [
    ["_target", objNull, [objNull]]
];

if (isNull _target) exitWith {false};

private _ehIndex = _target getVariable [QGVAR(vhsEHIndex), -1];
if (_ehIndex == -1) exitWith {false};

_target removeEventHandler ["HandleDamage", _ehIndex];
_target setVariable [QGVAR(vhsEHIndex), -1];
_target setVariable [QGVAR(hasVHS), false, true];

true
