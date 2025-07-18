#include "script_component.hpp"

// - Chat Commands
// Basierend auf der Arbeit von Gruppe W 
// https://gitlab.gruppe-w.de/Missionsbau/Framework/-/blob/master/addons/api/XEH_postInit.sqf?ref_type=heads

// - Zeus chat command --------------------------------------------------------
[QGVAR(giveZeus), {
    params ["_unit"];
    private _curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];
    _curator setVariable ["Addons", 3, true];
    _curator addCuratorEditableObjects [allMissionObjects "", true];
    _unit assignCurator _curator;
    INFO_1("Zeus assigned to %1",_unit);
}] call CBA_fnc_addEventHandler;

["zeus", {
    systemChat "Zeus wird angefordert...";
    [QGVAR(giveZeus), [player]] call CBA_fnc_serverEvent;
}, "admin"] call CBA_fnc_registerChatCommand;

 // - End mission chat command -------------------------------------------------
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
        [QGVAR(endMission), ["loser", false]] call CBA_fnc_globalEvent;
    } else {
        [QGVAR(endMission), [_ending, false]] call CBA_fnc_globalEvent;
    };
    INFO_1("Mission ended with ending: %1",_ending);
}, "admin"] call CBA_fnc_registerChatCommand;
