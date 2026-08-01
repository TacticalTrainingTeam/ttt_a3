#include "..\script_component.hpp"
/*
* Author: TacticalTrainingTeam
*
* Schedules the detonation on the machine that owns the target object.
* Runs locally on that machine so the countdown survives the arming
* player disconnecting or the target changing locality owner.
*
* Arguments:
* 0: Target Object <OBJECT>
* 1: Timer duration in seconds <NUMBER>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_duration"];

if (isNull _target) exitWith {};

[FUNC(detonate), [_target], _duration] call CBA_fnc_waitAndExecute;
