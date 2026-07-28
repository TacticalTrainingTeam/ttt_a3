#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Spawns the deployed object matching whichever tarp item the caller is
 * carrying, consumes that item, and flips the relevant state variables. Part
 * of the TTT "deployable tarp" framework.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Player <OBJECT>
 * 2: Config <HASHMAP> - supported keys:
 *    "tarpItems"      <ARRAY of [itemClassname, objectClassname]> - maps each
 *                     carryable tarp item to the object it deploys
 *    "inUseVar"       <STRING> - object variable used to lock the item while (de)constructing
 *    "onConstruct"    <CODE> (optional) - called as [_object, _caller, _config], for addon specific side effects
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_target", "_caller", "_config", "_position"];

private _carriedItems = items _target;
private _tarpItems = _config get "tarpItems";
(_tarpItems select (_tarpItems findIf {(_x select 0) in _carriedItems})) params ["_itemClassname", "_classname"];

_target removeItem _itemClassname;

private _object = createVehicle [_classname, _position, [], 0, "CAN_COLLIDE"];
_object setDir (getDir _target);

_object setVariable [(_config get "inUseVar"), false, true];
_object setVariable [QGVAR(sourceItem), _itemClassname, true];

private _onConstruct = _config getOrDefault ["onConstruct", {}];
[_object, _target, _config] call _onConstruct;

_target switchMove "";

[QGVAR(tarpConstructed), [_target, _caller, _config], _caller] call CBA_fnc_localEvent;
