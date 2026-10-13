#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Opens the rear ramp and unlocks the vehicle for passengers once the ramp is open.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: BOOLEAN - Open instantly (default: false)
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_openRamp
 *
 * Public: NO
 */

params [["_vehicle", objNull, [objNull]], ["_instantly", false, [false]]];

_vehicle animateSource ["heck_luke_rotation", 1, _instantly];
_vehicle animate ["Hide_Knopf_Heck_luke", 0];

[{_this animationSourcePhase "heck_luke_rotation" > 0.9}, {
    [QGVAR(lock), [_this, 0], _this] call CBA_fnc_targetEvent;
}, _vehicle] call CBA_fnc_waitUntilAndExecute;
