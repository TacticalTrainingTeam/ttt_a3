#include "..\script_component.hpp"

/*
 * Author: Nobody ©, Andx
 * Adds a teleport and spectator camera to an object, or creates one if it doesn't exist.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_teleport_cam_initTeleport
 *
 * Public: No
 */

// check if the logic is enabled, if not exit the function
if (!GVAR(enableTeleport)) exitWith {diag_log "TTT - Teleporter disabled";};


// Client Side
if (hasInterface) then {
    diag_log "TTT - Teleporter Waiting for ttt_teleporter ...";

    // check if the "ttt_teleporter" exists
    // if not, wait until it does (through section above)
    if (isNil "ttt_teleporter") then {
        waitUntil {
            !isNil "ttt_teleporter";
            diag_log "TTT - Teleporter found ttt_teleporter ...";
        };
    };

    diag_log "TTT - Teleporter Adding Actions";
    // add spectator cam
    ttt_teleporter addAction ["Zuschauermodus", {
        params ["_target", "_caller"];
        ["Initialize", [_caller, [], true]] call BIS_fnc_EGSpectator;
        [_caller, true] remoteExecCall ["hideObjectGlobal", 2];
    },     [],     0,     false];

    // add teleporter Menü
    [ttt_teleporter] call ttt_w_teleporter_fnc_addAction;

    // close spectator on respawn
    player addMPEventHandler ["MPRespawn", {
        ["Terminate"] call BIS_fnc_EGSpectator;
    }];
};

if (true) exitWith {};
