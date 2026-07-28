#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Starts the progress bar for constructing a deployable item. Part of the
 * TTT "deployable tarp" framework.
 *
 * Arguments:
 * 0: Args passed in by ACE's interaction menu <ARRAY> - [target, caller, config]
 *
 * Return Value:
 * None
 *
 * Public: No
 */

(_this select 0) params ["_target", "_caller", "_config"];

private _position = (_caller getPos [4, getDir _caller]) findEmptyPosition [1, 2];
if (_position isEqualTo []) exitWith {
    [(_config get "hintErrorNoSpace"), true] call ace_common_fnc_displayText;
};

if (_config getOrDefault ["useAnimation", true]) then {
    _caller playMove (_config getOrDefault ["animation", "Acts_carFixingWheel"]);
};

[
    _config get "buildTime",
    [_target, _caller, _config, _position],
    {
        (_this select 0) params ["_target", "_caller", "_config", "_position"];
        [_target, _caller, _config, _position] call FUNC(deployableConstruct);
    },
    {
        (_this select 0) params ["_target", "_caller", "_config"];
        [_target, _caller, _config] call FUNC(deployableCancel);
    },
    _config get "constructText"
] call ace_common_fnc_progressBar;
