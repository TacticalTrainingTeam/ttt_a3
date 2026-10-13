#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Locks the given turret seat and remembers it on the unit. The seat is unlocked again by ttt_common_fnc_unlockSeat, e.g. when the unit leaves the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: ARRAY - Turret path
 *      2: OBJECT - Unit
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, [0, 0], player] call ttt_common_fnc_lockSeat
 *
 * Public: NO
 */

params ["_vehicle", "_turret", "_unit"];

[_vehicle, [_turret, true]] remoteExecCall ["lockTurret"];
TRACE_3("Locked seat",_unit,_vehicle,_turret);
_unit setVariable [QGVAR(lockedSeat), [_vehicle, _turret], true];
