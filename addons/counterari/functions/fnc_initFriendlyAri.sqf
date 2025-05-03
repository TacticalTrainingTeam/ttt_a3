#include "..\script_component.hpp"
/*
* Authors: Andx & EinStein
*
* Description:
* n.a.
*
* Arguments:
* Arma 3 Module Function Parameters
* https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
*
* Return Value:
* n.a.
*
* Example:
* n.a.
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
    missionNamespace setVariable [QGVAR(registerFriendlyAriModule_radius),_logic getVariable [QGVAR(registerFriendlyAriModule_radius), 100]];
    missionNamespace setVariable [QGVAR(registerFriendlyAriModule_rounds),_logic getVariable [QGVAR(registerFriendlyAriModule_rounds), 5]];
    missionNamespace setVariable [QGVAR(registerFriendlyAriModule_decrementing),_logic getVariable [QGVAR(registerFriendlyAriModule_decrementing), true]];
    missionNamespace setVariable [QGVAR(registerFriendlyAriModule_delay),_logic getVariable [QGVAR(registerFriendlyAriModule_delay), 5]];
     {
        _x addEventHandler ["Fired", 
            {
                [
                    (_this select 0),
                    (_this select 5),
                    (GVAR(enemyAri)),
                    100,
                    selectRandom [3,4,5],
                    true,
                    0,
                    []
                ] remoteExec ["ttt_counterAri_fnc_counterFire",2]
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