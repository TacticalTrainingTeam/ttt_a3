#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

if (isServer) then {
    missionNamespace setVariable [QGVAR(loadoutDB), createHashMap, true];

    //Make an extra save if player disconnects
    addMissionEventHandler ["HandleDisconnect", {
        params ["_unit", "_id", "_uid", "_name"];
        [_unit, getPlayerUID _unit] call FUNC(saveLoadout);
    }];

    INFO("Mission-Persistent Loadoutsystem initialized");
};
