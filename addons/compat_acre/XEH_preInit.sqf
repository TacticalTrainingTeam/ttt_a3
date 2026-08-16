#include "script_component.hpp"

private _addons = ["acre_sys_bf888s", "acre_sys_gsa", "acre_sys_prc117f", "acre_sys_prc148", "acre_sys_prc152", "acre_sys_prc343", "acre_sys_prc77", "acre_sys_sem52sl", "acre_sys_sem70"];
private _all = [];
{
    private _classes = [_x] call EFUNC(common,getAllItems);
    _all append _classes;
} forEach _addons;

[
    _all,
    "ACRE",
    "a3\modules_f_curator\data\portraitradio_ca.paa"
] call ace_arsenal_fnc_addRightPanelButton;
