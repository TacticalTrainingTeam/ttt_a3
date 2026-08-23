#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Adds a "TTT - MPLS" Zeus Enhanced context menu category with actions to revert a player's
 * loadout to their initially saved one, and to manually save/restore a separate loadout snapshot
 * (see fnc_saveLoadoutSnapshot.sqf).
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

private _icon = "a3\ui_f\data\igui\cfg\actions\gear_ca.paa";

// Prefixed with "TTT - " since this is a top-level entry in ZEN's shared context menu, where
// every mod's root categories are listed together.
private _category = [
    QGVAR(zenCategory),
    LLSTRING(zenCategory_displayName),
    _icon,
    {}
] call zen_context_menu_fnc_createAction;

private _categoryPath = [_category] call zen_context_menu_fnc_addAction;

// Shared by all three actions below - all target the player under the cursor.
private _condition = { !isNull _hoveredEntity && {_hoveredEntity isKindOf "CAManBase"} && {getPlayerUID _hoveredEntity != ""} };

private _revertLoadout = [
    QGVAR(zenRevertLoadout),
    LLSTRING(zenRevertLoadout),
    _icon,
    {
        INFO_1("ZEN revert-loadout action triggered on %1",_hoveredEntity);
        if (getPlayerUID _hoveredEntity != "") then {
            systemChat format [LLSTRING(zenRevertRequested), name _hoveredEntity];
            [QGVAR(doApplyFirstLoadout), [_hoveredEntity], _hoveredEntity] call CBA_fnc_targetEvent;
        } else {
            systemChat LLSTRING(zenRevertNoTarget);
        };
    },
    _condition
] call zen_context_menu_fnc_createAction;

[_revertLoadout, _categoryPath] call zen_context_menu_fnc_addAction;

private _saveSnapshot = [
    QGVAR(zenSaveSnapshot),
    LLSTRING(zenSaveSnapshot),
    _icon,
    {
        INFO_1("ZEN save-snapshot action triggered on %1",_hoveredEntity);
        systemChat format [LLSTRING(zenSnapshotSaveRequested), name _hoveredEntity];
        [QGVAR(doSaveSnapshot), [_hoveredEntity], _hoveredEntity] call CBA_fnc_targetEvent;
    },
    _condition
] call zen_context_menu_fnc_createAction;

[_saveSnapshot, _categoryPath] call zen_context_menu_fnc_addAction;

private _restoreSnapshot = [
    QGVAR(zenRestoreSnapshot),
    LLSTRING(zenRestoreSnapshot),
    _icon,
    {
        INFO_1("ZEN restore-snapshot action triggered on %1",_hoveredEntity);
        systemChat format [LLSTRING(zenSnapshotRestoreRequested), name _hoveredEntity];
        [QGVAR(doApplyLoadoutSnapshot), [_hoveredEntity], _hoveredEntity] call CBA_fnc_targetEvent;
    },
    _condition
] call zen_context_menu_fnc_createAction;

[_restoreSnapshot, _categoryPath] call zen_context_menu_fnc_addAction;
