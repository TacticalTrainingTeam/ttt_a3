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
    "%1: %2 <img image='%13'/>\n
    %3: %4 <img image='%14'/>\n
    %5: %6 <img image='%15'/>\n
    %7: %8 <img image='%16'/>\n
    %9: %10 <img image='%17'/>\n
    %11: %12 <img image='%18'/>",
    LLSTRING(primary), ["CfgWeapons", _primaryClass] call EFUNC(common,getDisplayName),
    LLSTRING(secondary), ["CfgWeapons", _secondaryClass] call EFUNC(common,getDisplayName),
    LLSTRING(handgun), ["CfgWeapons", _handgunClass] call EFUNC(common,getDisplayName),
    LLSTRING(uniform), ["CfgWeapons", _uniformClass] call EFUNC(common,getDisplayName),
    LLSTRING(vest), ["CfgWeapons", _vestClass] call EFUNC(common,getDisplayName),
    LLSTRING(backpack), ["CfgVehicles", _backpackClass] call EFUNC(common,getDisplayName),
    ["CfgWeapons", _primaryClass] call EFUNC(common,getDisplayImage),
    ["CfgWeapons", _secondaryClass] call EFUNC(common,getDisplayImage),
    ["CfgWeapons", _handgunClass] call EFUNC(common,getDisplayImage),
    ["CfgWeapons", _uniformClass] call EFUNC(common,getDisplayImage),
    ["CfgWeapons", _vestClass] call EFUNC(common,getDisplayImage),
    ["CfgVehicles", _backpackClass] call EFUNC(common,getDisplayImage)
];

if (ACE_Player diarySubjectExists QGVAR(loadout)) then {
   ACE_Player setDiaryRecordText [[QGVAR(loadout), GVAR(recordID)], [LLSTRING(loadout), _content]];
};
