#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Displays CBA extended Loadouts in the diary.
 *
 * Arguments:
 * 0: CBA Extended Loadout Array <ARRAY>
 *
 * Return Value:
 * <NONE>
 *
 * Example:
 * [params] call ttt_mpls_fnc_updateDiary
 *
 * Public: No
 */

params ["_loadout"];
TRACE_1("fnc_updateDiary",_this);

// CBA extended loadout array has a BI loadout array as its first element, we need to extract it to get the actual items for the diary record.;
private _loadoutArray = _loadout select 0; 

// Extract BI loadout fields
private _primary   = _loadoutArray select 0;
private _secondary = _loadoutArray select 1;
private _handgun   = _loadoutArray select 2;

private _uniform   = _loadoutArray select 3;
private _vest      = _loadoutArray select 4;
private _backpack  = _loadoutArray select 5;

// Extract classnames
private _primaryClass   = _primary select 0;
private _secondaryClass = _secondary select 0;
private _handgunClass   = _handgun select 0;

private _uniformClass   = _uniform select 0;
private _vestClass      = _vest select 0;
private _backpackClass  = _backpack select 0;

private _content = format [
    "%1: %2\n%3: %4\n%5: %6\n%7: %8\n%9: %10\n%11: %12",
    LLSTRING(primary), ["CfgWeapons", _primaryClass] call FUNC(getDisplayName),
    LLSTRING(secondary), ["CfgWeapons", _secondaryClass] call FUNC(getDisplayName),
    LLSTRING(handgun), ["CfgWeapons", _handgunClass] call FUNC(getDisplayName),
    LLSTRING(uniform), ["CfgVehicles", _uniformClass] call FUNC(getDisplayName),
    LLSTRING(vest), ["CfgVehicles", _vestClass] call FUNC(getDisplayName),
    LLSTRING(backpack), ["CfgVehicles", _backpackClass] call FUNC(getDisplayName)
];

if (ACE_Player diarySubjectExists QGVAR(loadout)) then {
   ACE_Player removeDiaryRecord [QGVAR(loadout), GVAR(recordID)];
   GVAR(recordID) = ACE_Player createDiaryRecord [QGVAR(loadout), [LLSTRING(loadout), _loadout], taskNull, ""];
};
