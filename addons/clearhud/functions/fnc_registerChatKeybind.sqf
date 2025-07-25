#include "..\script_component.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

/*
 * Authors: Soldia, Andx
 * Add Keybind to toggle Chat visibility
 *
 * Arguments:
 * None
 *
 * Return Value:
 * True <BOOLEAN>
 *
 * Example:
 * [] call ttt_clearhud_fnc_registerChatKeybind
 *
 * Public: No
 */

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
