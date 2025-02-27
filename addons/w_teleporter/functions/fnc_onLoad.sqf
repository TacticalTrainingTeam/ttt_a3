#include "..\script_component.hpp"
/*
 * Author: BlauBär
 * Prepares the teleporter dialog.
 *
 * Arguments:
 * 0: Dialog <DISPLAY>
 *
 * Return Value:
 * None
 */
params ["_dialog"];

private _listPlayers    = _dialog displayCtrl 10;
private _comboOptions   = _dialog displayCtrl 20;
private _buttonTeleport = _dialog displayCtrl 30;

lbClear _listPlayers;
lbClear _comboOptions;

#ifndef DEBUG_MODE_FULL
    {
        _listPlayers lbAdd name _x;
    } forEach (allPlayers select {_x != ACE_player && {alive _x} && {side group _x == side group ACE_player}});
    lbSort [_listPlayers, "DESC"];
#else
    _listPlayers lbAdd name player;
    _listPlayers lbAdd "Test";
#endif

_comboOptions ctrlEnable false;
_buttonTeleport ctrlEnable false;

GVAR(target) = objNull;
GVAR(type) = "nearby";
