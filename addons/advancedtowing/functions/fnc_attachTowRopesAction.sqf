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
 * [params] call PREFIX_advancedtowing_fnc_attachTowRopesAction
 *
 * Public: No
 */

private  _cargo = cursorTarget;
private _vehicle = player getVariable [QGVAR(Ropes_Vehicle), objNull];

if([_vehicle, _cargo] call FUNC(canAttachTowRopes)) then {

    private _canBeTowed = true;

    if!(missionNamespace getVariable [QGVAR(Locked_Vehicles_Enabled), false]) then {
        if( locked _cargo > 1 ) then {
            ["Cannot attach tow ropes to locked vehicle", false] call FUNC(customHint);//ToDo Localize
            _canBeTowed = false;
        };
    };

    if(_canBeTowed) then {
        [_cargo, player] call FUNC(attachTowRopes);
    };

};
