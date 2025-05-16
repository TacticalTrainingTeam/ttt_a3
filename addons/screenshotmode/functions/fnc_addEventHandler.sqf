#include "..\script_component.hpp"

/*
 * Authors: You
 * Toggles the Display of various Displayelements.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [] call ttt_screenshotmode_fnc_addEventHandler
 *
 * Public: No
 */

params [];
TRACE_1("fnc_addEventHandler",_this);

_id = [
    "ace_ui_hideHud",
    { 
        params ["_set"];
        INFO_1("UI toggled %1", _set);

        //Vanilla
        if (_set) then {
            showHUD GVAR(vanillaHUD);
        } else {
            GVAR(vanillaHUD) = shownHUD;
            showHUD [false,false,false,false,false,false,false,false];
        };

        //ACRE
        [!_set] call acre_sys_gui_fnc_showVehicleInfo;
    }
] call CBA_fnc_addEventHandler;