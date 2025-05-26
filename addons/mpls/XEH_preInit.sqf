#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

if (isServer) then {
    private _loadoutDB = createHashMap;
    missionNamespace setVariable [QGVAR(loadoutDB), _loadoutDB, true];

    //Make an extra save if player disconnects
    addMissionEventHandler ["HandleDisconnect", {
        params ["_unit", "_id", "_uid", "_name"];
        [_unit] call FUNC(saveLoadout);
    }];

    INFO("Mission-Persistent Loadoutsystem initialized");
};
