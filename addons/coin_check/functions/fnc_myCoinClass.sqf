#include "..\script_component.hpp"
/*
 * Author: Andx
 * Resolves the classname of the coin item belonging to a unit's Steam UID, as registered in
 * the coin database (db.hpp).
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: ACE_player)
 *
 * Return Value:
 * Coin item classname, or "" if the unit's UID is not in the coin database <STRING>
 *
 * Example:
 * [ACE_player] call ttt_coin_check_fnc_myCoinClass
 *
 * Public: No
 */

params [["_unit", ACE_player, [objNull]]];

private _uid = getPlayerUID _unit;
if (_uid == "") exitWith {""};

GVAR(database) getOrDefault [_uid, ""]
