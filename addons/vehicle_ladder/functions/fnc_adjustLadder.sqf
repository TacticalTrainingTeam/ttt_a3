#include "..\script_component.hpp"
/*
* Author: Rocko, Ruthberg, Timi007
* Source: PzGrenBtl402 addons/Ladder/functions/fnc_adjustLadder.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
* Starts adjusting the ladder: scroll wheel extends or retracts it, scroll wheel with modifier tilts it and any mouse button confirms.
*
* Arguments:
* 0: OBJECT - Ladder
* 1: OBJECT - Player
*
* Return Value:
* Nothing
*
* Example:
* [_ladder, player] call ttt_vehicle_ladder_fnc_adjustLadder
*
* Public: Yes
*/


params ["_ladder", "_player"];

private _currentStep = 0;
for "_step" from 1 to MAX_STEP do {
    if (_ladder animationPhase (format ["extract_%1", _step]) isEqualTo 0) then {
        break;
    };
    _currentStep = _step;
};

GVAR(ladder) = _ladder;
GVAR(currentStep) = _currentStep max MIN_ALLOWED_STEP;
GVAR(currentAngle) = _ladder animationPhase "rotate";

[
    "",
    LLSTRING(deployLadder),
    localize "STR_ACE_TacticalLadder_Adjust",
    [["control", LLSTRING(adjustTiltLadder)]]
] call ace_interaction_fnc_showMouseHint;
