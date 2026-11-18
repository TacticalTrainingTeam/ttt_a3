#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Milan/functions/fnc_disassemble.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), renamed, with a timeout for the animation
 *
 *  Description:
 *      Disassembles the empty dismounted Milan and hands the tripod to the player as backpack.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorObject] call ttt_compat_rnt_fnc_disassembleStaticMilan
 *
 * Public: NO
 */

#define PUT_DOWN_TIMEOUT 3

params ["_milan"];

private _player = call CBA_fnc_currentUnit;
_player playAction "PutDown";

private _disassemble = {
    params ["_milan", "_player"];

    deleteVehicle _milan;
    _player addBackpackGlobal MILAN_TRIPOD;
};

[
    {((animationState (_this select 1)) select [25, 7]) isEqualTo "putdown"},
    _disassemble,
    [_milan, _player],
    PUT_DOWN_TIMEOUT,
    _disassemble
] call CBA_fnc_waitUntilAndExecute;
