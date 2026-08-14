#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

if(!hasInterface) exitWith {};

//Define a global variable, chat deactivated by default
if(isNil QGVAR(activated)) then {
    GVAR(activated) = true;
};
