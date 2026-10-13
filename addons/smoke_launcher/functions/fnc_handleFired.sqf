#include "..\script_component.hpp"
/*
* Author: Timi007
* Source: PzGrenBtl402 addons/SmokeLauncher/functions/fnc_turretChanged.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), reworked, key handling and display update are event based instead of a per frame handler
* Fired event handler. Updates the ammo counter after the smoke launcher was fired.
*
* Arguments:
* 0: OBJECT - Vehicle
* 1: STRING - Weapon
*
* Return Value:
* Nothing
*
* Example:
* _this call ttt_smoke_launcher_fnc_handleFired
*
* Public: No
*/


params ["_vehicle", "_weapon"];

if (_weapon isEqualTo ([typeOf _vehicle] call FUNC(getSmokeLauncher))) then {
    GVAR(lastFireSuccess) = true;
    [] call FUNC(updateDisplay);
};
