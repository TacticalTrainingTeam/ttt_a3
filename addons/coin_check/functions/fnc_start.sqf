#include "..\script_component.hpp"
/*
 * Author: Andx
 * Starts a new coin check: spawns a shared ground weapon holder at the initiator's position,
 * announces it to everyone via a CBA global event and immediately tosses the initiator's own
 * coin into it.
 *
 * Arguments:
 * 0: Initiator <OBJECT>
 * 1: Initiator's coin classname <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_class"];

private _pos = getPosATL _unit;
private _holder = createVehicle ["GroundWeaponHolder", _pos, [], 0, "CAN_COLLIDE"];
_holder setPosATL _pos;

private _radius = GVAR(radius);
private _duration = GVAR(responseTime);
private _endTime = CBA_missionTime + _duration;

[QGVAR(checkStarted), [netId _holder, _pos, _radius, _endTime, netId _unit]] call CBA_fnc_globalEvent;

[_unit, _class, _holder] call FUNC(respond);
GVAR(respondedTo) pushBackUnique netId _holder;

[format [LLSTRING(started), _radius, _duration], true] call ace_common_fnc_displayText;
