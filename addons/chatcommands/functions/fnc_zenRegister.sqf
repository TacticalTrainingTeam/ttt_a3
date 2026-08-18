#include "..\script_component.hpp"
/*
 * Author: Andx
 * Adds a Zeus Enhanced context menu action to promote a player to Zeus
 * (curator). Only called from chatcommands_zen's XEH_postInit, which itself
 * only runs when Zeus Enhanced's context menu addon is loaded, so
 * zen_context_menu_fnc_* is guaranteed to exist here.
 * https://zen-mod.github.io/ZEN/#/
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_chatcommands_fnc_zenRegister
 *
 * Public: No
 */

private _action = [
    QGVAR(zenGiveZeus),
    LLSTRING(zenGiveZeus),
    "a3\ui_f\data\igui\cfg\actions\eye_ca.paa",
    {
        if (getPlayerUID _hoveredEntity != "") then {
            systemChat format [LLSTRING(zenGiveZeusRequested), name _hoveredEntity];
            [QGVAR(giveZeus), [_hoveredEntity]] call CBA_fnc_serverEvent;
        } else {
            systemChat LLSTRING(zenGiveZeusNoTarget);
        };
    },
    {
        !isNull _hoveredEntity
        && {_hoveredEntity isKindOf "CAManBase"}
        && {getPlayerUID _hoveredEntity != ""}
        && {isNull (_hoveredEntity getVariable [QEGVAR(common,curator), objNull])}
    }
] call zen_context_menu_fnc_createAction;

[_action] call zen_context_menu_fnc_addAction;
