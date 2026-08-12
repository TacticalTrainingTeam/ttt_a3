#include "script_component.hpp"

//For each client, register the keybind
call FUNC(registerChatKeybind);

//deactivate the chat by default in MP and assign it to a handle
if (isMultiplayer && GVAR(activated)) then {
    GVAR(handle) = [{clearRadio;}, 0, []] call CBA_fnc_addPerFrameHandler;
    private _activated = parseText format ["<t color='#ff0000'>%1</t>", LLSTRING(chatDisabled)];
    hint formatText [LLSTRING(hintDefault), _activated]
};
