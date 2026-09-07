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

// TEMP DEBUG - remove once punishment is confirmed working
diag_log text format ["[ttt_coin_check] evaluateCheck fired for %1 at %2", _holderNetId, _pos];

if (isNil QGVAR(activeCheck) || {(GVAR(activeCheck) select 0) != _holderNetId}) exitWith {
    diag_log text "[ttt_coin_check] evaluateCheck exited: activeCheck mismatch or nil";
};

{
    private _unit = _x;
    private _dist = _unit distance _pos;

    // TEMP DEBUG - remove once punishment is confirmed working
    diag_log text format ["[ttt_coin_check] checking %1: distance=%2", name _unit, _dist];

    if (_dist <= RESPONSE_RADIUS) then {
        (_unit call FUNC(hasCoin)) params ["_hasCoin"];

        // TEMP DEBUG - remove once punishment is confirmed working
        diag_log text format ["[ttt_coin_check] %1 in range, hasCoin=%2", name _unit, _hasCoin];

        if (_hasCoin) then {
            diag_log text format ["[ttt_coin_check] sending punish event to %1", name _unit];
            [QGVAR(punish), [], _unit] call CBA_fnc_targetEvent;
        };
    };
} forEach allPlayers;
