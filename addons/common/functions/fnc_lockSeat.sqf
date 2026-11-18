#include "..\script_component.hpp"
/*
 * Author: Timi007
 * Source: PzGrenBtl402 addons/Common/functions/fnc_lockSeat.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 * Locks the given turret seat and remembers it on the unit. The seat is unlocked again by ttt_common_fnc_unlockSeat, e.g. when the unit leaves the vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Turret path <ARRAY>
 * 2: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [vehicle player, [0, 0], player] call ttt_common_fnc_lockSeat
 *
 * Public: No
 */

params ["_vehicle", "_turret", "_unit"];

[_vehicle, [_turret, true]] remoteExecCall ["lockTurret"];
TRACE_3("Locked seat",_unit,_vehicle,_turret);
_unit setVariable [QGVAR(lockedSeat), [_vehicle, _turret], true];
