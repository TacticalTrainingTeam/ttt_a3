#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Offers the possibility to install Intel via A3 Vanilla, which is then available for each player via one separate 'intel' category in the map view.
* 
* Arguments:
* 0: Intelobject <OBJECT>
* 1: Actiontitel der als Interaktion gezeigt wird <STRING> 
* 2: Object nach Interaktion löschen (ausblenden) <BOOL>
* 3: Intelinhalt <ARRAY> format [Titel <STRING>, Inhalt <STRING>] (Der String unterstüzt HTML-Syntax für z.B. Bilder)
*
* Return Value:
* None
*
* Example (used LOCAL i.e.: initPlayerLocal.sqf):
* [intel_01, "Lagekarte des Gegners untersuchen", false, ["gefundene Karte", "<img image='pictures\Karte_v3.paa' width=370 height=370/>"]] call ttt_intel_fnc_addIntel;
* [intel_02, "Dokumente nehmen", true, ["eingesammeltes Dokument", "Hier stehen wichtige Informationen"]] call ttt_intel_fnc_addIntel;
*
* Public: No
*/

params ["_object", "_title", "_delete","_textInfo"];

if (_object getVariable ["ttt_infoShared", false]) exitWith {
    player createDiarySubject ["ttt_intel", "Intel"];
    player createDiaryRecord ["ttt_intel", _textInfo];
};

_object addAction [
    format ["<t size='1.2', color='#00FF00'>%1</t>",_title],
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_delete", "_textInfo"];

        if !(player diarySubjectExists "ttt_intel") then {
            player createDiarySubject ["ttt_intel", "Intel"];
        };

        {
            [_x, ["ttt_intel", _textInfo]] remoteExec ["createDiaryRecord", _x, true]
        } forEach allPlayers;
        [_target,_actionId] remoteExec ["removeAction", 0, true];

        if (_delete) then {
            [_target] remoteExec ["hideObjectGlobal", 0, false];
        };

        switch (((currentWeapon _caller) call BIS_fnc_itemType) select 1) do {
            case "": {
                switch (stance _caller) do {
                    case "CROUCH": {_caller switchMove "AinvPknlMstpSnonWnonDnon_Putdown_AmovPknlMstpSnonWnonDnon"};
                    case "PRONE": {_caller switchMove "AinvPpneMstpSnonWnonDnon_Putdown_AmovPpneMstpSnonWnonDnon"};
                    default {_caller switchMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"};
                };
            };
            case "Handgun": {
                switch (stance _caller) do {
                    case "CROUCH": {_caller switchMove "AinvPknlMstpSrasWpstDnon_Putdown_AmovPknlMstpSrasWpstDnon"};
                    case "PRONE": {_caller switchMove "AinvPpneMstpSrasWpstDnon_Putdown_AmovPpneMstpSrasWpstDnon"};
                    default {_caller switchMove "AinvPercMstpSrasWpstDnon_Putdown_AmovPercMstpSrasWpstDnon"};
                };
            };
            case "RocketLauncher": {
                switch (stance _caller) do {
                    case "CROUCH": {_caller switchMove "AinvPknlMstpSrasWlnrDnon_Putdown_AmovPknlMstpSrasWlnrDnon"};
                    case "PRONE": {_caller switchMove "AinvPpneMstpSrasWrflDnon_Putdown_AmovPpneMstpSrasWrflDnon"};
                    default {_caller switchMove "AinvPercMstpSrasWlnrDnon_Putdown_AmovPercMstpSrasWlnrDnon"};
                };
            };
            default {
                switch (stance _caller) do {
                    case "CROUCH": {_caller switchMove "AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"};
                    case "PRONE": {_caller switchMove "AinvPpneMstpSrasWrflDnon_Putdown_AmovPpneMstpSrasWrflDnon"};
                    default {_caller switchMove "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"};
                };
            };
        };

        _target setVariable ["ttt_infoShared", true, true];
        [format [LLSTRING(intelAdded), (name _caller), (_textInfo select 0)]] remoteExec ["hint", 0, false];
    },
    [
        _delete,
        _textInfo
    ],
    99,
    true,
    false,
    "",
    "true",
    2
];