#include "..\script_component.hpp"
/*
* Author: Andx
* Per-frame handler tick (started by fnc_startMonitor.sqf) that watches the local player's
* connected UAV and applies distance-based signal degradation / connection loss, reconnecting
* automatically once back in range. Runs entirely locally: only ever looks at the local player,
* and connectTerminalToUAV/post-process effects are local-machine commands, so nothing here needs
* to be networked. Works for any UAV (any faction/mod, pre-placed or spawned during the mission)
* since getConnectedUAV is a live engine query, not a per-class registration.
*
* Arguments:
* None
*
* Return Value:
* None
*
* Public: No
*/

if (isNull player) exitWith {};

private _currentUav = getConnectedUAV player;
private _trackedUav = missionNamespace getVariable [QGVAR(trackedUav), objNull];
private _tracking = !(isNull _trackedUav);
private _connected = missionNamespace getVariable [QGVAR(connected), false];

// Stop tracking first (before possibly starting a new one below), so a direct switch from one
// UAV to another tears the old one's state/effects down instead of clobbering it.
if (_tracking && {
    !alive player
    || {isNull _trackedUav}
    || {!alive _trackedUav}
    || {!(isNull _currentUav) && {_currentUav != _trackedUav}}           // player connected to a different UAV than the one we're tracking
    || {_connected && {isNull _currentUav}}                              // manual disconnect while still in range - don't fight it
}) then {
    [] call FUNC(stopTracking);
    _tracking = false;
    _trackedUav = objNull;
    _connected = false;
};

// Start tracking a newly connected UAV
if (!_tracking && {!(isNull _currentUav)}) then {
    _trackedUav = _currentUav;
    _connected = true;
    _tracking = true;
    missionNamespace setVariable [QGVAR(trackedUav), _trackedUav];
    missionNamespace setVariable [QGVAR(connected), true];

    private _ppBlur = ppEffectCreate ["DynamicBlur", 850];
    _ppBlur ppEffectEnable true;
    _ppBlur ppEffectAdjust [0];
    _ppBlur ppEffectCommit 0;
    missionNamespace setVariable [QGVAR(ppBlur), _ppBlur];

    private _ppGrain = ppEffectCreate ["FilmGrain", 851];
    _ppGrain ppEffectEnable true;
    _ppGrain ppEffectAdjust [0, 1, 1, 0, 0, false];
    _ppGrain ppEffectCommit 0;
    missionNamespace setVariable [QGVAR(ppGrain), _ppGrain];
};

if (!_tracking) exitWith {};

private _degradeDistance = GVAR(degradeDistance);
private _lostDistance = GVAR(lostDistance) max (_degradeDistance + 1);
private _dist = player distance _trackedUav;

if (_dist >= _lostDistance) then {
    if (_connected) then {
        player connectTerminalToUAV objNull;
        _connected = false;
        missionNamespace setVariable [QGVAR(connected), false];
        [[LLSTRING(linkLost), round _dist], 3] call ace_common_fnc_displayTextStructured;
    };
} else {
    if (!_connected) then {
        player connectTerminalToUAV _trackedUav;
        _connected = true;
        missionNamespace setVariable [QGVAR(connected), true];
        [[LLSTRING(linkEstablished), round _dist], 3] call ace_common_fnc_displayTextStructured;
    };
};

private _ppBlur = missionNamespace getVariable [QGVAR(ppBlur), objNull];
private _ppGrain = missionNamespace getVariable [QGVAR(ppGrain), objNull];

if (_connected && {cameraOn isEqualTo _trackedUav}) then {
    private _factor = (((_dist - _degradeDistance) / (_lostDistance - _degradeDistance)) max 0) min 1;

    _ppBlur ppEffectAdjust [_factor * 1.5];
    _ppBlur ppEffectCommit 0.3;

    _ppGrain ppEffectAdjust [_factor * 0.8, 1.25, 2.01, _factor * 0.5, 1, false];
    _ppGrain ppEffectCommit 0.3;
} else {
    _ppBlur ppEffectAdjust [0];
    _ppBlur ppEffectCommit 0.3;

    _ppGrain ppEffectAdjust [0, 1, 1, 0, 0, false];
    _ppGrain ppEffectCommit 0.3;
};
