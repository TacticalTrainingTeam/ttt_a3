#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_common_fnc_UAVControlWatcher
 *
 * Public: No
 */

params ["_uav", "_radius"];
TRACE_1("fnc_UAVControlWatcher",_this);

[
    {
        params ["_args", "_pfhId"];
        _args params ["_uav", "_radius"];

        private _controller = remoteControlled _uav;

        systemChat format ["Watcher - %1", _controller];

        if (!isNull _controller) then {
            [_uav, _radius, _controller] call FUNC(addUAVControlPfh);
            systemChat format ["Watcher found- %1", _controller];
            [_pfhId] call CBA_fnc_removePerFrameHandler;
        };
    },
    0.2,
    [_uav, _radius]
] call CBA_fnc_addPerFrameHandler;
