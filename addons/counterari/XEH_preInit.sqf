#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Registration has to run on every machine (see fnc_addFriendlyArtillery.sqf), meant for CBA_fnc_globalEventJIP
[QGVAR(addFriendlyArtillery), FUNC(addFriendlyArtillery)] call CBA_fnc_addEventHandler;

// Counter-battery fire missions only ever run on the server, so only it listens to these events
if (isServer) then {
    // Raised per artillery round by the "Fired" EH from fnc_addFriendlyArtillery.sqf
    [QGVAR(artilleryFired), FUNC(handleArtilleryFired)] call CBA_fnc_addEventHandler;

    // Deprecated: sends the full enemy artillery array and settings with every round.
    // Kept working for existing missions; replaced by ttt_counterari_fnc_addFriendlyArtillery.
    [QGVAR(counterFire), {
        if (isNil QGVAR(counterFireDeprecationWarned)) then {
            GVAR(counterFireDeprecationWarned) = true;
            private _event = QGVAR(counterFire);
            WARNING_1("Event %1 is deprecated and will be removed in a future version, use ttt_counterari_fnc_addFriendlyArtillery instead",_event);
        };
        _this call FUNC(counterFire);
    }] call CBA_fnc_addEventHandler;
};

ADDON = true;
