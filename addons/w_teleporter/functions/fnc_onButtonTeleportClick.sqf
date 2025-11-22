#include "..\script_component.hpp"
/*
 * Author: BlauBär
 * Handles clicking the teleport button.
 *
 * Arguments:
 * 0: Button <CONTROL>
 *
 * Return Value:
 * None
 */
params [""];

if (isNull GVAR(target)) exitWith {};
closeDialog 0;

//LOG_S_2("%1 teleportierte sich zu %2.",name ACE_player,name GVAR(target));

switch GVAR(type) do {
    case "nearby": {
        private _targetPos = GVAR(target) modelToWorld [0, 0, 0];
        ACE_player setPos _targetPos;
        ACE_player setDir (ACE_player getDir GVAR(target));
    };
    case "nearbyVehicle": {
        private _targetPos = (vehicle GVAR(target)) modelToWorld [10, 0, 0];
        ACE_player setPos _targetPos;
        ACE_player setDir (ACE_player getDir vehicle GVAR(target));
    };
    case "cargo": {
        ACE_player moveInCargo vehicle GVAR(target);
    };
    case "driver": {
        ACE_player moveInDriver vehicle GVAR(target);
    };
    case "gunner": {
        ACE_player moveInGunner vehicle GVAR(target);
    };
    case "commander": {
        ACE_player moveInCommander vehicle GVAR(target);
    };
};

[QGVAR(API_playerTeleported), [ACE_player, GVAR(target)]] call CBA_fnc_localEvent;
