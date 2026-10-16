#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_closeRamp.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Closes the rear ramp and locks the vehicle for passengers.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: BOOLEAN - Close instantly (default: false)
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_closeRamp
 *
 * Public: NO
 */

params [["_vehicle", objNull, [objNull]], ["_instantly", false, [false]]];

_vehicle animateSource ["heck_luke_rotation", 0, _instantly];
_vehicle animate ["Hide_Knopf_Heck_luke", 1];
[QGVAR(lock), [_vehicle, 2], _vehicle] call CBA_fnc_targetEvent;
