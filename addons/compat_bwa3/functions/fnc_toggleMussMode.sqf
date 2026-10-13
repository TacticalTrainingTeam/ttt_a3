#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/BwMod_Puma/functions/fnc_toggleMussMode.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, only two modes (jamming, turret rotation)
 *
 *  Description:
 *      Handles the keybind to toggle the Multifunctional Self Protection System (MUSS) mode of the SPz Puma.
 *
 *  Parameter(s):
 *      None.
 *
 *  Returns:
 *       BOOL - Handled.
 *
 *  Example:
 *      [] call ttt_compat_bwa3_fnc_toggleMussMode
 *
 *  Public: No
 *
 */

private _player = call CBA_fnc_currentUnit;
private _vehicle = objectParent _player;

private _gunner = gunner _vehicle;
private _commander = commander _vehicle;

TRACE_4("Toggle MUSS",_player,_vehicle,_gunner,_commander);
if (
    isNull _vehicle ||
    {_player isNotEqualTo _gunner && {_player isNotEqualTo _commander}} ||
    {!(_vehicle isKindOf "BWA3_Puma_Base")}
) exitWith {false};

private _currentMode = _vehicle getVariable [QGVAR(MussMode), DEFAULT_MUSS_MODE];
private _newMode = (_currentMode + 1) % 2;
_vehicle setVariable [QGVAR(MussMode), _newMode, true];
TRACE_2("MUSS mode",_currentMode,_newMode);

private _notifyUnits = [];
if (!isNull _gunner) then {_notifyUnits pushBack _gunner};
if (!isNull _commander) then {_notifyUnits pushBack _commander};

private _activeColor = [0, 1, 0, 1];
private _disabledColor = [1, 0, 0, 1];

private _jammingText = ["  " + LLSTRING(muss_jamming), 1, _activeColor];
private _rotateTurretText = if (_newMode >= MUSS_MODE_TURRET_ROTATION) then {
    ["+ " + LLSTRING(muss_rotateTurret), 1, _activeColor]
} else {
    ["  " + LLSTRING(muss_rotateTurret), 1, _disabledColor]
};

[
    QGVAR(notify),
    [
        [LLSTRING(muss), 1.5],
        _jammingText,
        _rotateTurretText,
        true
    ],
    _notifyUnits
] call CBA_fnc_targetEvent;

true
