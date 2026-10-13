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

[QGVAR(lockSeat), LINKFUNC(lockSeat)] call CBA_fnc_addEventHandler;
[QGVAR(unlockSeat), LINKFUNC(unlockSeat)] call CBA_fnc_addEventHandler;

["CAManBase", "GetOutMan", {
    params ["_unit", "", "_vehicle"];

    if (local _vehicle) then {
        [QGVAR(unlockSeat), [_unit]] call CBA_fnc_localEvent;
    };
}] call CBA_fnc_addClassEventHandler;

["CAManBase", "Deleted", {
    params ["_unit"];

    (_unit getVariable [QGVAR(lockedSeat), []]) params [["_vehicle", objNull]];
    if (!isNull _vehicle && {local _vehicle}) then {
        [QGVAR(unlockSeat), [_unit]] call CBA_fnc_localEvent;
    };
}, true] call CBA_fnc_addClassEventHandler;

GVAR(playerMarkerIdx) = 0; //used in tagging2map

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
