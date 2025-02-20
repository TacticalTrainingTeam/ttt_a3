#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Move a player to the respawn marker
 * if a regular ttt_teleport_teleporter exists, the player will be rotated to face the teleporter
 *
 * Arguments:
 * 0: player <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call ttt_teleport_fnc_moveToRespawn
 *
 * Public: No
 */

params ["_target"];

TRACE_1("fnc_movetoRespawn",_this);

if !(hasInterface) exitWith {};

if (!GVAR(enableJIPMoveToRespawn)) exitWith {};

//platziert den Spieler auf dem Respawn Marker, bzw. bis zu 5m darum
_target setVehiclePosition [getMarkerPos "respawn", [], 5]; 

if !(isNil QGVAR(teleporter)) then {
    _target setDir (_target getDir GVAR(teleporter));
};


