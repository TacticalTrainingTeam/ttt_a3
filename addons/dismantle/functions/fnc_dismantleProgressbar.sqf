#include "..\script_component.hpp"
/*
* Author: Andx
* ACE interact menu statement for the dismantle action. Plays the dismantle
* animation and progress bar; on completion plays the dismantle sound and
* deletes the target.
*
* Arguments:
* 0: Target Object <OBJECT>
* 1: Caller <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

(_this select 0) params ["_target", "_caller"];

_caller playMove "Acts_carFixingWheel";

[
    20,
    [_target,_caller], 
    {
        (_this select 0) params ["_target"];

        // Another player may have finished dismantling the same object first
        if (isNull _target) exitWith {};

        playSound3D [DISMANTLE_SOUND_FILE, objNull, false, getPosASL _target, 1, 1, DISMANTLE_SOUND_DISTANCE];
        deleteVehicle _target;
    },
    {
        (_this select 0) params ["_target","_caller"];
        [_caller] call FUNC(cancel);
    },
    LLSTRING(hintDismantle)
] call ace_common_fnc_progressBar;
