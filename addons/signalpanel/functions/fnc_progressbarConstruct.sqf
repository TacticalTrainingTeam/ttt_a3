#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
* Starts the progress bar for building the signaling panel.
*
* Arguments:
* 0: Player <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target"];

private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
if (_position isEqualTo []) exitWith {
    [LLSTRING(hintErrorNoSpace), true] call ace_common_fnc_displayText;
};

_target playMove "Acts_carFixingWheel";

[
    GVAR(buildTime),
    [_target],
    {
        (_this select 0) params ["_target"];
        [_target] call FUNC(planeConstruct);
    },
    {
        (_this select 0) params ["_target"];
        [_target,_target] call FUNC(cancel)
    },
    LLSTRING(actionConstruct)
] call ace_common_fnc_progressBar;
