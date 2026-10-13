#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Fired event handler. Removes the TOW magazine after firing so that it has to be reloaded from a Milan tube.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *      1: STRING - Weapon
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call ttt_compat_rnt_fnc_handleTOWFired
 *
 * Public: NO
 */

params ["_vehicle", "_weapon"];

if (_weapon == WIESEL_TOW_WEAPON) then {
    [QGVAR(removeMagazinesTurret), [_vehicle, [WIESEL_TOW_MAGAZINE, WIESEL_TOW_TURRET_PATH]], _vehicle, WIESEL_TOW_TURRET_PATH] call CBA_fnc_turretEvent;
};
