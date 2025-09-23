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
 * [params] call ttt_advancedslingloading_fnc_shortenRopesAction
 *
 * Public: No
 */

private ["_vehicle"];

_vehicle = vehicle ACE_player;
if([_vehicle] call FUNC(canShortenRopes)) then {
    private ["_activeRopes"];
    _activeRopes = [_vehicle] call FUNC(getActiveRopes);
    if(count _activeRopes > 1) then {
        ACE_player setVariable [QGVAR(shorten_Index_Vehicle), _vehicle];
        ["Shorten Cargo Ropes",QFUNC(shortenRopesIndexAction),_activeRopes] call FUNC(showSelectRopesMenu);
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,ACE_player,(_activeRopes select 0) select 0] call FUNC(shortenRopes);
        };
    };
};
