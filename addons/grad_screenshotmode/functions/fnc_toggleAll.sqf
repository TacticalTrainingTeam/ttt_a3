#include "..\script_component.hpp"

private _newState = param [0, true];

INFO_1("Toggling screenshotmode to %1",_newState);

{
    [_newState] call _x;
} forEach [
    FUNC(toggleACENametags),
    FUNC(toggleVanillaHUD),
    FUNC(toggleDuiHud)
];

false;
