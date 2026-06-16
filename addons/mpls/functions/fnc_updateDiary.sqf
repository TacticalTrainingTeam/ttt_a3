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

//todo clean loadout

if (ACE_Player diarySubjectExists QGVAR(loadout)) then {
   ACE_Player removeDiaryRecord [QGVAR(loadout), GVAR(recordID)];
   GVAR(recordID) = ACE_Player createDiaryRecord [QGVAR(loadout), [LLSTRING(loadout), _loadout], taskNull, ""];
};
