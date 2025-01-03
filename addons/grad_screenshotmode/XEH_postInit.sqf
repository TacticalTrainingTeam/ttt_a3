#include "script_component.hpp"

//add the keybind
GVAR(active) = false;

[
    ELSTRING(main,TacticalTrainingTeam),
    'GRAD_screenshotMode_toggle',
    LSTRING(toggleScreenShotMode),//'Toggle Screenshot Mode',
    {
        GVAR(active) = !GVAR(active);
        [!GVAR(active)] call FUNC(toggleAll);
    },
    ''
] call CBA_fnc_addKeybind;