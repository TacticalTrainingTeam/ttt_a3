#include "script_component.hpp"

if (!hasInterface) exitWith {};

// Source: PzGrenBtl402 addons/BwMod_Puma/initKeybinds.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted

// Overwrite the BWA3 rear view camera keybinds (the camera of the cargo seats can be cycled)
[{
    !isNil {["BWA3", "BWA3_rearViewCamera"] call CBA_fnc_getKeybind}
}, {
    [
        "BWA3",
        "BWA3_rearViewCamera",
        LSTRING(rearViewCamera_next),
        {[1] call FUNC(toggleCamera)},
        "",
        [DIK_HOME, [true, false, false]] // Shift + Home
    ] call CBA_fnc_addKeybind;

    [
        "BWA3",
        "BWA3_rearViewCamera_previous",
        LSTRING(rearViewCamera_previous),
        {[-1] call FUNC(toggleCamera)},
        "",
        [DIK_END, [true, false, false]] // Shift + End
    ] call CBA_fnc_addKeybind;
}] call CBA_fnc_waitUntilAndExecute;

[
    [LELSTRING(main,TacticalTrainingTeam), LLSTRING(category)],
    QGVAR(toggleMuss),
    [LLSTRING(toggleMuss), LLSTRING(toggleMuss_description)],
    {[] call FUNC(toggleMussMode)},
    "",
    [DIK_INSERT, [false, false, false]]
] call CBA_fnc_addKeybind;
