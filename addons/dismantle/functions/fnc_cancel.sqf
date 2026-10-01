#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
* Cancels an in-progress dismantle: shows an abort hint and resets the
* caller's animation.
*
* Arguments:
* 0: Caller <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_caller"];

[LLSTRING(abort), true] call ace_common_fnc_displayText;
_caller switchMove "";
