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

_target setVariable ["ttt_dronepanel_inUse", true, true];

_caller playMove "Acts_carFixingWheel";

[
    GVAR(buildTime)*2,
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
