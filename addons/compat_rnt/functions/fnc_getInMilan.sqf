#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_getInMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Moves the player onto the Milan of the Marder and locks the commander seat for them.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_getInMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

_player action ["moveToTurret", _vehicle, MARDER_MILAN_TURRET_PATH];
[QEGVAR(common,lockSeat), [_vehicle, MARDER_COMMANDER_TURRET_PATH, _player]] call CBA_fnc_localEvent;
