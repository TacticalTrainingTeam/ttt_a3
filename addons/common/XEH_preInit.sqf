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

// disable the physics collision flag when unconscious
// originally by Puotek https://steamcommunity.com/sharedfiles/filedetails/?id=3451978697
if (hasInterface) then {
    ["ace_unconscious", {
        params ["_unit", "_state"];
        _unit setPhysicsCollisionFlag !_state;
    }] call CBA_fnc_addEventHandler;
};
