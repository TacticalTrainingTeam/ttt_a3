#include "script_component.hpp"

if (hasInterface) then {
    [
        {
            // start the update Loop
            call FUNC(updateRichPresence);
        },
        [],
        1
    ] call CBA_fnc_waitAndExecute;
};
