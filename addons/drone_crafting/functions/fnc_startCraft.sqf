#include "..\script_component.hpp"
/*
 * Author: Colin, Andx
 * Client side of crafting a drone: checks the nearest supply vehicle's cargo, runs the ACE
 * progress bar and, if it finishes, asks the server to do the actual craft (fnc_craft.sqf).
 * The client check only gives early feedback - the server checks everything again.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Recipe class <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "standard_at"] call ttt_drone_crafting_fnc_startCraft;
 *
 * Public: No
 */

params [
    ["_player", objNull, [objNull]],
    ["_recipeId", "", [""]]
];

private _vehicle = [_player] call FUNC(getNearestVehicle);

if (isNull _vehicle) exitWith {
    ["unavailable"] call FUNC(showCraftResult);
};

([_vehicle, _recipeId] call FUNC(checkIngredients)) params ["", "_missing"];

if (_missing isNotEqualTo []) exitWith {
    ["missing", [_missing]] call FUNC(showCraftResult);
};

[
    GVAR(craftTime),
    [_player, _vehicle, _recipeId],
    {
        params ["_args"];
        [QGVAR(craftRequest), _args] call CBA_fnc_serverEvent;
    },
    {
        ["aborted"] call FUNC(showCraftResult);
    },
    format [LLSTRING(progressTitle), (GVAR(recipes) get _recipeId) get "displayName"],
    {
        params ["_args"];
        _args params ["_player", "_vehicle"];

        alive _vehicle
        && {_vehicle in GVAR(vehicles)}
        && {_player distance _vehicle <= GVAR(maxDistance)}
    }
] call ace_common_fnc_progressBar;
