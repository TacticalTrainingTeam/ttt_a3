#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Adds a Zeus Enhanced context menu action to revert a player's loadout to their
 * initially saved one.
 * https://zen-mod.github.io/ZEN/#/
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _action = [
    QGVAR(zenRevertLoadout),
    LLSTRING(zenRevertLoadout),
    "a3\ui_f\data\igui\cfg\actions\gear_ca.paa",
    {
        INFO_1("ZEN revert-loadout action triggered on %1",_hoveredEntity);
        if (getPlayerUID _hoveredEntity != "") then {
            systemChat format [LLSTRING(zenRevertRequested), name _hoveredEntity];
            [QGVAR(doApplyFirstLoadout), [_hoveredEntity], _hoveredEntity] call CBA_fnc_targetEvent;
        } else {
            systemChat LLSTRING(zenRevertNoTarget);
        };
    },
    { !isNull _hoveredEntity && {_hoveredEntity isKindOf "CAManBase"} && {getPlayerUID _hoveredEntity != ""} }
] call zen_context_menu_fnc_createAction;

[_action] call zen_context_menu_fnc_addAction;
