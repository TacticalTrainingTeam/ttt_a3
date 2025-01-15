#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(aceSafemode) = IS_MOD_LOADED(ace_safemode);

ADDON = true;