#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Starts the progress bar for deconstructing/stowing a deployable item. Part
 * of the TTT "deployable tarp" framework.
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

_target setVariable [(_config get "inUseVar"), true, true];

if (_config getOrDefault ["useAnimation", true]) then {
    _caller playMove (_config getOrDefault ["animation", "Acts_carFixingWheel"]);
};

[
    (_config get "buildTime") * 1.5,
    [_target, _caller, _config],
    {
        (_this select 0) params ["_target", "_caller", "_config"];
        [_target, _caller, _config] call FUNC(deployableDeconstruct);
    },
    {
        (_this select 0) params ["_target", "_caller", "_config"];
        [_target, _caller, _config] call FUNC(deployableCancel);
    },
    _config get "deconstructText"
] call ace_common_fnc_progressBar;
