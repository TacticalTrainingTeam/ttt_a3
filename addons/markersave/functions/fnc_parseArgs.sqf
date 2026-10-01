#include "..\script_component.hpp"
/*
 * Author: Andx
 * Splits the argument text of a chat command into phase text, channel and flags.
 *
 * Arguments:
 * 0: Argument text of the chat command <STRING>
 * 1: Treat a trailing channel name or "local" as channel instead of text <BOOL> (default: false)
 *
 * Return Value:
 * [text, channel, local, all] <ARRAY>
 * - text: remaining text (phase name or number) <STRING>
 * - channel: channel name, -1 if none was given <STRING, NUMBER>
 * - local: "local" was given as channel <BOOL>
 * - all: "--all" flag was given <BOOL>
 *
 * Example:
 * ["Phase 1 group", true] call ttt_markersave_fnc_parseArgs
 *
 * Public: No
 */

params [
    ["_input", "", [""]],
    ["_parseChannel", false, [true]]
];

private _tokens = _input splitString " ";

private _all = _tokens findIf {toLower _x == "--all"} != -1;
_tokens = _tokens select {toLower _x != "--all"};

private _channel = -1;
private _local = false;

if (_parseChannel && {_tokens isNotEqualTo []}) then {
    private _last = toLower (_tokens select -1);

    if (_last == "local" || {_last in CHANNEL_NAMES}) then {
        _tokens deleteAt (count _tokens - 1);
        _local = _last == "local";

        if (!_local) then {
            _channel = _last;
        };
    };
};

[_tokens joinString " ", _channel, _local, _all] // return
