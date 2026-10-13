#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Checks if the unit can open the rear ramp (driver, gunner or the middle hatch seat).
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Unit
 *
 *  Returns:
 *      BOOLEAN - Can open ramp.
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canOpenRamp
 *
 * Public: NO
 */

params ["_vehicle", "_unit"];

alive _vehicle &&
{_unit in [driver _vehicle, gunner _vehicle, _vehicle turretUnit MARDER_HATCH_MIDDLE_TURRET_PATH]} &&
{_vehicle animationSourcePhase "heck_luke_rotation" isEqualTo 0}
