#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Milan/functions/fnc_addActions.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), renamed
 *
 *  Description:
 *      Adds the hold actions to load and unload the dismounted Milan (interface only).
 *
 *  Parameter(s):
 *      0: OBJECT - Milan
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call ttt_compat_rnt_fnc_addStaticMilanActions
 *
 * Public: NO
 */

params ["_milan"];

if (!hasInterface) exitWith {};

[
    _milan,
    LLSTRING(loadMilan),
    MILAN_LOAD_ICON,
    MILAN_LOAD_ICON,
    QUOTE([ARR_2(_target,_this)] call FUNC(canLoadStaticMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canLoadStaticMilan)),
    {},
    {},
    LINKFUNC(loadStaticMilan),
    {},
    [],
    MILAN_ACTION_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

[
    _milan,
    LLSTRING(unloadMilan),
    MILAN_UNLOAD_ICON,
    MILAN_UNLOAD_ICON,
    QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadStaticMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canUnloadStaticMilan)),
    {},
    {},
    LINKFUNC(unloadStaticMilan),
    {},
    [],
    MILAN_ACTION_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
