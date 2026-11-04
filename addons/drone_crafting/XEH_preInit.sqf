#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.inc.sqf"

// Designated supply vehicles - owned by the server, broadcast with publicVariable whenever it
// changes. The isNil guard keeps a value a JIP client may already have received from the server.
if (isNil QGVAR(vehicles)) then {
    GVAR(vehicles) = [];
};

[] call FUNC(compileRecipes);

ADDON = true;
