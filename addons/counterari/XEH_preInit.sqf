#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Fired via CBA_fnc_serverEvent from fnc_initFriendlyAri.sqf's "Fired" EH; only the server needs
// to react to it, since counter-battery fire missions only ever run there
if (isServer) then {
    [QGVAR(counterFire), FUNC(counterFire)] call CBA_fnc_addEventHandler;
};

ADDON = true;
