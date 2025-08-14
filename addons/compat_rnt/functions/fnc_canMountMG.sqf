#include "..\script_component.hpp"
/**
 *  Author: Zumi, Timi007
 *
 *  Description:
 *      Checks if current weapon of the player can be used to assemble the static MG.
 *
 *  Parameter(s):
 *      0: OBJECT - Tripod.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOLEAN - Can assemble static MG.
 *
 *  Example:
 *      [this, player] call ttt_compat_rnt_fnc_canMountMG
 *
 */

params ["", "_player"];

private _primary = primaryWeapon _player;
private _supportedMgs = [
    "BWA3_MG3",
    "BWA3_MG3_bipod",
    "BWA3_MG3_MicroT2_pointer_bipod"
    //ToDo
    //RHS + 3CB MG3 Classnames einfügen
];

(_primary in _supportedMgs) &&
((currentWeapon _player) isEqualTo _primary)
