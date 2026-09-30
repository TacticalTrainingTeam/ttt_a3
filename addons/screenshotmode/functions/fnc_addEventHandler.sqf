#include "..\script_component.hpp"

/*
 * Authors: derZade, Andx
 * Toggles the Display of various Displayelements.
 * - ACE UI Elements are handled by ACE
 * - DUI is handled by ACE
 * - Hides ACRE Vehicle Elements
 * - Hides all Vanilla UI Elements (including Chat if accidently shown)
 * - Hides current cTab Interface, reopens it once the UI is shown again
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

private _id = [
    "ace_ui_hideHud",
    {
        params ["_set"];

        // Vanilla
        // _set=true means things should be hidden - https://ace3.acemod.org/wiki/framework/ui-framework#22-hide-ui-keybind
        if (_set) then {
            GVAR(vanillaHUD) = shownHUD;
            showHUD [false,false,false,false,false,false,false,false];
        } else {
            showHUD GVAR(vanillaHUD);
        };
        showChat false; //ist durch clearhud sowie immer aus und wird deswegen auch nicht wieder angeschalten

        //cTab
        // https://github.com/jetelain/ctab @cTab/addons/core/functions/fnc_open.sqf + fnc_toggleInterface.sqf
        if (_set) then {
            if !(isNil "cTabIfOpen") then {
                // cTabIfOpen: [_interfaceType,_displayName,_player,_killedEhId,_vehicle,...] - see cTab_fnc_open
                GVAR(ctabState) = [cTabIfOpen select 0, cTabIfOpen select 1, cTabIfOpen select 2, cTabIfOpen select 4];
            };
            [] call cTab_fnc_close;
        } else {
            private _ctabState = GVAR(ctabState);
            if !(isNil "_ctabState") then {
                GVAR(ctabState) = nil;
                // cTabIfOpen only turns nil once the previous interface has actually
                // finished closing down - same wait cTab's own fnc_toggleInterface.sqf does
                [{
                    if (isNil "cTabIfOpen") then {
                        [_this select 1] call CBA_fnc_removePerFrameHandler;
                        (_this select 0) call cTab_fnc_open;
                    };
                }, 0, _ctabState] call CBA_fnc_addPerFrameHandler;
            };
        };

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

_id
