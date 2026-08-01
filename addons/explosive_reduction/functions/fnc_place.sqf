#include "..\script_component.hpp"
/*
* Author: TacticalTrainingTeam
*
* Starts the placement progress bar for the explosive charge.
*
* Arguments:
* 0: Target Object <OBJECT>
* 1: Caller/Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

if (GVAR(useAnimation)) then {
    _caller playMove GVAR(placeAnimation);
};

[
    GVAR(placeTime),
    [_target, _caller],
    {
        (_this select 0) params ["_target", "_caller"];
        [_target, _caller] call FUNC(arm);
    },
    {
        (_this select 0) params ["_caller"];
        [_caller] call FUNC(cancel);
    },
    LLSTRING(hintPlacing)
] call ace_common_fnc_progressBar;
