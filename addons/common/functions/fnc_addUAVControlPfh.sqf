#include "..\script_component.hpp"
/*
 * Authors: Andx, Copilot
 * Breaks the connection between a UAV and its controller if the distance exceeds a certain radius. Also applies a post-processing effect to simulate signal degradation.
 *
 * Arguments:
 * 0: UAV object
 * 1: Controller object
 * 2: Radius (in meters) for connection loss
 *
 * Return Value:
 * Per-frame handler ID (can be used to remove the handler later)
 *
 * Example:
 * [uav_01, controller_01, 100] call PREFIX_common_fnc_uavControl
 *
 * Public: Yes
 */

params ["_uav", "_controller", "_radius"];
TRACE_1("fnc_uavControl",_this);

// Create PP effect once
private _pp = ppEffectCreate ["dynamicBlur", 200];
_pp ppEffectEnable true;
_pp ppEffectAdjust [0];
_pp ppEffectCommit 0;

// Register CBA per-frame handler
private _pfhId = [
    {
        params ["_args", "_pfhId"];
        _args params ["_uav", "_controller", "_radius", "_pp"];

        // PFH-ID am UAV speichern
        _uav setVariable ["ttt_uav_pfhId", _pfhId];

        // Stop if either entity is gone
        if (!alive _uav || !alive _controller) exitWith {
            _pp ppEffectEnable false;
            [_pfhId] call CBA_fnc_removePerFrameHandler;
        };

        private _dist = _controller distance _uav;
        private _factor = _dist / _radius;
        _factor = _factor min 1;   // clamp to 1

        // --- CONTROL LOGIC ---
        private _connected = isUAVConnected _controller;

        if (_dist > _radius) then {
            if (_connected) then {
                _controller connectTerminalToUAV objNull;
                //hintSilent format ["UAV link lost! (%1m)", round _dist];
                [
                    ["UAV link lost! (%1m)", round _dist]
                ] call ace_common_fnc_displayTextStructured;
            };
        } else {
            if (!_connected) then {
                _controller connectTerminalToUAV _uav;
                //hintSilent format ["UAV link established (%1m)", round _dist];
                [
                    ["UAV link established (%1m)", round _dist]
                ] call ace_common_fnc_displayTextStructured;
            };
        };

        // --- SIGNAL DEGRADATION ---
        private _blur = _factor * 2;   // 0 → clear, 2 → heavy blur
        _pp ppEffectAdjust [_blur];
        _pp ppEffectCommit 0.2;

    },
    1,   // run every 1 second
    [_uav, _controller, _radius, _pp]
] call CBA_fnc_addPerFrameHandler;


//Return the per-frame handler ID so it can be removed later if needed
_pfhId
