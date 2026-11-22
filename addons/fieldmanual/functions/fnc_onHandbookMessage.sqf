#include "..\script_component.hpp"
/*
 * Author: Andx
 * Handles a message sent by the handbook page.
 *
 * Arguments:
 * 0: Browser control <CONTROL>
 * 1: Message <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_control, "ttt_handbook:ready"] call ttt_fieldmanual_fnc_onHandbookMessage
 *
 * Public: No
 */

params [["_control", controlNull, [controlNull]], ["_message", "", [""]]];

// The page message carries the topic after its prefix, so it cannot be a switch case
if (_message find HANDBOOK_MESSAGE_PAGE == 0) exitWith {
    // uiNamespace keeps the page across missions until the game is closed
    uiNamespace setVariable [QGVAR(handbookLastTopic), _message select [count HANDBOOK_MESSAGE_PAGE]];
};

switch (_message) do {
    case HANDBOOK_MESSAGE_READY: {
        // ExecJS reads its script as Latin-1, so umlauts only survive inside Base64
        private _data = [controlNull, ["ToBase64", toJSON (call FUNC(getHandbookData))]] call GVAR(browserAction);
        [_control, ["ExecJS", "window.tttHandbook.receive('" + _data + "')"]] call GVAR(browserAction);
    };
    case HANDBOOK_MESSAGE_CLOSE: {
        // The display must outlive the browser event that is still being handled
        [{
            params ["_display"];
            _display closeDisplay 2;
        }, [ctrlParent _control]] call CBA_fnc_execNextFrame;
    };
};
