#include "..\script_component.hpp"
/*
* Author: TacticalTrainingTeam
*
* Called when the placement progress bar is cancelled/interrupted.
*
* Arguments:
* 0: Caller/Player <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_caller"];

[LLSTRING(abort), true] call ace_common_fnc_displayText;

_caller switchMove "";
