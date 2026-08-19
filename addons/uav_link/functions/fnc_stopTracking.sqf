#include "..\script_component.hpp"
/*
* Author: Andx
* Tears down this addon's local tracking state (post-process effects and bookkeeping variables)
* for the local player. Does not touch the UAV terminal connection itself - only the visual/
* tracking side effects this addon owns.
*
* Arguments:
* None
*
* Return Value:
* None
*
* Public: No
*/

{
    if !(isNull _x) then {
        _x ppEffectEnable false;
        ppEffectDestroy _x;
    };
} forEach [
    missionNamespace getVariable [QGVAR(ppBlur), objNull],
    missionNamespace getVariable [QGVAR(ppGrain), objNull],
    missionNamespace getVariable [QGVAR(ppChroma), objNull]
];

{
    missionNamespace setVariable [_x, nil];
} forEach [QGVAR(trackedUav), QGVAR(connected), QGVAR(ppBlur), QGVAR(ppGrain), QGVAR(ppChroma)];
