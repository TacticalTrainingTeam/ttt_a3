#include "script_component.hpp"

ADDON = false;

// Initialise early so a Zeus/3DEN-placed module firing before postInit's
// scanLoadouts runs doesn't hit an undefined variable
GVAR(db_ammo)       = [];
GVAR(db_grenades)   = [];
GVAR(db_at)         = [];
GVAR(db_explosives) = [];
GVAR(db_support)    = [];
GVAR(db_init)       = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

#include "initSettings.inc.sqf"
