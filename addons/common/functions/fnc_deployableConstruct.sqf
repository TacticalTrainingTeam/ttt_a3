#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Spawns the deployed object and flips the relevant state variables. Part of
 * the TTT "deployable panel/tent" framework.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Player <OBJECT>
 * 2: Config <HASHMAP> - supported keys:
 *    "classname"      <STRING or CODE> - classname (or code returning one) to spawn
 *    "hasItemVar"     <STRING> - backpack variable flipped to mark the item as deployed
 *    "inUseVar"       <STRING> - object variable used to lock the item while (de)constructing
 *    "onConstruct"    <CODE> (optional) - called as [_object, _caller, _config], for addon specific side effects
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_target", "_caller", "_config"];

private _classnameRaw = _config get "classname";
private _classname = if (_classnameRaw isEqualType {}) then { call _classnameRaw } else { _classnameRaw };

private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
private _object = createVehicle [_classname, _position, [], 0, "CAN_COLLIDE"];
_object setDir (getDir _target);

_object setVariable [(_config get "inUseVar"), false, true];
(unitBackpack _target) setVariable [(_config get "hasItemVar"), false, true];

private _onConstruct = _config getOrDefault ["onConstruct", {}];
[_object, _target, _config] call _onConstruct;

_target switchMove "";
