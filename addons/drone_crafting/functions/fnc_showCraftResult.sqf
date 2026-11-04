#include "..\script_component.hpp"
/*
 * Author: Andx
 * Shows the outcome of a craft to the local player. Called locally for client-side checks and as
 * the QGVAR(craftResult) event handler for the server's answer - the server only sends an
 * outcome code plus class names, so every text is localized in the player's own language.
 *
 * Arguments:
 * 0: Outcome <STRING>
 *    "success" (args: [recipe class, "backpack" or "vehicle"]),
 *    "missing" (args: [[[class, missing count], ...]]),
 *    "unavailable", "tooFar", "noSpace", "invalid", "aborted"
 * 1: Arguments <ARRAY> (default: [])
 *
 * Return Value:
 * None
 *
 * Example:
 * ["noSpace"] call ttt_drone_crafting_fnc_showCraftResult;
 *
 * Public: No
 */

params [
    ["_outcome", "", [""]],
    ["_args", [], [[]]]
];

private _lines = switch (_outcome) do {
    case "success": {
        _args params [["_recipeId", "", [""]], ["_location", "", [""]]];

        private _recipe = GVAR(recipes) getOrDefault [_recipeId, createHashMap];
        private _name = _recipe getOrDefault ["displayName", _recipeId];

        [
            LLSTRING(result_success),
            format [[LLSTRING(result_inVehicle), LLSTRING(result_inBackpack)] select (_location == "backpack"), _name]
        ]
    };
    case "missing": {
        _args params [["_missing", [], [[]]]];

        [LLSTRING(result_aborted), LLSTRING(result_missing)] + (_missing apply {
            _x params ["_class", "_count"];

            private _config = configFile >> "CfgMagazines" >> _class;
            if (!isClass _config) then {
                _config = configFile >> "CfgWeapons" >> _class;
            };

            format ["%1x %2", _count, getText (_config >> "displayName")]
        })
    };
    case "unavailable": {[LLSTRING(result_aborted), LLSTRING(result_unavailable)]};
    case "tooFar": {[LLSTRING(result_aborted), LLSTRING(result_tooFar)]};
    case "noSpace": {[LLSTRING(result_aborted), LLSTRING(result_noSpace), LLSTRING(result_noSpaceReturned)]};
    case "aborted": {[LLSTRING(result_aborted)]};
    default {[LLSTRING(result_invalid)]};
};

// ACE prepends an empty line; each line needs ~0.75 of the box size, plus one line of slack for wrapping
private _size = 0.75 * (count _lines + 2);

[_lines joinString "<br/>", _size, ACE_player, 12] call ace_common_fnc_displayTextStructured;
