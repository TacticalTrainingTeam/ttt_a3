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
    private _unitCount = _logic getVariable [QGVAR(surrenderModule_unitCount), 5];
    private _probability = _logic getVariable [QGVAR(surrenderModule_probability), 50];
    private _side = _logic getVariable [QGVAR(surrenderModule_side), east];

    [
        {
            params ["_logic", "_unitCount", "_probability", "_side"];
            hint format ["tiggerArea: %1\ngetPosWorld: %2\n", triggerArea (_logic select 0), getPosWorld player];
            /*if ((getPosWorld player) inArea _logic) then {
                hint "Im Trigger"
            } else {
                hint "Außerhalb Trigger"
            };*/
        },
        2,
        [_logic, _unitCount, _probability, _side]
    ] call CBA_fnc_addPerFrameHandler;
};
