#include "script_component.hpp"

ADDON = false;

// Initialise early so a Zeus/3DEN-placed module firing before postInit's
// scanLoadouts runs doesn't hit an undefined variable. Keyed by crate type
// ("ammo", "grenades", "at", "explosives", "support") -> array of [classname, count] pairs.
GVAR(db)      = createHashMap;
GVAR(db_init) = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

#include "initSettings.inc.sqf"
