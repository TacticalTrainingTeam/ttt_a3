#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_unloadMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Unloads the Milan of the Marder and puts the Milan tube back into the cargo.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_unloadMilan
 *
 * Public: NO
 */

params ["_vehicle"];

[QGVAR(removeMagazinesTurret), [_vehicle, [MILAN_MAGAZINE, MARDER_MILAN_TURRET_PATH]], _vehicle, MARDER_MILAN_TURRET_PATH] call CBA_fnc_turretEvent;
_vehicle addBackpackCargoGlobal [MILAN_BARREL, 1];
_vehicle animateSource ["ReloadMagazine", 1];
