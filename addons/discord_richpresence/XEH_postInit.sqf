#include "script_component.hpp"

if (hasInterface) then {
    [
        {
            // start the update Loop
            call FUNC(initLoop);
        },
        [],
        1
    ] call CBA_fnc_waitAndExecute;
};
