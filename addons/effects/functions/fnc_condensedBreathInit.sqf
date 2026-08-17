#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Creates condensed breath particels for every unit locally for the player who executes the script.
*
* Arguments:
* None
*
* Return Value:
* None
*
* Example (used locally e.g.: initPlayerLocal.sqf):
*    [] call ttt_effects_fnc_condensedBreathInit;
*
* Public: Yes
*/

if (isDedicated) exitWith {[[], FUNC(condensedBreathInit)] remoteExec ["call", -2, true]};

// add player-scoped EHs once per machine, regardless of how many times this function is re-run
if (isNil QGVAR(breathHandlersInit)) then {
    GVAR(breathHandlersInit) = true;

    player addMPEventHandler ["MPRespawn", {                                                                        // Only triggered where the unit is local
        params ["_unit"];
        [[_unit], FUNC(condensedBreathEffects)] remoteExec ["call", ([0, -2] select isDedicated), true];    // re-add effect for every player
    }];

    ["featureCamera", {
        params ["_entity", "_cameraMode"];                                                                            // Playing: "", Zeus: "curator", Spectator: "nexus"
        if ((_cameraMode == "") && !(isObjectHidden _entity)) then {
            [_entity] call FUNC(condensedBreathEffects);                                                    // re-add effect for self if not hidden
        } else {
            deleteVehicle (_entity getVariable QGVAR(breathParticle));                                        // delete effect when in Zeus (can't detect visibility triggered)
            _entity setVariable [QGVAR(breathParticle), nil, false];
        };
    }] call CBA_fnc_addPlayerEventHandler;
};

{
    private _unit = _x;

    // add EHs if not already existing
    if (_unit getVariable [QGVAR(breathParticleEventsNeeded), true]) then {
        _unit setVariable [QGVAR(breathParticleEventsNeeded), false, false];
        [_unit] call FUNC(condensedBreathEffects);                                                            // add effect (once locally on every machine)

        _unit addEventHandler ["Deleted", {
            params ["_entity"];
            deleteVehicle (_entity getVariable QGVAR(breathParticle));
        }];

        _unit addMPEventHandler ["MPKilled", {                                                                            // EH will trigger globally only once per client
            params ["_unit"];
            deleteVehicle (_unit getVariable QGVAR(breathParticle));                                                // delete effect for every player
            _unit setVariable [QGVAR(breathParticle), nil, false];
        }];
    }
} forEach allUnits;
