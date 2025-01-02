#include "script_component.hpp"

INFO("Toggle Screenshot Mode");

private _newState = param [0, true];

{
    [_newState] call _x;
} forEach [
    FUNC(toggleACENametags),
    //FUNC(toggleSTHud),
    //FUNC(toggleTFAR),
    FUNC(toggleVanillaHUD),
    FUNC(toggleDuiHud)
];

false;