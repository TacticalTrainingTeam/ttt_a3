#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_getOutMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, the commander seat state is reset with resetSeatState
 *
 *  Description:
 *      Moves the player from the Milan of the Marder back into the commander seat and unlocks it.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Player
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player, player] call ttt_compat_rnt_fnc_getOutMilan
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

_player action ["moveToTurret", _vehicle, MARDER_COMMANDER_TURRET_PATH];
[QEGVAR(common,unlockSeat), [_player]] call CBA_fnc_localEvent;
[_vehicle, "commander"] call FUNC(resetSeatState);
