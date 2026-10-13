#include "..\script_component.hpp"
/*
* Author: Timi007
* Source: PzGrenBtl402 addons/SmokeLauncher/functions/fnc_turretChanged.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), reworked, key handling is event based instead of a per frame handler
* Called when the local player changes turret. For vehicles that allow gunner and commander to fire the smoke launcher it shows the ammo counter and listens for the launch countermeasures input.
*
* Arguments:
* 0: OBJECT - Player
* 1: ARRAY - Turret path
*
* Return Value:
* Nothing
*
* Example:
* [player, [0]] call ttt_smoke_launcher_fnc_turretChanged
*
* Public: No
*/


params ["_player", "_turret"];

// Clean up the previous vehicle
if (GVAR(PFH) >= 0) then {
    [GVAR(PFH)] call CBA_fnc_removePerFrameHandler;
    GVAR(PFH) = -1;
    GVAR(lastAmmoCount) = -1;
    GVAR(lastFireSuccess) = true;

    private _mainDisplay = findDisplay IDD_MAIN;
    {
        _mainDisplay displayRemoveEventHandler [_x, GVAR(inputEHs) select _forEachIndex];
    } forEach ["KeyDown", "KeyUp", "MouseButtonDown", "MouseButtonUp"];
    GVAR(inputEHs) = [];
    GVAR(inputHeld) = false;

    ([QGVAR(RscDisplay)] call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

    GVAR(vehicle) removeEventHandler ["Fired", GVAR(firedEH)];
    GVAR(firedEH) = -1;
    GVAR(vehicle) = objNull;
    GVAR(turret) = [];
};

private _vehicle = vehicle _player;
if (_vehicle isEqualTo _player) exitWith {};

private _canSmoke = GVAR(canSmokeCache) getOrDefaultCall [typeOf _vehicle, {
    getNumber (configOf _vehicle >> QGVAR(gunnerAndCommanderCanSmoke)) > 0
}, true];
if (!_canSmoke) exitWith {};

private _isGunnerOrCommander = _player isEqualTo gunner _vehicle || {_player isEqualTo commander _vehicle} || {_turret isEqualTo [2]};
if (!_isGunnerOrCommander || {!alive _player}) exitWith {};

GVAR(turret) = _turret;
GVAR(vehicle) = _vehicle;

private _mainDisplay = findDisplay IDD_MAIN;
GVAR(inputHeld) = inputAction "launchCM" > 0;
GVAR(inputEHs) = ["KeyDown", "KeyUp", "MouseButtonDown", "MouseButtonUp"] apply {
    _mainDisplay displayAddEventHandler [_x, {call FUNC(handleInput)}]
};

GVAR(firedEH) = _vehicle addEventHandler ["Fired", {call FUNC(handleFired)}];

// Visibility (turned out, dialogs, ...) cannot be detected by events
GVAR(PFH) = [{
    [] call FUNC(updateDisplay);
}, 0.25] call CBA_fnc_addPerFrameHandler;

[] call FUNC(updateDisplay);
