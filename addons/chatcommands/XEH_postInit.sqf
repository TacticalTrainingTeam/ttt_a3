#include "script_component.hpp"

// Chat Commands
// Basierend auf der Arbeit von Gruppe W
// https://gitlab.gruppe-w.de/Missionsbau/Framework/-/blob/master/addons/api/XEH_postInit.sqf?ref_type=heads

// End Mission chat command
[QGVAR(endMission), BIS_fnc_endMission] call CBA_fnc_addEventHandler;

["endmission", {
    params ["_ending"];
    if (_ending == "") then {
        [QGVAR(endMission), ["", true]] call CBA_fnc_globalEvent;
    } else {
        [QGVAR(endMission), [_ending, true]] call CBA_fnc_globalEvent;
    };
    INFO_1("Mission ended with ending: %1",_ending);
}, "admin"] call CBA_fnc_registerChatCommand;

["failmission", {
    params ["_ending"];
    if (_ending == "") then {
        [QGVAR(endMission), ["", false]] call CBA_fnc_globalEvent;
    } else {
        [QGVAR(endMission), [_ending, false]] call CBA_fnc_globalEvent;
    };
    INFO_1("Mission ended with ending: %1",_ending);
}, "admin"] call CBA_fnc_registerChatCommand;

// Tech Support chat command
[QGVAR(techSupport), {
    params ["_unit"];
    GVAR(teleporter) = "ttt_Flag_Logo" createVehicleLocal [0,0,0]; //it's faster to create it far away from anyone at the corner of the map
    GVAR(teleporter) setPosATL (getPosATL _unit); //and then move it to its intended position
    GVAR(teleporter) allowDamage false;
    [GVAR(teleporter)] call EFUNC(teleport,addActions);

    INFO_1("Teleporter created at %1",getPosATL GVAR(teleporter));
}] call CBA_fnc_addEventHandler;

["techsupport", {
    [QGVAR(techSupport), [player]] call CBA_fnc_serverEvent;
}, "admin"] call CBA_fnc_registerChatCommand;
