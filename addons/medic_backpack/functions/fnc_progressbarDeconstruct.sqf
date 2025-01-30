#include "..\script_component.hpp"
/*
* Author: EinStein
* 
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* BOOLEAN
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

_target setVariable ["ttt_medic_backpack_inUse", true, true];

if (GVAR(useAnimation)) then {
    _caller playMove GVAR(buildAnimation);
};

[
    GVAR(buildTime),
    [_target,_caller],
    {
        (_this select 0) params ["_target", "_caller"];
        [_target,_caller] call FUNC(planeDeconstruct);
    },
    {
        (_this select 0) params ["_target", "_caller"];
        [_target,_caller] call FUNC(cancel)
    },
    LLSTRING(actionDeconstruct)
] call ace_common_fnc_progressBar;
