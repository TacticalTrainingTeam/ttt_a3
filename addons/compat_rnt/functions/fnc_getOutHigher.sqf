#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_getOutCommanderHigher.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), generalized for commander and loader seats, merged with fnc_getOutLoaderHigher.sqf
 *
 *  Description:
 *      Moves the player from the higher seat back into the normal seat of the given seat group (commander or loader) and unlocks it.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: OBJECT - Player
 *      2: STRING - Seat, "commander" or "loader" (default: "commander")
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player, "commander"] call ttt_compat_rnt_fnc_getOutHigher
 *
 * Public: NO
 */

params ["_vehicle", "_player", ["_seat", "commander"]];

([_vehicle, _seat] call FUNC(getSeatData)) params ["_turret", "", "", "_binoVariable"];

_player action ["moveToTurret", _vehicle, _turret];
[QEGVAR(common,unlockSeat), [_player]] call CBA_fnc_localEvent;
_vehicle setVariable [_binoVariable, false, true];
