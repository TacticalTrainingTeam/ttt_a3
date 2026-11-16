#include "..\script_component.hpp"
/*
 * Author: Andx
 * Hides or shows incoming chat messages. While hidden, the chat feed is
 * cleared every frame.
 *
 * Arguments:
 * 0: Hide chat <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [true] call ttt_clearhud_fnc_hideChat
 *
 * Public: No
 */

params [["_hide", true, [true]]];

if (_hide) then {
    if (isNil QGVAR(handle)) then {
        // A per-frame handler is genuinely needed here, there is no event to replace it:
        // HandleChatMessage does not fire for scripted messages (systemChat, sideChat, ...),
        // which would then stay visible, and showChat false would hide the whole chat window
        // instead of only the messages. clearRadio is a single cheap engine command.
        GVAR(handle) = [{clearRadio}, 0, []] call CBA_fnc_addPerFrameHandler;
    };
} else {
    if (!isNil QGVAR(handle)) then {
        [GVAR(handle)] call CBA_fnc_removePerFrameHandler;
        GVAR(handle) = nil;
    };
};
