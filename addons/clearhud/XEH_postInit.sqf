#include "script_component.hpp"

//For each client, register the keybind
[] call CALLSTACK(FUNC(registerChatKeybind));

//deactivate the chat by default in MP and assign it to a handle
if (isMultiplayer && GVAR(activated)) then {
	GVAR(handle) = [{clearRadio;}, 0, []] call CBA_fnc_addPerFrameHandler;
	hint parseText "Chat <t color='#ff0000'>disabled</t>";
};