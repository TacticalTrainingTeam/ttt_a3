#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Unlocks the commander turret. This is here for emergencies should the normal system not unlock the seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorTarget] call ttt_compat_rnt_fnc_fixGetInBug
 *
 * Public: NO
 */

params ["_vehicle"];

private _config = configOf _vehicle;
private _commanderTurret = getArray (_config >> QGVAR(commanderTurret));
private _commanderHigherTurret = getArray (_config >> QGVAR(commanderHigherTurret));

if (isNull (_vehicle turretUnit _commanderHigherTurret)) then {
    [_vehicle, [_commanderTurret, false]] remoteExecCall ["lockTurret"];

    _vehicle setVariable [getText (_config >> QGVAR(binoVariable)), false, true];
};
