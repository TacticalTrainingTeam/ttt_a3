#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the gunner can move to the first passenger seat, i.e. if that seat is free.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Unit
 *
 *  Returns:
 *      BOOLEAN - Can move.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canMoveGunnerToPassenger
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_vehicle turretUnit MARDER_GUNNER_TURRET_PATH isEqualTo _player} &&
{isNull (((fullCrew [_vehicle, "cargo", true]) param [0, []]) param [0, objNull])}
