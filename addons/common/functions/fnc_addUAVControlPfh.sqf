#include "..\script_component.hpp"
/*
 * Authors: Andx, Copilot
 * Breaks the connection between a UAV and its controller if the distance exceeds a certain radius.
 * Also applies a post-processing effect to simulate signal degradation.
 *
 * Arguments:
 * 0: UAV object
 * 1: Radius (in meters) for connection loss
 *
 * Return Value:
 * Per-frame handler ID (can be used to remove the handler later)
 *
 * Example:
 * [uav_01, 100] remoteExec ["PREFIX_common_fnc_uavControl", 0];
 *
 * Public: Yes
 */

params ["_uav", "_radius", "_controller"];
TRACE_1("fnc_uavControl",_this);

// --- PP-Effekt einmalig erstellen (lokal) ---
private _pp = ppEffectCreate ["FilmGrain", 2005];
_pp ppEffectEnable false;
_pp ppEffectAdjust [0];
_pp ppEffectCommit 0;

// --- Per-Frame-Handler registrieren ---
private _pfhId = [
    {
        params ["_args", "_pfhId"];
        _args params ["_uav", "_radius", "_pp", "_controller"];

        systemChat format ["PFH started - %1", _controller];

        // Wenn niemand das UAV steuert → Effekt aus, keine weitere Logik
        if (isNull _controller) exitWith {
            _pp ppEffectEnable false;
            _pp ppEffectAdjust [0];
            _pp ppEffectCommit 0.1;
        };

        // Nur auf der Maschine weiterarbeiten, auf der der Controller lokal ist
        //if (!local _controller) exitWith {};

        systemChat format ["PFH - %1", _controller];

        // Auto-Cleanup bei Tod
        if (!alive _uav || !alive _controller) exitWith {
            _pp ppEffectEnable false;
            _pp ppEffectAdjust [0];
            _pp ppEffectCommit 0;
            [_pfhId] call CBA_fnc_removePerFrameHandler;
        };

        private _dist = _controller distance _uav;
        private _connectedUav = getConnectedUAV _controller;
        private _isConnected = (_connectedUav isEqualTo _uav);

        // Letzten Zustand holen (nur für Hint-Debounce)
        private _lastState = _controller getVariable ["uav_link_state", "unknown"];

        // --- Verbindung trennen, wenn zu weit weg ---
        if (_dist > _radius) then {

            if (_isConnected) then {
                _controller connectTerminalToUAV objNull;

                if (_lastState != "lost") then {
                    hintSilent format ["UAV-Link verloren! (%1m)", round _dist];
                    _controller setVariable ["uav_link_state", "lost"];
                };
            };

        } else {

            // --- Verbindung wiederherstellen, wenn im Radius ---
            if (!_isConnected) then {
                _controller connectTerminalToUAV _uav;

                if (_lastState != "connected") then {
                    hintSilent format ["UAV-Link hergestellt (%1m)", round _dist];
                    _controller setVariable ["uav_link_state", "connected"];
                };
            };
        };

        // --- SIGNAL-DEGRADATION / FILMGRAIN ---
        private _shouldBlur = (cameraOn isEqualTo _uav);

        if (_shouldBlur) then {
            private _factor = (_dist / _radius) min 1;
            private _blur = _factor * _factor;

            _pp ppEffectEnable true;
            _pp ppEffectAdjust [
                _blur min 1,
                1.25,
                2.01,
                0.75,
                1.0,
                _blur min 1
            ];
            _pp ppEffectCommit 0.2;

        } else {
            _pp ppEffectAdjust [0];
            _pp ppEffectCommit 0.1;
            _pp ppEffectEnable false;
        };

    },
    0.5,
    [_uav, _radius, _pp, _controller]
] call CBA_fnc_addPerFrameHandler;

_pfhId;
