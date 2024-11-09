#include "..\script_component.hpp"

if (!GVAR(enableTeleport)) exitWith {diag_log "TTT - Teleporter disabled";};

// Server Side
if (isServer or !isMultiplayer) then {
    diag_log "TTT - Teleporter Checking for Respawn";
    private ["_count"];

    // check if "respawn" marker exists 
    // if not, create on at the corner of the map
    ttt_respawn_pos = getMarkerPos "respawn";
    _count = 0;
    {
        _count = _count + _x;
    } forEach ttt_respawn_pos;

    if (_count == 0) then {
        diag_log "TTT - Teleporter No Respawn found, creating ...";
        ttt_respawn_pos = [0, 0, 0];
        _markerrespawn = createMarker ["respawn", ttt_respawn_pos];
        _markerrespawn setMarkerShapeLocal "RECTANGLE";
        _markerrespawn setMarkerSize [10, 10];
    };

    // check if an Object with the variable name "ttt_teleporter" exists
    // if not, create a TTT-Flag at the respawn and assign it the variable
    diag_log "TTT - Teleporter Checking for ttt_teleporter";

    if (isNil "ttt_teleporter") then {
        ttt_teleporter = "ttt_Flag_Logo" createVehicleLocal ttt_respawn_pos;
        diag_log "TTT - Teleporter No ttt_teleporter found, creating ...";
    };
};