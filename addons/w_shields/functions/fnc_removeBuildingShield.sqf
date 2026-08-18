#include "..\script_component.hpp"
#include "defines.inc"
/*
* Author: Andx
*
* Description:
* Removes a building shield previously added by ttt_w_shields_fnc_buildingShield. Windows already popped stay
* popped - only the unbreakable-structure protection is undone. Doors locked/opened by the Building Shield
* module's per-door attributes are reset to closed.
*
* Execute: On Server
*
* Arguments:
* 0: Target building <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/
params [
    ["_target", objNull, [objNull]]
];

if (isNull _target || {!(_target getVariable [QGVAR(hasBuildingShield), false])}) exitWith {};

_target setVariable [QGVAR(hasBuildingShield), false, true];

private _ehIndex = _target getVariable [QGVAR(buildingEHIndex), -1];
if (_ehIndex != -1) then {
    _target removeEventHandler ["HandleDamage", _ehIndex];
};

private _doorStates = _target getVariable [QGVAR(doorStates), []];
if (_doorStates isNotEqualTo []) then {
    [_target, _doorStates apply {DOOR_STATE_CLOSED}] call FUNC(setBuildingDoorStates);
};
