#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Adds the hold action to load the TOW to the vehicle (interface only).
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call ttt_compat_rnt_fnc_addTOWLoadAction
 *
 * Public: NO
 */

params ["_vehicle"];

if (!hasInterface) exitWith {};

private _icon = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa";
[
    _vehicle,
    LLSTRING(loadTOW),
    _icon,
    _icon,
    QUOTE([ARR_2(_target,_this)] call FUNC(canLoadTOW)),
    QUOTE([ARR_2(_target,_caller)] call FUNC(canLoadTOW)),
    {},
    {},
    LINKFUNC(loadTOW),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
