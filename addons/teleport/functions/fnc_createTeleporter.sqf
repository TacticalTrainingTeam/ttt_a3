#include "..\script_component.hpp"

/*
 * Author: Nobody ©, Andx
 * Creates an object to add the teleporter and camera action to
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

if (!GVAR(enableTeleport)) exitWith {diag_log "TTT - Teleporter disabled";};

// Server Side
if (isServer) then {
    diag_log "TTT - Teleporter Checking for Respawn";
    private ["_count"];

    // check if "respawn" marker exists 
    // if not, create on at the corner of the map
    if (getMarkerColor "respawn" == "") then {
        diag_log "TTT - Teleporter No Respawn found, creating ...";
        ttt_respawn_pos = [0, 0, 0];
        _markerrespawn = createMarkerLocal ["respawn", ttt_respawn_pos];
        _markerrespawn setMarkerShapeLocal "RECTANGLE";
        _markerrespawn setMarkerSize [10, 10];
    };

    ttt_respawn_pos = getMarkerPos "respawn";

    // check if an Object with the variable name "ttt_teleporter" exists
    // if not, create a TTT-Flag at the respawn and assign it the variable
    diag_log "TTT - Teleporter Checking for ttt_teleporter";

    if (isNil "ttt_teleporter") then {
        diag_log "TTT - Teleporter No ttt_teleporter found, creating ...";
        GVAR(teleporter) = "ttt_Flag_Logo" createVehicle ttt_respawn_pos;
    };
};
