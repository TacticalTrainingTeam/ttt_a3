#include "..\script_component.hpp"
/*
 * Author: Andx
 * Removes the activate/deactivate actions Crows adds to jammers from vehicles with a DUKE.
 *
 * Arguments:
 * 0: Jammer map <HASHMAP>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_jamMap] call ttt_compat_rhs_fnc_removeCrowsActions
 *
 * Public: No
 */

params [["_jamMap", createHashMap, [createHashMap]]];

{
    private _jammer = _y select 0;

    // The DUKE is toggled via its weapon, so none of its actions are lost
    if (!isNull _jammer && {getText (configOf _jammer >> "rhs_duke_type") isNotEqualTo ""}) then {
        removeAllActions _jammer;
    };
} forEach _jamMap;
