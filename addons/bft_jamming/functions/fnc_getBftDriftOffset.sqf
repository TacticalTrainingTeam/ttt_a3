#include "..\script_component.hpp"
/*
 * Author: Andy
 *
 * Returns a smoothed 2D offset vector (ASL-space, z=0) to add to a jammed unit's displayed BFT
 * position. Re-randomizes its target direction/magnitude only every BFT_JAM_DRIFT_UPDATE_INTERVAL
 * pulses (called at most once per unit/jammer pair per pulse) and eases the applied offset toward that target each time, so
 * a Drift-jammed icon visibly wanders instead of teleporting every pulse.
 *
 * State is kept per (unit, jammer) pair in GVAR(driftState), a HashMap keyed by
 * "<unitNetId>_<jammerNetId>" -> [currentOffset, targetOffset, pulsesUntilRetarget].
 *
 * Arguments:
 * 0: Tracked unit being drifted <OBJECT>
 * 1: Jammer causing the drift <OBJECT>
 * 2: Strength, 0..1 (see fnc_calcBftJamStrength.sqf) <NUMBER>
 *
 * Return Value:
 * Offset vector [x, y, 0] <ARRAY>
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]], ["_jammer", objNull, [objNull]], ["_strength", 0, [0]]];

private _key = format ["%1_%2", netId _unit, netId _jammer];
private _magnitude = _strength * BFT_JAM_MAX_DRIFT_DISTANCE;

private _state = GVAR(driftState) getOrDefault [_key, [[0, 0, 0], [0, 0, 0], 0]];
_state params ["_current", "_target", "_pulsesLeft"];

if (_pulsesLeft <= 0) then {
    private _angle = random 360;
    private _mag = _magnitude * (0.7 + random 0.3);
    _target = [_mag * sin _angle, _mag * cos _angle, 0];
    _pulsesLeft = BFT_JAM_DRIFT_UPDATE_INTERVAL;
};

// ease the applied offset a third of the way toward the (possibly new) target each pulse
_current = _current vectorAdd ((_target vectorDiff _current) vectorMultiply 0.34);

GVAR(driftState) set [_key, [_current, _target, _pulsesLeft - 1]];

_current
