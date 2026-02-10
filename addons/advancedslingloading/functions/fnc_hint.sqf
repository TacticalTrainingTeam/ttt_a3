#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Shows a hint message, with Exile support
 *
 * Arguments:
 * 0: Message <STRING>
 * 1: Is success (optional, default true) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Cargo attached", true] call ttt_advancedslingloading_fnc_hint
 *
 * Public: No
 */

params ["_msg",["_isSuccess",true]];
if(isNil "ExileClient_gui_notification_event_addNotification") then {
    hint _msg;
} else {
    if(_isSuccess) then {
        ["Success", [_msg]] call ExileClient_gui_notification_event_addNotification;
    } else {
        ["Whoops", [_msg]] call ExileClient_gui_notification_event_addNotification;
    };
};
