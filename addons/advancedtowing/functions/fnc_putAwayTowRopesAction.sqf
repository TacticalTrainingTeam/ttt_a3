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
 * [params] call PREFIX_advancedtowing_fnc_putAwayTowRopesAction
 *
 * Public: No
 */

private _vehicle = cursorTarget;

if([_vehicle] call FUNC(canPutAwayTowRopes)) then {

    private _canPutAwayTowRopes = true;

    if!(missionNamespace getVariable [QGVAR(Locked_Vehicles_Enabled), false]) then {
        if( locked _vehicle > 1 ) then {
            ["Cannot put away tow ropes in locked vehicle", false] call FUNC(customHint); //ToDo Localize
            _canPutAwayTowRopes = false;
        };
    };

    if(_canPutAwayTowRopes) then {
        [_vehicle, player] call FUNC(putAwayTowRopes);
    };
};
