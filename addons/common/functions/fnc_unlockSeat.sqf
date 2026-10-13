#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Unlocks the seat that was locked for the unit with ttt_common_fnc_lockSeat.
 *
 *  Parameter(s):
 *      0: OBJECT - Unit
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [player] call ttt_common_fnc_unlockSeat
 *
 * Public: NO
 */

params ["_unit"];

private _seat = _unit getVariable [QGVAR(lockedSeat), []];
if (_seat isEqualTo []) exitWith {};
_seat params ["_vehicle", "_turret"];

[_vehicle, [_turret, false]] remoteExecCall ["lockTurret"];
TRACE_3("Unlocked seat",_unit,_vehicle,_turret);

_unit setVariable [QGVAR(lockedSeat), nil, true];
