#include "script_component.hpp"

if (!hasInterface) exitWith {};

// Source: PzGrenBtl402 addons/Common/initKeybinds.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
[
    LELSTRING(main,TacticalTrainingTeam),
    QGVAR(toggleHEAP),
    [LLSTRING(toggleHEAP), LLSTRING(toggleHEAP_description)],
    {call FUNC(toggleHEAP)},
    "",
    [DIK_5, [false, false, false]]
] call CBA_fnc_addKeybind;
