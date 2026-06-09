#include "..\script_component.hpp"

params ["_unit"];

private _children = [];

private _cases = (magazines _unit) select {_x in GVAR(cases)};

{
    private _droneCfg = GVAR(cases) get _x;
    _children pushBack [
        [
            format ["drone_%1", _forEachIndex],
            getText (_droneCfg >> "displayName"),
            getText (_droneCfg >> "picture"),
            { [_this select 0, _this select 2] call FUNC(assemble) },
            { true },
            {},
            _x
        ] call ace_interact_menu_fnc_createAction,
        [],
        ACE_Player
    ];
} forEach _cases;

_children
