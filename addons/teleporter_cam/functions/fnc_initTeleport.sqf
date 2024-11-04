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
if (!GVAR(enableTeleport)) exitWith {};

// Server Side
if (isServer or !isMultiplayer) then {
    
    private ["_count"];

    // check if "respawn" marker exists 
    // if not, create on at the corner of the map
    ttt_respawn_pos = getMarkerPos "respawn";
    _count = 0;
    {
        _count = _count + _x;
    } forEach ttt_respawn_pos;

    if (_count == 0) then {
        ttt_respawn_pos = [0, 0, 0];
        _markerrespawn = createMarker ["respawn", ttt_respawn_pos];
        _markerrespawn setMarkerShapeLocal "RECTANGLE";
        _markerrespawn setMarkerSize [10, 10];
    };

    // check if an Object with the variable name "ttt_teleporter" exists
    // if not, create a TTT-Flag at the respawn and assign it the variable
    if (isNil "ttt_teleporter") then {
        ttt_teleporter = "TTT_Flag_Logo" createVehicle ttt_respawn_pos;
    };
};

// Client Side
if (hasInterface) then {

    // check if the "ttt_teleporter" exists
    // if not, wait until it does (through section above)
    if (isNil "ttt_teleporter") then {
        waitUntil {
            !isNil "ttt_teleporter"
        };
    };

    // add spectator cam
    ttt_teleporter addAction ["Zuschauermodus", {
        params ["_target", "_caller"];
        ["Initialize", [_caller, [], true]] call BIS_fnc_EGSpectator;
        [_caller, true] remoteExecCall ["hideObjectGlobal", 2];
    }, [], 0.5, false, true, "", "", 5];

    // add teleporter Menü
    [ttt_teleporter] call ttt_teleporter_fnc_addAction;

    // close spectator on respawn
    player addMPEventHandler ["MPRespawn", {
        ["Terminate"] call BIS_fnc_EGSpectator;
    }];
};

if (true) exitWith {};
