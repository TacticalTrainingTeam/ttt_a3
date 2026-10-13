#include "..\script_component.hpp"
/*
* Author: Andx
* Display event handler for key and mouse button presses. Fires the smoke launcher if the pressed input is bound to the "launchCM" action.
*
* Arguments:
* None
*
* Return Value:
* Nothing
*
* Example:
* _this call ttt_smoke_launcher_fnc_handleInput
*
* Public: No
*/


// Input state is only updated after the event, so check it again on the next frame.
// Firing twice is prevented by the reload time.
[{
    if (inputAction "launchCM" > 0) then {
        GVAR(lastFireSuccess) = [vehicle ace_player] call FUNC(fireSmoke);
        [] call FUNC(updateDisplay);
    };
}] call CBA_fnc_execNextFrame;

false
