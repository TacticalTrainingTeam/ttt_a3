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
 * [params] call PREFIX_advancedtowing_fnc_takeTowRopesAction
 *
 * Public: No
 */


private _vehicle = cursorTarget;

if([_vehicle] call FUNC(canTakeTowRopes)) then {

    private _canTakeTowRopes = true;

    if (missionNamespace getVariable [QGVAR(LOCKED_VEHICLES_ENABLED), false]) then {
        // Locked vehicles are enabled, so do nothing special
    } else {
        if (locked _vehicle > 1) then {
            ["Cannot take tow ropes from locked vehicle", false] call FUNC(customHint); //ToDo Localize
            _canTakeTowRopes = false;
        };
    };

    if(_canTakeTowRopes) then {
        [_vehicle, player] call FUNC(takeTowRopes);
    };

};
