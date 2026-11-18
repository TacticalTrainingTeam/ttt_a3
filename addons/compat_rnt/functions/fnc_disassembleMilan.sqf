#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_disassembleMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Disassembles the Milan of the Marder and puts the tripod it was assembled with back into the cargo.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_disassembleMilan
 *
 * Public: NO
 */

params ["_vehicle"];

_vehicle animateSource ["Hide_Milan_Source", 1];

private _tripod = _vehicle getVariable [QGVAR(milanTripod), MILAN_TRIPOD];
_vehicle setVariable [QGVAR(milanTripod), nil, true];
_vehicle addBackpackCargoGlobal [_tripod, 1];
