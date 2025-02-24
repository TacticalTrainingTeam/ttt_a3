#include "..\script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

private ["_addon", "_actionid", "_tooltip", "_description", "_key", "_modifier", "_keybind"];

//define all parameters for the cba keybinding
_addon = "Soldias Chat Disabler";
_actionid = "SwitchChat";
_actionname = "Disable / Enable Chat";
_tooltip = "Press to toggle the chat suppression";
_key = DIK_COMMA;
_modifier = [true, false, false];

//initiate the cba keybind, will return the current keybind
_keybind = [_addon, _actionid,[_actionname,_tooltip], { call clearhud_suppress_fnc_suppressChat}, "", [_key, _modifier]] call CBA_fnc_addKeybind;

true