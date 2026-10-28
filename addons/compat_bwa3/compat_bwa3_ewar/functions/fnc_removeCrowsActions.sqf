#include "..\script_component.hpp"
/*
 * Author: Andx
 * Removes the activate/deactivate actions Crows adds to jammers from Dingos with CG13.
 *
 * Arguments:
 * 0: Jammer map <HASHMAP>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_jamMap] call ttt_compat_bwa3_fnc_removeCrowsActions
 *
 * Public: No
 */

params [["_jamMap", createHashMap, [createHashMap]]];

{
    private _jammer = _y select 0;

    // Dingos only use config user actions, so nothing else is lost
    if (!isNull _jammer && {getNumber (configOf _jammer >> "BWA3_hasECM") == 1}) then {
        removeAllActions _jammer;
    };
} forEach _jamMap;
