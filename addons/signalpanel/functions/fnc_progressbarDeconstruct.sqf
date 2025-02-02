#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
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

target setVariable ["ttt_signalpanel_inUse", true, true];

_caller playMove "Acts_carFixingWheel";

[
    19,
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