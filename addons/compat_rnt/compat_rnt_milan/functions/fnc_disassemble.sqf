#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Disassembles the milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call ttt_compat_rnt_Milan_fnc_disassemble
 *
 */

params ["_milan"];

player playAction "PutDown";

[{((animationState player) select [25,7]) isEqualTo "putdown"}, {
    params ["_milan"];

    deleteVehicle _milan;
    player addBackpackGlobal "Redd_Milan_Static_Tripod";
}, [_milan]] call CBA_fnc_waitUntilAndExecute;