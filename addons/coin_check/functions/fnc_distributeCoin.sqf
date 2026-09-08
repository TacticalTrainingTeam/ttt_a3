#include "..\script_component.hpp"
/*
 * Author: Andx
 * Hands the local player their coin item once, if their Steam UID is registered in the coin
 * database (db.hpp). Runs once per mission per client; a coin tossed into a check is not
 * replaced.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

if (!GVAR(distributionEnabled)) exitWith {};

private _class = [ACE_player] call FUNC(myCoinClass);
if (_class == "") exitWith {};

if ([ACE_player, _class] call BIS_fnc_hasItem) exitWith {};

ACE_player addItem _class;

[LLSTRING(received), true] call ace_common_fnc_displayText;
