#include "..\script_component.hpp"
/*
* Author: Mishkar, Timi007
* Stops adjusting the ladder (right mouse button only). Does not block the input.
*
* Arguments:
* 0: OBJECT - Player
* 1: NUMBER - Mouse button
*
* Return Value:
* BOOLEAN - false
*
* Example:
* [player, 1] call ttt_vehicle_ladder_fnc_confirmLadderAdjust
*
* Public: No
*/


params ["_player", "_key"];

if (isNull GVAR(ladder) || {isNull _player} || {_key isNotEqualTo 1}) exitWith {false};

call ace_interaction_fnc_hideMouseHint;

GVAR(ladder) = objNull;

false
