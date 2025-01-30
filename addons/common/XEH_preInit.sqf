#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;


//needed for the fnc_callGlobalFnc
[
    QGVAR(call),
    {
        (_this#0) call (_this#1)
    }
] call CBA_fnc_addEventHandler;


ADDON = true;