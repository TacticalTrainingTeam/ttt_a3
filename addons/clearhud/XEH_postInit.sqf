#include "script_component.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

if (isDedicated) exitWith {};

//Register Keybind
private _keybind = [
    ELSTRING(main,TacticalTrainingTeam),
    "SwitchChat",
    [LSTRING(chatKeybindName),LSTRING(chatKeybindTooltip)],
    { _this call FUNC(toggleChat) },
    "",
    [DIK_COMMA, [true, false, false]]
] call CBA_fnc_addKeybind;

//deactivate the chat by default in MP and assign it to a handle
if (isMultiplayer && GVAR(activated)) then {
    GVAR(handle) = [{clearRadio;}, 0, []] call CBA_fnc_addPerFrameHandler;
    private _activated = parseText format ["<t color='#ff0000'>%1</t>", LLSTRING(chatDisabled)];
    hint formatText [LLSTRING(hintDefault), _activated]
};

