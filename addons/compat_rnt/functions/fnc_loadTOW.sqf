#include "..\script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_loadTOW.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, cargo is removed via a common event
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

// The cargo can only be changed where the vehicle is local
[QEGVAR(common,removeBackpackCargo), [_vehicle, WIESEL_TOW_BARREL], _vehicle] call CBA_fnc_targetEvent;
[QGVAR(addMagazineTurret), [_vehicle, [WIESEL_TOW_MAGAZINE, WIESEL_TOW_TURRET_PATH]], _vehicle, WIESEL_TOW_TURRET_PATH] call CBA_fnc_turretEvent;
