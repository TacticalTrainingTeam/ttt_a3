#include "script_component.hpp"

// Only run on mission start (not during editor preview)
if (!isServer && !hasInterface) exitWith {};

// Load the appropriate settings file based on the mission parameter
call FUNC(loadSettings);
