#include "..\script_component.hpp"
/*
 * Author: Andx
 * Function of the Eden module "Drohnen-Materialfahrzeug": designates every object synchronized
 * to the module as a supply vehicle. Runs on the server only (isGlobal = 0).
 *
 * Arguments:
 * Arma 3 Module Function Parameters
 * https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [
    ["_logic", objNull, [objNull]],
    "", // "_units": only contains units/vehicles, synchronizedObjects also covers crates
    ["_activated", true, [true]]
];

if (!_activated) exitWith {};

private _fillStock = _logic getVariable [QGVAR(fillStock), true];
private _targets = (synchronizedObjects _logic) select {!(_x isKindOf "Logic") && {!(_x isKindOf "CAManBase")}};

if (_targets isEqualTo []) exitWith {
    WARNING_1("Module %1 has no synchronized vehicle",_logic);
};

{
    [_x, _fillStock] call FUNC(setVehicle);
} forEach _targets;
