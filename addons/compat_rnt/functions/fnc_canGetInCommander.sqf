#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if any player is able to get in the commander seat of the given vehicle. Does not check if the seats are locked.
 *      The turret paths are read from the vehicle config (ttt_compat_rnt_commanderTurret and ttt_compat_rnt_commanderHigherTurret).
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *
 *  Returns:
 *      BOOLEAN - Can get in commander.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_canGetInCommander
 *
 * Public: NO
 */

params ["_vehicle"];

private _config = configOf _vehicle;
private _commanderTurret = getArray (_config >> QGVAR(commanderTurret));
private _commanderHigherTurret = getArray (_config >> QGVAR(commanderHigherTurret));

alive _vehicle &&
{isNull (_vehicle turretUnit _commanderTurret)} &&
{isNull (_vehicle turretUnit _commanderHigherTurret)}
