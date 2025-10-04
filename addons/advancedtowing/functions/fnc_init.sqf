#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedtowing_fnc_init
 *
 * Public: No
 */

GVAR(Locked_Vehicles_Enabled) = true;

GVAR(Supported_Vehicles) = [
    "Tank", "Car", "Ship"
];

GVAR(Tow_Rules) = [
    ["Tank","CAN_TOW","Tank"],
    ["Tank","CAN_TOW","Car"],
    ["Tank","CAN_TOW","Ship"],
    ["Tank","CAN_TOW","Air"],
    //["Car","CAN_TOW","Tank"],
    ["Car","CAN_TOW","Car"],
    ["Car","CAN_TOW","Ship"],
    ["Car","CAN_TOW","Air"],
    ["Ship","CAN_TOW","Ship"]
];

if(!isDedicated) then {
    [] spawn {
        while {true} do {
            if(!isNull player && isPlayer player) then {
                if!( player getVariable [QGVAR(Actions_Loaded), false] ) then {
                    [] call FUNC(addPlayerTowActions);
                    player setVariable [QGVAR(Actions_Loaded), true];
                };
            };
            missionNamespace setVariable [QGVAR(Nearby_Tow_Vehicles), (call FUNC(findNearbyTowVehicles))];
            sleep 2;
        };
    };
};

if(isServer) then {
    call FUNC(Install);
};
