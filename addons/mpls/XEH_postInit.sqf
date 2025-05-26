#include "script_component.hpp"

if (hasInterface) then {

    private _loadoutDB = missionNamespace getVariable [QGVAR(loadoutDB), nil];
    _loadout = _loadoutDB get (getPlayerUID ACE_player);

    if (!isNil _loadout) then {
        //es gibt für diese Spieler UID schon ein gespeichertes Loaodut, also laden wir das
        [
            {
                params [_player];
                [_player] call FUNC(applyLoadout);
            },
            [ACE_player],
            5 //5 Sekunden warten für Lag bei der normalen Loadoutvergabe
        ] call CBA_fnc_waitAndExecute;
    };

    //regelmäßgies Speichern triggern
    [
        {
            params [_player];
            [_player] call FUNC(saveLoadout); 
        },
        [ACE_player],
        5
    ] call CBA_fnc_waitAndExecute;
};