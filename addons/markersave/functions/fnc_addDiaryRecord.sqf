#include "..\script_component.hpp"
/*
 * Author: Andx
 * Adds a diary record about a saved phase to the local player.
 *
 * Arguments:
 * 0: Phase name <STRING>
 * 1: Number of saved markers <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Phase 1", 12] call ttt_markersave_fnc_addDiaryRecord
 *
 * Public: No
 */

params [
    ["_name", "", [""]],
    ["_count", 0, [0]]
];

// Das Tagebuch gehört zur Einheit, nach einem Respawn muss das Thema neu angelegt werden
if !(player diarySubjectExists QGVAR(diary)) then {
    player createDiarySubject [QGVAR(diary), LLSTRING(diarySubject)];
};

systemTime params ["", "", "", "_hour", "_minute"];

private _time = format [
    "%1:%2",
    [_hour, 2] call CBA_fnc_formatNumber,
    [_minute, 2] call CBA_fnc_formatNumber
];

player createDiaryRecord [QGVAR(diary), [_name, format [LLSTRING(diaryText), _count, _time]]];
