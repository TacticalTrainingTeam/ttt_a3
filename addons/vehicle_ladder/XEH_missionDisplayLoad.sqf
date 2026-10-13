#include "script_component.hpp"

// Source: PzGrenBtl402 addons/Ladder/XEH_missionDisplayLoad.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
params ["_display"];

_display displayAddEventHandler ["MouseZChanged", {(_this select 1) call FUNC(handleScrollWheel)}];
_display displayAddEventHandler ["MouseButtonDown", {[ACE_player] call FUNC(confirmLadderAdjust)}];
