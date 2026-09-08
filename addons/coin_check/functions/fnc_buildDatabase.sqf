#include "..\script_component.hpp"
/*
 * Author: Andx
 * Scans the coin database (db.hpp) once and caches a Steam UID -> coin classname lookup.
 * Entries are read as GVAR(coin_1), GVAR(coin_2), ... stopping at the first missing number.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Steam UID -> coin classname map <HASHMAP>
 *
 * Example:
 * call ttt_coin_check_fnc_buildDatabase
 *
 * Public: No
 */

private _map = createHashMap;
private _i = 1;
private _class = format [QGVAR(coin_%1), _i];

while {isClass (configFile >> "CfgWeapons" >> _class)} do {
    private _config = configFile >> "CfgWeapons" >> _class;
    private _uid = getText (_config >> "uid");

    if (_uid != "") then {
        _map set [_uid, _class];
    };

    _i = _i + 1;
    _class = format [QGVAR(coin_%1), _i];
};

_map
