#include "..\script_component.hpp"
/*
* Author: Mishkar, Timi007
* Mouse wheel handler while adjusting a ladder: extends/retracts it, with modifier key it tilts it.
*
* Arguments:
* 0: NUMBER - Scroll amount
*
* Return Value:
* BOOLEAN - Input was handled
*
* Example:
* [1] call ttt_vehicle_ladder_fnc_handleScrollWheel
*
* Public: No
*/


params ["_scroll"];

if (isNull GVAR(ladder)) exitWith {false};

if (ACE_Modifier == 0) then {
    // Extending
    private _currentStep = GVAR(currentStep);

    if (_scroll > 0 && {_currentStep != MAX_STEP}) then {
        _currentStep = _currentStep + 1;
        if (GVAR(ladder) animationPhase (format ["extract_%1", _currentStep]) isEqualTo 0) then {
            GVAR(ladder) animate [format ["extract_%1", _currentStep], 1];
            GVAR(currentStep) = _currentStep;
        };
    };

    if (_scroll < 0 && {_currentStep != MIN_ALLOWED_STEP}) then {
        if (GVAR(ladder) animationPhase (format ["extract_%1", _currentStep]) isEqualTo 1) then {
            GVAR(ladder) animate [format ["extract_%1", _currentStep], 0];
            GVAR(currentStep) = _currentStep - 1;
        };
    };
} else {
    // Tilting
    GVAR(currentAngle) = 0 max (GVAR(currentAngle) + _scroll) min MAX_TILT;
    GVAR(ladder) animate ["rotate", GVAR(currentAngle)];
};

true
