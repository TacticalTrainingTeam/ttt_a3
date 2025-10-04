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
 * [params] call PREFIX_advancedtowing_fnc_dropTowRopesAction
 *
 * Public: No
 */

private _vehicle = player getVariable [QGVAR(Ropes_Vehicle), objNull];

if([] call FUNC(canDropTowRopes)) then {
    [_vehicle, player] call FUNC(dropTowRopes);
};
