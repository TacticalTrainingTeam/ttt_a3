#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_counter_ari_fnc_addEventHandler
 *
 * Public: No
 */

params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then
{
    private _radius = _logic getVariable [QGVAR(registerFriendlyAriModule_radius), 100];
    private _rounds = _logic getVariable [QGVAR(registerFriendlyAriModule_rounds), 5];
    private _decrementing = _logic getVariable [QGVAR(registerFriendlyAriModule_decrementing), true];
    private _delay = _logic getVariable [QGVAR(registerFriendlyAriModule_delay), 5];
     {
        _x addEventHandler ["Fired", 
            {
                [
                    (_this select 0),
                    (_this select 5),
                    (GVAR(enemyAri)),
                    _radius,
                    _rounds,
                    _decrementing,
                    _delay,
                    []
                ] remoteExec ["ttt_counterAri_fnc_AriCounterFire",2]
            }
        ];
        if (isClass(configFile >> "CfgPatches" >> "lambs_danger")) then	// LAMBS only if loaded and only for ground vehicles
        {	
            _x call lambs_wp_fnc_taskReset;
        };

        INFO_1("Adding EH to  friendly Ari %1: ",_x);
     } forEach _units;
};
// Module function is executed by spawn command, so returned value is not necessary, but it is good practice.
true;