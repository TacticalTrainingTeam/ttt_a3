#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
* 2: Arguments <ARRAY>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller"];

deleteVehicle _target;

[LLSTRING(hintLoaded)] call ace_common_fnc_displayText;

_caller switchMove "";
(unitBackpack _caller) setVariable ["ttt_signalpanel_hasTarp", true, true];
