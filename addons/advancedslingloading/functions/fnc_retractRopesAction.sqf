#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action handler for retracting ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_retractRopesAction
 *
 * Public: No
 */

private _vehicle = objNull;
if (isNull objectParent player) then {
    _vehicle = cursorTarget;
} else {
    _vehicle = vehicle player;
};
if ([_vehicle] call FUNC(canRetractRopes)) then {
    private _activeRopes = [_vehicle] call FUNC(getActiveRopesWithoutCargo);
    if (count _activeRopes > 1) then {
        player setVariable ["ASL_Retract_Ropes_Index_Vehicle", _vehicle];
        ["Retract Cargo Ropes", "ASL_Retract_Ropes_Index_Action", _activeRopes] call FUNC(showSelectRopesMenu);
    } else {
        if (count _activeRopes == 1) then {
            [_vehicle, player, (_activeRopes select 0) select 0] call FUNC(retractRopes);
        };
    };
};
