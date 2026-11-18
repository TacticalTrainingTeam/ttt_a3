#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_loadMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, cargo is removed via a common event
 *
 *  Description:
 *      Loads the Milan of the Marder by taking one Milan tube out of the cargo.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_loadMilan
 *
 * Public: NO
 */

params ["_vehicle"];

// The cargo can only be changed where the vehicle is local, the magazine where the turret is local
[QEGVAR(common,removeBackpackCargo), [_vehicle, MILAN_BARREL], _vehicle] call CBA_fnc_targetEvent;
[QGVAR(addMagazineTurret), [_vehicle, [MILAN_MAGAZINE, MARDER_MILAN_TURRET_PATH]], _vehicle, MARDER_MILAN_TURRET_PATH] call CBA_fnc_turretEvent;
_vehicle animateSource ["ReloadMagazine", 0];
