#include "..\script_component.hpp"
/*
 * Author: BlauBär
 * Handles a change of the selected teleport option.
 *
 * Arguments:
 * 0: List <CONTROL>
 * 1: Selected index <NUMBER>
 *
 * Return Value:
 * None
 */
params ["_ctrl", "_selection"];

GVAR(type) = _ctrl lbData _selection;

private _display = ctrlParent _ctrl;
private _buttonTeleport = _display displayCtrl 30;
_buttonTeleport ctrlEnable true;
