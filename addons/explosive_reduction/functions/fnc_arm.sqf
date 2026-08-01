#include "..\script_component.hpp"
/*
* Author: TacticalTrainingTeam
*
* Consumes the needed item, arms the target and hands off the detonation
* countdown to the machine that owns the target object (usually the server),
* so the charge still detonates even if the arming player disconnects.
*
* Arguments:
* 0: Target Object <OBJECT>
* 1: Caller/Player <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller"];

if (isNull _target) exitWith {};

_caller switchMove "";
_caller removeMagazine GVAR(neededItem);

_target setVariable [QGVAR(armed), true, true];

[format [LLSTRING(hintArmed), GVAR(timerDuration)], true] call ace_common_fnc_displayText;

[_target, GVAR(timerDuration)] remoteExec [QFUNC(scheduleDetonation), (owner _target), false];
