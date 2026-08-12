#include "..\script_component.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

/*
 * Authors: Soldia, Andx
 * Toggles chat visibility
 *
 * Arguments:
 * 0: Display <DISPLAY> (unused)
 * 1: DIK code <NUMBER>
 * 2: Shift pressed <BOOLEAN>
 * 3: Ctrl pressed <BOOLEAN>
 * 4: Alt pressed <BOOLEAN>
 *
 * Return Value:
 * True <BOOLEAN>
 *
 * Example:
 * [] call ttt_clearhud_fnc_toggleChat
 *
 * Public: No
 */

TRACE_1("fnc_toggleChat",_this);

params ["", "_dikCode", "_shift", "_ctrl", "_alt"];

//read the current status of chat deactivation (true = deactivated)
private _status = GVAR(activated);

//create several strings for the current variables
private _activated = "";
if (_status) then {
    _activated = parseText format ["<t color='#00ff00'>%1</t>", LLSTRING(chatEnabled)];
    [GVAR(handle)] call CBA_fnc_removePerFrameHandler;
    _status = false;
} else {
    _activated = parseText format ["<t color='#ff0000'>%1</t>", LLSTRING(chatDisabled)];
    GVAR(handle) = [{clearRadio;}, 0, []] call CBA_fnc_addPerFrameHandler;
    _status = true;
};

//translate the DIK code and modifiers into the readable keybind name
private _keyName = [_dikCode, [_shift, _ctrl, _alt]] call CBA_fnc_localizeKey;
private _keybind = parseText format ["<t color='#FFA54F'>%1</t>", _keyName];

[
    formatText [LLSTRING(hintToggle), _activated, lineBreak, _keybind]
] call ace_common_fnc_displayTextStructured;

GVAR(activated) = _status;

true
