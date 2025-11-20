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
    private _area = _logic getVariable ["objectarea", [2.33, 3.22]];
    private _unitCount = _logic getVariable [QGVAR(surrenderModule_unitCount), 5];
    private _probability = _logic getVariable [QGVAR(surrenderModule_probability), 50];
    private _side = _logic getVariable [QGVAR(surrenderModule_side), east];

    [
        {
            params ["_logic", "_unitCount", "_probability", "_side"];
            hint format ["Logic: %1\ngetPosWorld: %2\nLogicPos: %3\narea: %4, Variables: %5", _logic, getPosWorld player, getPosWorld (_logic select 0), _area, allVariables _logic];
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
