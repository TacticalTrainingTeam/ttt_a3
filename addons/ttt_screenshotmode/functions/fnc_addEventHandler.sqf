#include "..\script_component.hpp"

/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_ttt_screenshotmode_fnc_addEventHandler
 *
 * Public: No
 */

params [];
TRACE_1("fnc_addEventHandler",_this);

INFO("UI toggled!");

private _id = [
    "ace_ui_hideHud",
    { 
        params ["_set"];
        //DUI
        diwako_dui_main_toggled_off = _set;

        //Vanilla
        if (_set) then {
            showHUD GVAR(vanillaHUD);
        } else {
            GVAR(vanillaHUD) = shownHUD;
            showHUD [false,false,false,false,false,false,false,false];
        };
    }
    ] call CBA_fnc_addEventHandler;