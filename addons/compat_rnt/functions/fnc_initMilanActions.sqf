#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_initMilanActions.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Adds the hold actions to assemble, disassemble, load and unload the Milan of the Marder (interface only).
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call ttt_compat_rnt_fnc_initMilanActions
 *
 * Public: NO
 */

params ["_vehicle"];

if (!hasInterface) exitWith {};

[
    _vehicle,
    LLSTRING(assembleMilan),
    MILAN_ASSEMBLE_ICON,
    MILAN_ASSEMBLE_ICON,
    QUOTE([ARR_2(_target,_this)] call FUNC(canAssembleMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canAssembleMilan)),
    {},
    {},
    LINKFUNC(assembleMilan),
    {},
    [],
    MILAN_ACTION_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

[
    _vehicle,
    LLSTRING(disassembleMilan),
    MILAN_DISASSEMBLE_ICON,
    MILAN_DISASSEMBLE_ICON,
    QUOTE([ARR_2(_target,_this)] call FUNC(canDisassembleMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canDisassembleMilan)),
    {},
    {},
    LINKFUNC(disassembleMilan),
    {},
    [],
    MILAN_ACTION_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

[
    _vehicle,
    LLSTRING(loadMilan),
    MILAN_LOAD_ICON,
    MILAN_LOAD_ICON,
    QUOTE([ARR_2(_target,_this)] call FUNC(canLoadMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canLoadMilan)),
    {},
    {},
    LINKFUNC(loadMilan),
    {},
    [],
    MILAN_ACTION_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

[
    _vehicle,
    LLSTRING(unloadMilan),
    MILAN_UNLOAD_ICON,
    MILAN_UNLOAD_ICON,
    QUOTE([ARR_2(_target,_this)] call FUNC(canUnloadMilan)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canUnloadMilan)),
    {},
    {},
    LINKFUNC(unloadMilan),
    {},
    [],
    MILAN_ACTION_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
