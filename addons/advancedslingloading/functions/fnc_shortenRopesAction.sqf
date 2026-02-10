#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action handler for shortening ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_shortenRopesAction
 *
 * Public: No
 */

private _vehicle = vehicle player;
if ([_vehicle] call FUNC(canShortenRopes)) then {
    private _activeRopes = [_vehicle] call FUNC(getActiveRopes);
    if (count _activeRopes > 1) then {
        player setVariable ["ASL_Shorten_Index_Vehicle", _vehicle];
        ["Shorten Cargo Ropes", "ASL_Shorten_Ropes_Index_Action", _activeRopes] call FUNC(showSelectRopesMenu);
    } else {
        if (count _activeRopes == 1) then {
            [_vehicle, player, (_activeRopes select 0) select 0] call FUNC(shortenRopes);
        };
    };
};
