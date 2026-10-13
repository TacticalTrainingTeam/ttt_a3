#include "..\script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_canLoadTOW.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Checks if the TOW can be loaded: the gunner is in the TOW seat, a Milan tube is in the cargo and the TOW is empty.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can load TOW.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canLoadTOW
 *
 * Public: NO
 */

params ["_vehicle", "_player"];

alive _vehicle &&
{_player isEqualTo (_vehicle turretUnit WIESEL_TOW_TURRET_PATH)} &&
{WIESEL_TOW_BARREL in backpackCargo _vehicle} &&
{_vehicle magazinesTurret WIESEL_TOW_TURRET_PATH isEqualTo []}
