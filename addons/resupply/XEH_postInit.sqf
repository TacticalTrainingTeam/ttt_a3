#include "script_component.hpp"

// Server: build loadout database at mission start and handle crate spawn
// requests sent by clients via the ACE action
if (isServer) then {
    call FUNC(scanLoadouts);

    [QGVAR(spawnCrateRequest), {
        params ["_target", "_type", "_notifyOwner"];
        [_target, _type, _notifyOwner] call FUNC(spawnCrate);
    }] call CBA_fnc_addEventHandler;
};

// Clients: register the ACE interaction menu action and the hint event used
// by the server to report spawn failures back to the requesting client.
// Zeus-triggered spawns notify via the Zeus message feed since the owner is
// a curator, not a regular player looking at their screen.
if (hasInterface) then {
    call FUNC(addActions);

    [QGVAR(hint), {
        params ["_text", ["_notifyZeus", false]];
        if (_notifyZeus) then {
            [_text] call ace_zeus_fnc_showMessage;
        } else {
            [_text] call ace_common_fnc_displayTextStructured;
        };
    }] call CBA_fnc_addEventHandler;

    // Local copy of the scanned database, used by fnc_isCrateAvailable to
    // hide crate types from the ACE action without a round trip to the server.
    // Sent as an array of [key, value] pairs since HashMap isn't natively
    // network-transparent; rebuilt into a HashMap here to match GVAR(db)'s
    // shape on the server.
    [QGVAR(dbUpdated), {
        params ["_dbPairs"];
        GVAR(db) = createHashMapFromArray _dbPairs;
        GVAR(db_init) = true;
    }] call CBA_fnc_addEventHandler;
};
