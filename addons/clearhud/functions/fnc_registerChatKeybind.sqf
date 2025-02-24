#include "..\script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

private ["_addon", "_actionid", "_tooltip", "_description", "_key", "_modifier", "_keybind"];

//initiate the cba keybind, will return the current keybind
_keybind = [
    ELSTRING(main,TacticalTrainingTeam),
    "SwitchChat",
    [LSTRING(chatKeybindName),LSTRING(chatKeybindTooltip)], //ToDo Stringtable
    { call FUNC(suppressChat)},
    "",
    [DIK_COMMA, [true, false, false]]
] call CBA_fnc_addKeybind;

true