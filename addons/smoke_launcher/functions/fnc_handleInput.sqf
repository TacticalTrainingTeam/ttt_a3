#include "..\script_component.hpp"
/*
* Author: Timi007
* Source: PzGrenBtl402 addons/SmokeLauncher/functions/fnc_turretChanged.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), reworked, key handling and display update are event based instead of a per frame handler
* Display event handler for key and mouse button events. Fires the smoke launcher when the "launchCM" action changes from released to pressed.
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

// The input state is only updated after the event, so check it on the next frame.
// Reacting only to the change from released to pressed ignores key repeat and unrelated keys.
[{
    private _pressed = inputAction "launchCM" > 0;

    if (_pressed && {!GVAR(inputHeld)}) then {
        GVAR(lastFireSuccess) = [vehicle ace_player] call FUNC(fireSmoke);
        [] call FUNC(updateDisplay);
    };

    GVAR(inputHeld) = _pressed;
}] call CBA_fnc_execNextFrame;

false
