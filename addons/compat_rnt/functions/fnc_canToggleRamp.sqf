#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_canOpenRamp.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), merged with fnc_canCloseRamp.sqf
 *
 *  Description:
 *      Checks if the unit can open or close the rear ramp (driver, gunner or the middle hatch seat).
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: OBJECT - Unit
 *      2: BOOLEAN - true to check for opening, false for closing
 *
 *  Returns:
 *      BOOLEAN - Can toggle ramp
 *
 *  Example:
 *      [cursorObject, player, true] call ttt_compat_rnt_fnc_canToggleRamp
 *
 * Public: NO
 */

params ["_vehicle", "_unit", "_open"];

alive _vehicle &&
{_unit in [driver _vehicle, gunner _vehicle, _vehicle turretUnit MARDER_HATCH_MIDDLE_TURRET_PATH]} &&
{(_vehicle animationSourcePhase "heck_luke_rotation" > 0) isNotEqualTo _open}
