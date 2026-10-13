#include "..\script_component.hpp"
/*
* Author: Timi007, Andx
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

    GVAR(inputEHs) params [["_keyEH", -1], ["_mouseEH", -1]];
    private _mainDisplay = findDisplay IDD_MAIN;
    _mainDisplay displayRemoveEventHandler ["KeyDown", _keyEH];
    _mainDisplay displayRemoveEventHandler ["MouseButtonDown", _mouseEH];
    GVAR(inputEHs) = [];

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
GVAR(inputEHs) = [
    _mainDisplay displayAddEventHandler ["KeyDown", {call FUNC(handleInput)}],
    _mainDisplay displayAddEventHandler ["MouseButtonDown", {call FUNC(handleInput)}]
];

GVAR(firedEH) = _vehicle addEventHandler ["Fired", {call FUNC(handleFired)}];

// Visibility (turned out, dialogs, ...) cannot be detected by events
GVAR(PFH) = [{
    [] call FUNC(updateDisplay);
}, 0.25] call CBA_fnc_addPerFrameHandler;

[] call FUNC(updateDisplay);
