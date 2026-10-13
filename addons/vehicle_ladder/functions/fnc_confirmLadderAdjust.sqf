#include "..\script_component.hpp"
/*
* Author: Timi007
* Source: PzGrenBtl402 addons/Ladder/functions/fnc_confirmLadderAdjust.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, any mouse button confirms
* Stops adjusting the ladder (any mouse button). Does not block the input.
*
* Arguments:
* None
*
* Return Value:
* BOOLEAN - false
*
* Example:
* [] call ttt_vehicle_ladder_fnc_confirmLadderAdjust
*
* Public: No
*/


if (isNull GVAR(ladder)) exitWith {false};

call ace_interaction_fnc_hideMouseHint;

GVAR(ladder) = objNull;

false
