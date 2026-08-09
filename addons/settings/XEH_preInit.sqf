#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

["CBA_settingsInitialized", { [] call FUNC(loadDefaultSettings); }] call CBA_fnc_addEventHandler;

ADDON = true;
