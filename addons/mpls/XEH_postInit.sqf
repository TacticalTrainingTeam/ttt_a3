#include "script_component.hpp"

//Nur für Spieler
if (!hasInterface) exitWith {};

GVAR(loadoutDB) = createHashMap; 
private _loadout = GVAR(loadoutDB) getOrDefault [getPlayerUID player, nil];

if (!isNil _loadout) then {
    //es gibt für diese Spieler UID schon ein gespeichertes Loaodut, also laden wir das
    [
        {
            params ["_player"];
            _player call FUNC(applyLoadout);
        },
        [ACE_player],
        5 //5 Sekunden warten für Lag bei der normalen Loadoutvergabe
    ] call CBA_fnc_waitAndExecute;
};

//erster Loadoutsave
[
    {            
        params ["_player"];
        GVAR(loadoutDB) set [[getPlayerUID _player, "_first"] joinString "", getUnitLoadout _player]; //saves the very first loadout to the DB
        _player call FUNC(saveLoadout); //make a regular save and start the periodic save
    },
    [ACE_player],
    10
] call CBA_fnc_waitAndExecute;

//Nur für JIP
if (didJIP) then {
    if (!isNil QEGVAR(teleport,teleporter)) then { //addAction am Teleporter
        QEGVAR(teleport,teleporter) addAction [LLSTRING(startLoadout), {

            params ["", "_caller"];
            private _loadout = GVAR(loadoutDB) get ([getPlayerUID _caller, "_first"] joinString "");
            [_caller, _loadout] call CBA_fnc_setLoadout;

        }, [], 0, false, true];
    };
};
