#include "..\script_component.hpp"
/*
 * Author: Andx
 * Removes expired coin checks from the active-checks map, so multiple independent checks
 * (started in different places) don't pile up forever.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _expired = [];

{
    if ((_y select 2) <= CBA_missionTime) then {
        _expired pushBack _x;
    };
} forEach GVAR(activeChecks);

{
    GVAR(activeChecks) deleteAt _x;
} forEach _expired;
