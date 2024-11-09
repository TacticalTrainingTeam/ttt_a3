#include "script_component.hpp"
/*
 * Author: BlauBär
 * Handles a change of the selected player.
 *
 * Arguments:
 * 0: List <CONTROL>
 * 1: Selected index <NUMBER>
 *
 * Return Value:
 * None
 */
params ["_ctrl", "_selection"];

_display = ctrlParent _ctrl;
_listOptions    = _display displayCtrl 20;
_buttonTeleport = _display displayCtrl 30;

GVAR(target) = (allPlayers select {name _x == (_ctrl lbText _selection)}) param [0, objNull];
if (isNull GVAR(target)) exitWith {
    [ctrlParent _ctrl] call FUNC(onLoad);
};

lbClear _listOptions;
if (isNull objectParent GVAR(target)) then {
    _listOptions lbAdd "In die Nähe";
    _listOptions lbSetData [0, "nearby"];
    _listOptions lbSetCurSel 0;
    GVAR(type) = "nearby";
} else {
    private _availableOptions = [["In die Nähe", "nearbyVehicle"]];
    if (isNull driver vehicle GVAR(target)) then {
        _availableOptions pushBack ["Fahrer", "driver"];
    };
    if (isNull gunner vehicle GVAR(target)) then {
        _availableOptions pushBack ["Schütze", "gunner"];
    };
    if (isNull commander vehicle GVAR(target)) then {
        _availableOptions pushBack ["Kommandant", "commander"];
    };
    if ((vehicle GVAR(target)) emptyPositions "cargo" != 0) then {
        _availableOptions pushBack ["Passagier", "cargo"];
    };

    {
        _x params ["_description", "_data"];
        _listOptions lbAdd _description;
        _listOptions lbSetData [_forEachIndex, _data];
    } forEach _availableOptions;
    _listOptions lbSetCurSel 0;
    GVAR(type) = "nearbyVehicle";
};
_listOptions ctrlEnable true;
