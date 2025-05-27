#include "script_component.hpp"

//Nur für Spieler
if (!hasInterface) exitWith {};

loadoutDB = missionNamespace getVariable [QGVAR(loadoutDB), nil];
private _loadout = loadoutDB getOrDefault [getPlayerUID player, nil];

if (!isNil _loadout) then {
    //es gibt für diese Spieler UID schon ein gespeichertes Loaodut, also laden wir das
    [
        {
            params ["_player"];
            [_player] call FUNC(applyLoadout);
        },
        [player],
        5 //5 Sekunden warten für Lag bei der normalen Loadoutvergabe
    ] call CBA_fnc_waitAndExecute;
};

//erster Loadoutsave und Start für den 10-minütigen Save
[
    {            
        params ["_player"];
        [_player] call FUNC(saveLoadout);
        loadoutDB set [[getPlayerUID player, "_first"] joinString "", getUnitLoadout player]; //saves the very first loadout to the DB 
    },
    [player],
    10
] call CBA_fnc_waitAndExecute;

//Nur für JIP
if (didJIP) then {
    if (!isNil QEGVAR(teleport,teleporter)) then { //addAction am Teleporter
        QEGVAR(teleport,teleporter) addAction ["Startloadout ausrüsten", {

            params ["", "_caller"];
            private _loadout = loadoutDB get ([getPlayerUID player, "_first"] joinString "");
            _caller setUnitLoadout _loadout;

        }, [], 0, false, true];
    } else { //addAction am Spieler selber wenn Teleporter nicht existiert
        actionID = player addAction ["Startloadout ausrüsten", {

            params ["", "_caller"];

            _caller setUnitLoadout (loadoutDB get ([getPlayerUID player, "_first"] joinString ""));
        }, [], 0, false, true];
    };

    [
        {            
            params ["_player", "_actionID"];
            _player removeAction _actionID;
            hint format ["Zeit vorbei!"];
        },
        [player, actionID],
        60 //nach 60 Sekunden wird die AddAction gelöscht
    ] call CBA_fnc_waitAndExecute;
};
