#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedslingloading_fnc_hint
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
