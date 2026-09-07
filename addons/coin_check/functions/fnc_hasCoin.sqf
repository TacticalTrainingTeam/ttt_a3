#include "..\script_component.hpp"
/*
 * Author: Andx
 * Checks whether a unit is currently carrying its own coin item.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: ACE_player)
 *
 * Return Value:
 * 0: Whether the unit has its coin <BOOL>
 * 1: The unit's coin classname, "" if it has none <STRING>
 *
 * Example:
 * [ACE_player] call ttt_coin_check_fnc_hasCoin
 *
 * Public: No
 */

params [["_unit", ACE_player, [objNull]]];

private _class = [_unit] call FUNC(myCoinClass);

if (_class == "") exitWith {[false, ""]};

[[_unit, _class] call ace_common_fnc_hasItem, _class]
