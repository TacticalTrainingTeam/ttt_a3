#include "..\script_component.hpp"

/*
 * Authors: You
 * Toggles the Display of various Displayelements.
 * - ACE UI Elements are handled by ACE
 * - DUI is handled by ACE
 * - Hides ACRE Vehicle Elements
 * - Hides all Vanilla UI Elements (including Chat if accidently shown)
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

        // Vanilla
        if (_set) then {
            showHUD GVAR(vanillaHUD);
        } else {
            GVAR(vanillaHUD) = shownHUD;
            showHUD [false,false,false,false,false,false,false,false];
        };
        showChat false; //ist durch clearhud sowie immer aus und wird deswegen auch nicht wieder angeschalten

        // ACRE
        // from https://github.com/fparma/fparma-mods/blob/master/addons/common/functions/fnc_toggleScreenshotMode.sqf
        if (_set) then {
            ("acre_sys_gui_vehicleInfo" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
        } else {
            if !(isNil "acre_player") then {
                private _player = acre_player;
                if !(isNull objectParent _player) then {
                    // Show UI
                    [_player, vehicle _player] call acre_sys_gui_fnc_enterVehicle;
                    // Wait until UI is initialized
                    [{
                        [vehicle _this, _this] call acre_sys_intercom_fnc_updateVehicleInfoText;
                    }, _player, 0.5] call CBA_fnc_waitAndExecute;
                };
            };
        };
    }
] call CBA_fnc_addEventHandler;