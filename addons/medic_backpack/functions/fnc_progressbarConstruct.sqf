#include "..\script_component.hpp"
/*
* Author: EinStein
* Starts the progress bar for building the tent.
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
    hint LLSTRING(hintErrorNoSpace);
};

if (GVAR(useAnimation)) then {
    _target playMove GVAR(buildAnimation);
};

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
