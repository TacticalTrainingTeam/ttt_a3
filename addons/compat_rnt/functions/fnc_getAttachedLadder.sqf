#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Marder/functions/fnc_getAttachedLadder.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Gets the ladder stored under the given variable on the vehicle. Forgets the ladder if it was detached from the vehicle in the meantime (e.g. when repositioned with ACE).
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *      1: STRING - Variable name the ladder is stored under
 *
 *  Returns:
 *      OBJECT - Ladder, objNull if none
 *
 *  Example:
 *      [_vehicle, QGVAR(ladderLeft)] call ttt_compat_rnt_fnc_getAttachedLadder
 *
 * Public: NO
 */

params ["_vehicle", "_ladderCache"];

private _ladder = _vehicle getVariable [_ladderCache, objNull];

if (!isNull _ladder && {(attachedTo _ladder) isNotEqualTo _vehicle}) then {
    _vehicle setVariable [_ladderCache, objNull, true];
    _ladder = objNull;
};

_ladder
