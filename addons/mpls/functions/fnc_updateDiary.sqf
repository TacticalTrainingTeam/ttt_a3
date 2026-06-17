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

private _allDiary = ACE_player allDiaryRecords QGVAR(loadoutS);
private _diary = _allDiary select 0;
private _diaryID = _diary select 8;

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

private _content = format ["Saved Equipment<br />
%1: %2 <br />
<img image='%3' width='128' height='64'/> <br />
%4: %5 <br />
<img image='%6' width='128' height='64'/> <br />
%7: %8 <br />
<img image='%9' width='128' height='64'/> <br />
%10: %11 <br />
<img image='%12' width='128' height='128'/> <br />
%13: %14 <br />
<img image='%15' width='128' height='128'/> <br />
%16: %17 <br />
<img image='%18' width='128' height='128'/>",

LLSTRING(primary), getText (configFile >> "CfgWeapons" >> _primaryClass >> "displayName"), getText (configFile >> "CfgWeapons" >> _primaryClass >> "picture"),
LLSTRING(secondary), getText (configFile >> "CfgWeapons" >> _secondaryClass >> "displayName"), getText (configFile >> "CfgWeapons" >> _secondaryClass >> "picture"),
LLSTRING(handgun), getText (configFile >> "CfgWeapons" >> _handgunClass >> "displayName"), getText (configFile >> "CfgWeapons" >> _handgunClass >> "picture"),

LLSTRING(uniform), getText (configFile >> "CfgWeapons" >> _uniformClass >> "displayName"), getText (configFile >> "CfgWeapons" >> _uniformClass >> "picture"),
LLSTRING(vest), getText (configFile >> "CfgWeapons" >> _vestClass >> "displayName"), getText (configFile >> "CfgWeapons" >> _vestClass >> "picture"),
LLSTRING(backpack), getText (configFile >> "CfgVehicles" >> _backpackClass >> "displayName"), getText (configFile >> "CfgVehicles" >> _backpackClass >> "picture")
];

//if (ACE_Player diarySubjectExists QGVAR(loadoutS)) then {
   ACE_Player setDiaryRecordText [[QGVAR(loadoutS), _diaryID], [LLSTRING(loadout), _content]];
//};
