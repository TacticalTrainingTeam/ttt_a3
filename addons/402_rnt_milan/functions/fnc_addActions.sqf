#include "script_component.hpp"
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
 *      [this] call PzGrenBtl402_Redd_Milan_fnc_addActions
 *
 */

params ["_milan"];

private _loadIcon = QPATHTOF(data\ui\holdaction_load_milan);
// Milan laden
[
    _milan,
    LELSTRING(402_common,load),
    _loadIcon,
    _loadIcon,
    QUOTE([ARR_2(_target,_this)] call FUNC(canLoad)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canLoad)),
    {},
    {},
    LINKFUNC(load),
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
    LELSTRING(402_common,unload),
    _unloadIcon,
    _unloadIcon,
    QUOTE([ARR_2(_target,_this)] call FUNC(canUnload)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canUnload)),
    {},
    {},
    LINKFUNC(unload),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;