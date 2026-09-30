#include "..\script_component.hpp"
/*
* Author: Andx
* Starts (or, if QGVAR(enable) is false, stops) the per-frame handler that watches the local
* player's UAV connection distance. Called once from XEH_postInit.sqf and again whenever the
* QGVAR(enable) setting changes.
*
* Arguments:
* None
*
* Return Value:
* None
*
* Public: No
*/

private _pfhId = missionNamespace getVariable [QGVAR(pfhId), -1];

if (GVAR(enable)) then {
    if (_pfhId == -1) then {
        private _newPfhId = [FUNC(monitor), 1, []] call CBA_fnc_addPerFrameHandler;
        missionNamespace setVariable [QGVAR(pfhId), _newPfhId];
    };
} else {
    if (_pfhId != -1) then {
        [_pfhId] call CBA_fnc_removePerFrameHandler;
        missionNamespace setVariable [QGVAR(pfhId), -1];
    };
    [] call FUNC(stopTracking);
};
