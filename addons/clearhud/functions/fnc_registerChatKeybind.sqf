#include "..\script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

/*
 * Authors: Soldia, Andx
 * Add Keybind to toggle Chat visibility
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_clearhud_fnc_registerChatKeybind
 *
 * Public: No
 */

params [];
TRACE_1("fnc_registerChatKeybind",_this);

//initiate the cba keybind, will return the current keybind
private _keybind = [
    ELSTRING(main,TacticalTrainingTeam),
    "SwitchChat",
    [LSTRING(chatKeybindName),LSTRING(chatKeybindTooltip)],
    { call FUNC(toggleChat)},
    "",
    [DIK_COMMA, [true, false, false]]
] call CBA_fnc_addKeybind;

true