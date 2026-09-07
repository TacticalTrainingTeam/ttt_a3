#include "..\script_component.hpp"
/*
 * Author: Andx
 * Server-side handler for a coin-check start request: creates the shared ground weapon holder
 * and becomes the authoritative source for the check, then announces it to everyone via a CBA
 * global event. Ignored if a check is already running - only one can be active at a time.
 *
 * Arguments:
 * 0: Initiator netId <STRING>
 * 1: Initiator's position <POSITION>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unitNetId", "_pos"];

if (!isNil QGVAR(activeCheck) && {(GVAR(activeCheck) select 2) > CBA_missionTime}) exitWith {};
if (isNull (objectFromNetId _unitNetId)) exitWith {};

private _holder = createVehicle ["GroundWeaponHolder", _pos, [], 0, "CAN_COLLIDE"];
_holder setPosATL _pos;

private _endTime = CBA_missionTime + RESPONSE_TIME;

GVAR(activeCheck) = [netId _holder, _pos, _endTime, _unitNetId];

[QGVAR(checkStarted), [netId _holder, _pos, _endTime, _unitNetId]] call CBA_fnc_globalEvent;
