#include "..\script_component.hpp"
/*
* Author: Timi007
* Source: PzGrenBtl402 addons/Ladder/functions/fnc_confirmLadderAdjust.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, any mouse button confirms
* Stops adjusting the ladder (any mouse button). Does not block the input.
*
* Arguments:
* 0: OBJECT - Player
*
* Return Value:
* BOOLEAN - false
*
* Example:
* [player] call ttt_vehicle_ladder_fnc_confirmLadderAdjust
*
* Public: No
*/


params ["_player"];

if (isNull GVAR(ladder) || {isNull _player}) exitWith {false};

call ace_interaction_fnc_hideMouseHint;

GVAR(ladder) = objNull;

false
