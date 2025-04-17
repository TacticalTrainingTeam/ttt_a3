#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Calls the stormInit function for module users.
* 
* Arguments:
* Arma 3 Module Function Parameters
* https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
* 
* Return Value:
* None
*
* Public: No
*/

params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];

if (_activated) then {
    private _duration = _logic getVariable [QGVAR(stormModule_duration), 300];
    private _effect = _logic getVariable [QGVAR(stormModule_effect), false];
    private _stormType = _logic getVariable [QGVAR(stormModule_stormType), 0];
    private _walk = _logic getVariable [QGVAR(stormModule_walk), true];
    private _direction = _logic getVariable [QGVAR(stormModule_direction), 0];

    [_duration, _effect, _stormType, _walk, _direction] call ttt_effects_fnc_stormInit;
};
