#include "..\script_component.hpp"
/*
 * Author: Zumi, Timi007
 * Checks if current weapon of the player can be used to assemble the static MG.
 *
 * Arguments:
 * 0: Tripod <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * Can assemble static MG <BOOL>
 *
 * Example:
 * [this, player] call ttt_compat_rnt_fnc_canMountMG
 *
 * Public: No
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
