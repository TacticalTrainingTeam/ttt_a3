#include "..\script_component.hpp"
/*
 * Author: Andx
 * Hides or shows incoming chat messages. While hidden, a HandleChatMessage
 * mission event handler blocks every new message, so nothing has to clear the
 * chat each frame.
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
        // The handler only exists while chat is hidden: returning true blocks the message,
        // and without the handler other mods' HandleChatMessage handlers are unaffected
        GVAR(handle) = addMissionEventHandler ["HandleChatMessage", {true}];
    };
    // The handler only blocks new messages, so clear the ones already on screen once
    clearRadio;
} else {
    if (!isNil QGVAR(handle)) then {
        removeMissionEventHandler ["HandleChatMessage", GVAR(handle)];
        GVAR(handle) = nil;
    };
};
