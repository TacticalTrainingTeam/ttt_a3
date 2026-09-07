#include "..\script_component.hpp"
/*
 * Author: Andx
 * Server-side: runs once a coin check's response window has ended. Anyone still carrying their
 * own coin and within range at that moment never presented it, so they lost - each of them is
 * told to play their punishment on their own machine.
 *
 * Arguments:
 * 0: Ground weapon holder netId of the check <STRING>
 * 1: Position of the check <POSITION>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_holderNetId", "_pos"];

if (isNil QGVAR(activeCheck) || {(GVAR(activeCheck) select 0) != _holderNetId}) exitWith {};

{
    private _unit = _x;

    if (_unit distance _pos <= RESPONSE_RADIUS) then {
        (_unit call FUNC(hasCoin)) params ["_hasCoin"];

        if (_hasCoin) then {
            [QGVAR(punish), [], _unit] call CBA_fnc_targetEvent;
        };
    };
} forEach allPlayers;
