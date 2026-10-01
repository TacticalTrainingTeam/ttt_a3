#include "script_component.hpp"

if (!hasInterface) exitWith {};

// Alle Befehle arbeiten nur auf dem Profil des Spielers, deshalb für jeden verfügbar
["savemarkers", {
    params ["_input"];
    ([_input] call FUNC(parseArgs)) params ["_name", "", "", "_all"];

    [_name, !_all] call FUNC(savePhase);
}, "all"] call CBA_fnc_registerChatCommand;

["loadmarkers", {
    params ["_input"];
    ([_input, true] call FUNC(parseArgs)) params ["_phase", "_channel", "_local"];

    [[_phase, -1] select (_phase isEqualTo ""), _channel, _local] call FUNC(loadPhase);
}, "all"] call CBA_fnc_registerChatCommand;

["unloadmarkers", {
    params ["_input"];
    ([_input] call FUNC(parseArgs)) params ["_phase"];

    [[_phase, -1] select (_phase isEqualTo "")] call FUNC(unloadPhase);
}, "all"] call CBA_fnc_registerChatCommand;

["listmarkers", {
    [] call FUNC(listPhases);
}, "all"] call CBA_fnc_registerChatCommand;

["deletemarkers", {
    params ["_input"];
    ([_input] call FUNC(parseArgs)) params ["_phase"];

    [_phase] call FUNC(deletePhase);
}, "all"] call CBA_fnc_registerChatCommand;
