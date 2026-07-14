#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* 0: Facility <OBJECT>
* 1: Player <OBJECT>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller"];

private _pad = _target getVariable [QGVAR(helipad), objNull];

if (!isNull _pad) then { deleteVehicle _pad; };
deleteVehicle _target;

[LLSTRING(hintLoaded)] call ace_common_fnc_displayText;

_caller switchMove "";
(unitBackpack _caller) setVariable ["ttt_dronepanel_hasTarp", true, true];
