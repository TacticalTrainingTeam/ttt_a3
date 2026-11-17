#include "..\script_component.hpp"
/*
 * Author: Timi007
 * Source: PzGrenBtl402 addons/Common/functions/fnc_unlockSeat.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 * Unlocks the seat that was locked for the unit with ttt_common_fnc_lockSeat.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call ttt_common_fnc_unlockSeat
 *
 * Public: No
 */

params ["_unit"];

private _seat = _unit getVariable [QGVAR(lockedSeat), []];
if (_seat isEqualTo []) exitWith {};
_seat params ["_vehicle", "_turret"];

[_vehicle, [_turret, false]] remoteExecCall ["lockTurret"];
TRACE_3("Unlocked seat",_unit,_vehicle,_turret);

_unit setVariable [QGVAR(lockedSeat), nil, true];
