#include "..\script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_canLoadTOW.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, the loader reloads, the commander only if no loader seat is occupied
 *
 *  Description:
 *      Checks if the player can load the TOW: a Milan tube is in the cargo and the TOW is empty. The loader (any loader seat) loads, if no loader seat is occupied the commander (any commander seat including the TOW seat) loads.
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

if (
    !alive _vehicle ||
    {!(WIESEL_TOW_BARREL in backpackCargo _vehicle)} ||
    {_vehicle magazinesTurret WIESEL_TOW_TURRET_PATH isNotEqualTo []}
) exitWith {false};

private _loaderTurrets = ([_vehicle, "loader"] call FUNC(getSeatData)) select 2;
private _loaders = _loaderTurrets apply {_vehicle turretUnit _x};

if (_player in _loaders) exitWith {true};

// Without a loader the commander reloads. The TOW seat is part of the commander seats
if (_loaders findIf {!isNull _x} != -1) exitWith {false};

private _commanderTurrets = ([_vehicle, "commander"] call FUNC(getSeatData)) select 2;
_player in (_commanderTurrets apply {_vehicle turretUnit _x})
