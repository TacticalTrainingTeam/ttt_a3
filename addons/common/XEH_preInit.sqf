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

// disable the collision when unconscious
// originally by Puotek & Bromium https://steamcommunity.com/sharedfiles/filedetails/?id=3450571478
if (hasInterface) then {
    ["ace_unconscious", {
        params ["_unit", "_state"];

        if _state then {
            _unit disableCollisionWith ace_player;
        } else {
            _unit enableCollisionWith ace_player;
        }
    }] call CBA_fnc_addEventHandler;
};
