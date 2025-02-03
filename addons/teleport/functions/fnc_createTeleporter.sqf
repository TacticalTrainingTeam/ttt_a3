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
 * [] call ttt_teleport_fnc_createTeleporter
 *
 * Public: No
 */

if (!GVAR(enableTeleport)) exitWith { (INFO("Teleporter disabled"));};


INFO("Checking for Respawn");

// check if "respawn" marker exists 
// if not, create on at the corner of the map
if (getMarkerColor "respawn" == "") then {
    INFO("No Respawn found, creating");
    ttt_respawn_pos = [0, 0, 0];
    _markerrespawn = createMarkerLocal ["respawn", ttt_respawn_pos];
    _markerrespawn setMarkerShapeLocal "RECTANGLE";
    _markerrespawn setMarkerSize [10, 10];
};

ttt_respawn_pos = getMarkerPos "respawn";

// check if an Object with the variable name "ttt_teleport_teleporter" exists
// if not, create a TTT-Flag at the respawn and assign it the variable
INFO("Checking for ttt_teleport_teleporter");

if (isNil QGVAR(teleporter)) then {
    INFO("No ttt_teleport_teleporter found, creating");
    GVAR(teleporter) = "ttt_Flag_Logo" createVehicleLocal [0,0,0]; //its faster to create it far away from anyone
    GVAR(teleporter) setPosATL ttt_respawn_pos; //and then move it to its intended position
    GVAR(teleporter) allowDamage false;
};

//add Actions
[GVAR(teleporter)] call FUNC(addActions);

