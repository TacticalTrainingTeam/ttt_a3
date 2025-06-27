#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

if (isServer) then {
    // Create the "Database"
    GVAR(loadoutNamespace) = true call CBA_fnc_createNamespace;
    publicVariable QGVAR(loadoutNamespace);

    // Handle the player disconnect:
    // Save the last loadout the player had
    addMissionEventHandler ["HandleDisconnect", {
        params ["_unit", "_id", "_uid", "_name"];
        [_unit, _uid] call FUNC(saveLoadout);
        false; //prevents player from being replaced by AI on disconnect
    }];
};

// Add Eventhandler for the loadout saving event
// if the event is raised, save the current loadout
[
    QGVAR(doBackup),
    {
        if (!hasInterface) exitWith {};
        [ace_player, getPlayerUID ace_player] call FUNC(saveLoadout);
    }
] call CBA_fnc_addEventHandler;

INFO("Mission-Persistent Loadoutsystem initialized");
