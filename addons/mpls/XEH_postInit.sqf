#include "script_component.hpp"

if (!hasInterface) exitWith {};

private _loadoutDB = missionNamespace getVariable [QGVAR(loadoutDB), nil];
_loadout = _loadoutDB get (getPlayerUID ACE_player);
_loadoutDB set [[getPlayerUID ACE_player, "_first"] joinString "", getUnitLoadout ACE_player];

if (!isNil _loadout) then {
    //es gibt für diese Spieler UID schon ein gespeichertes Loaodut, also laden wir das
    [
        {
            params ["_player"];
            [_player] call FUNC(applyLoadout);
        },
        [ACE_player],
        5 //5 Sekunden warten für Lag bei der normalen Loadoutvergabe
    ] call CBA_fnc_waitAndExecute;
};

[
    {            
        params ["_player"];
        [_player] call FUNC(saveLoadout); 
        hint format ["Loadout Saved!"];
    },
    [ACE_player],
    5 //5 Sekunden warten für Lag bei der normalen Loadoutvergabe
] call CBA_fnc_waitAndExecute;




//if (didJIP) then {
if (true) then {

    if (!isNil QEGVAR(teleport,teleporter)) then {
        QEGVAR(teleport,teleporter) addAction ["Startloadout ausrüsten", {

            params ["", "_caller"];
            private _loadoutDB = missionNamespace getVariable [QGVAR(loadoutDB), nil];
            private _loadout = _loadoutDB get ([getPlayerUID ACE_player, "_first"] joinString "");
            _caller setUnitLoadout _loadout;

        }, [], 0, false, true];
    } else {
        actionID = ACE_player addAction ["Startloadout ausrüsten", {

            params ["", "_caller"];
            private _loadoutDB = missionNamespace getVariable [QGVAR(loadoutDB), nil];
            _caller setUnitLoadout (_loadoutDB get ([getPlayerUID ACE_player, "_first"] joinString ""));
        }, [], 0, false, true];
    };

    [
        {            
            params ["_player", "_actionID"];
            _player removeAction _actionID;
            hint format ["Zeit vorbei!"];
        },
        [ACE_player, actionID],
        10 //nach 60 Sekunden wird die AddAction gelöscht
    ] call CBA_fnc_waitAndExecute;
};
