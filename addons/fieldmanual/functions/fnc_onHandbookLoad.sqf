#include "..\script_component.hpp"
/*
 * Author: Andx
 * Connects the handbook page to SQF when the handbook display opens.
 *
 * Arguments:
 * 0: Handbook display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ttt_fieldmanual_fnc_onHandbookLoad
 *
 * Public: No
 */

params [["_display", displayNull, [displayNull]]];

private _browser = _display displayCtrl IDC_HANDBOOK_BROWSER;

// HEMTT does not know this event yet and would warn about the plain string
private _dialogEvent = ["JS", "Dialog"] joinString "";

_browser ctrlAddEventHandler [_dialogEvent, {
    params ["_control", "_isConfirmDialog", "_message"];

    if (_isConfirmDialog) exitWith { false };

    [_control, _message] call FUNC(onHandbookMessage);
    true
}];
