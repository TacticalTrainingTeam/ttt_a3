
if (hasinterface) then {

    if (isNil GVAR(loadoutDB) get (getPlayerUID ACE_player)) then {
        [ACE_player] call FUNC(saveLoadout); //Functions calls itself every 10 Minutes
    } else {
        [
            {
                params [_player];
                _player setUnitLoadout (GVAR(loadoutDB) get (getPlayerUID _player));
            },
            [ACE_player],
            5
        ] call CBA_fnc_waitAndExecute;

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