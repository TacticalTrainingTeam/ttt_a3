#include "..\script_component.hpp"

/*
 * Author: Nobody ©, Andx
 * Adds a teleport and spectator camera to an object
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_teleport_fnc_initTeleport
 *
 * Public: No
 */

// Client Side
if (hasInterface) then {
    diag_log "TTT - Teleporter Waiting for ttt_teleporter ...";

    // check if the "ttt_teleport_teleporter" exists
    // if not, wait until it does (with ttt_teleport_fnc_createTeleporter)
    [
        {!isNil QGVAR(teleporter)},
        {
            diag_log "TTT - Teleporter Adding Actions";

            // add spectator cam
            GVAR(teleporter) addAction ["Zuschauermodus", {

                params ["_target", "_caller"];

                ["Initialize", [_caller, [], true]] call BIS_fnc_EGSpectator;
                [_caller, true] remoteExecCall ["hideObjectGlobal", 2];

            }, [], 0, false];

            // add teleporter Menü
            [GVAR(teleporter)] call ttt_w_teleporter_fnc_addAction;

            // close spectator on respawn
            player addMPEventHandler ["MPRespawn", {
                ["Terminate"] call BIS_fnc_EGSpectator;
            }];
        }
    ] call CBA_fnc_waitUntilAndExecute;
};