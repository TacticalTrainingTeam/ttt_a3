#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_assembleMilan.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, cargo is removed via a common event
 *
 *  Description:
 *      Assembles the Milan on the Marder and takes the tripod out of the cargo. The GM tripod is used first if available.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_assembleMilan
 *
 * Public: NO
 */

params ["_vehicle"];

_vehicle animateSource ["Hide_Milan_Source", 0];

private _tripod = [MILAN_TRIPOD, MILAN_TRIPOD_GM] select (MILAN_TRIPOD_GM in backpackCargo _vehicle);
_vehicle setVariable [QGVAR(milanTripod), _tripod, true];

// The cargo can only be changed where the vehicle is local
[QEGVAR(common,removeBackpackCargo), [_vehicle, _tripod], _vehicle] call CBA_fnc_targetEvent;
