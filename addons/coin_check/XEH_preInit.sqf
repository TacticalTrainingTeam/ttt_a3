#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(database) = call FUNC(buildDatabase);
GVAR(activeCheck) = nil;
GVAR(respondedHolderId) = "";

ADDON = true;

#include "initSettings.inc.sqf"
