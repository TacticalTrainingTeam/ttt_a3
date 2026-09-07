#include "..\script_component.hpp"
/*
 * Author: Andx
 * Plays the local player's chosen punishment animation (or a random one, per GVAR(punishment))
 * for PUNISHMENT_DURATION, then hands control back.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _anim = switch (GVAR(punishment)) do {
    case 1: {PUNISHMENT_ANIM_KNEE_BENDS};
    case 2: {PUNISHMENT_ANIM_PUSHUPS};
    default {selectRandom [PUNISHMENT_ANIM_KNEE_BENDS, PUNISHMENT_ANIM_PUSHUPS]};
};

// TEMP DEBUG - remove once punishment is confirmed working
diag_log text format ["[ttt_coin_check] playPunishment received, playing %1", _anim];
hint format ["[ttt_coin_check] playPunishment received, playing %1", _anim];

// These are CutSceneAnimationBase/CivilExerciseActions moves, not part of the normal combat
// transition graph - switchMove finds no valid path onto them and silently does nothing, so they
// have to be forced directly.
ACE_player playMoveNow _anim;

[
    {
        params ["_unit"];
        _unit switchMove "";
    },
    [ACE_player],
    PUNISHMENT_DURATION
] call CBA_fnc_waitAndExecute;
