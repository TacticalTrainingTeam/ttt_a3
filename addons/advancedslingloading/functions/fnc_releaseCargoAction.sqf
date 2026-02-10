#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action handler for releasing cargo
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_releaseCargoAction
 *
 * Public: No
 */

private _vehicle = vehicle player;
if ([_vehicle] call FUNC(canReleaseCargo)) then {
    private _activeRopes = [_vehicle] call FUNC(getActiveRopesWithCargo);
    if (count _activeRopes > 1) then {
        player setVariable ["ASL_Release_Cargo_Index_Vehicle", _vehicle];
        ["Release Cargo", "ASL_Release_Cargo_Index_Action", _activeRopes, "Cargo"] call FUNC(showSelectRopesMenu);
    } else {
        if (count _activeRopes == 1) then {
            [_vehicle, player, (_activeRopes select 0) select 0] call FUNC(releaseCargo);
        };
    };
};
