#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Loads the TOW by consuming one Milan tube from the vehicle cargo.
 *
 *  Parameter(s):
 *      0: OBJECT - Wiesel TOW
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_loadTOW
 *
 * Public: NO
 */

params ["_vehicle"];

[_vehicle, WIESEL_TOW_BARREL] call CBA_fnc_removeBackpackCargo;
[QGVAR(addMagazineTurret), [_vehicle, [WIESEL_TOW_MAGAZINE, WIESEL_TOW_TURRET_PATH]], _vehicle, WIESEL_TOW_TURRET_PATH] call CBA_fnc_turretEvent;
