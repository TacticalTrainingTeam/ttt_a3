#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Only run on mission start (not during editor preview)
if (!isServer) exitWith {};

//Load default settings
call FUNC(loadDefaultSettings);
// Load the appropriate settings file based on the mission parameter
call FUNC(loadMedicalSettings);


ADDON = true;
