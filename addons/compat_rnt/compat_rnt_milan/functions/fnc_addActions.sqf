#include "..\script_component.hpp"
/**
 *  Author: Lemonberries
 *
 *  Description:
 *      Adds load and unload actions to milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan to add the actions to.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call ttt_compat_rnt_Milan_fnc_addActions
 *
 */

params ["_milan"];

INFO("Adding actions to Milan");

private _loadIcon = QPATHTOF(data\ui\holdaction_load_milan);
// Milan laden
[
    _milan,
    LLSTRING(load),
    _loadIcon,
    _loadIcon,
    QUOTE([ARR_2(_target,_this)] call FUNC(canLoad)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canLoad)),
    {},
    {},
    FUNC(load),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

private _unloadIcon = QPATHTOF(data\ui\holdaction_unload_milan);
// Milan entladen
[
    _milan,
    LLSTRING(unload),
    _unloadIcon,
    _unloadIcon,
    QUOTE([ARR_2(_target,_this)] call FUNC(canUnload)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canUnload)),
    {},
    {},
    FUNC(unload),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;