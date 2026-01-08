#include "script_component.hpp"

// Only run on mission start (not during editor preview)
if (!isServer) exitWith {};

//Load default settings
call FUNC(loadDefaultSettings);
// Load the appropriate settings file based on the mission parameter
call FUNC(loadMedicalSettings);
