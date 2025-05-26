
if (hasinterface) then {
    if (isNil GVAR(loadoutDB) get (getPlayerUID ACE_player)) then {
        //es gibt für diese Spieler UID noch kein gespeichertes Loaodut
        [ACE_player] call FUNC(saveLoadout); //Functions calls itself every 10 Minutes
    } else {
        //es gibt für diese Spieler UID schon ein gespeichertes Loaodut
        [
            {
                params [_player];
                _player setUnitLoadout (GVAR(loadoutDB) get (getPlayerUID _player)); //gespeichertes Loadout laden
            },
            [ACE_player],
            5
        ] call CBA_fnc_waitAndExecute;
        //und dann das Loadout neu speichern
        [
            {
                params [_player];
                [_player] call FUNC(saveLoadout); 
            },
            [ACE_player]
            10
        ] call CBA_fnc_waitAndExecute;
    };
};