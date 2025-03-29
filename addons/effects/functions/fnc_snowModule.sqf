#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Calls the snow function for module users.
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
    private _intensity = _logic getVariable [QGVAR(snowModule_intensity), 50];

    [_intensity] call ttt_effects_fnc_snow;
};
