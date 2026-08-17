#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* 0: Vehicle <OBJECT>
* 1: Player <OBJECT>
* 2: Context <HASHMAP>
*
* Return Value:
* None
*
* Public: No
*/

params ["_target", "_caller", "_context"];

private _varPrefix = _context get "varPrefix";

// Create far away first, then move into place once we can read the facility's own
// bounding box - matches this project's usual createVehicle-then-reposition pattern.
private _facility = (_context get "facilityObject") createVehicle [0, 0, 0];

(boundingBoxReal _target) params ["_targetBBMin", "_targetBBMax"];
(boundingBoxReal _facility) params ["_facilityBBMin", "_facilityBBMax"];

private _targetHalfLength = ((_targetBBMax select 1) - (_targetBBMin select 1)) / 2;
private _facilityHalfLength = ((_facilityBBMax select 1) - (_facilityBBMin select 1)) / 2;
private _distance = _targetHalfLength + _facilityHalfLength + FACILITY_PLACEMENT_CLEARANCE;

private _position = (_target getPos [-_distance, getDir _target]) findEmptyPosition [2, 10, "Tank"];
_facility setPosATL _position;
_facility setDir (getDir _target);

_facility setVariable [_context get "facilityMarkerVar", true, true];
_facility setVariable [_varPrefix + "_inUse", false, true];

// Link the pair directly instead of re-discovering it later via a proximity search.
_facility setVariable [_varPrefix + "_vehicle", _target, true];
_target setVariable [_varPrefix + "_facility", _facility, true];

[QGVAR(allowDamage), [_facility, false], _facility] call CBA_fnc_targetEvent;
[QGVAR(setFuel), [_target, _target getVariable [_varPrefix + "_fuel", 100]], _target] call CBA_fnc_targetEvent;

// Domain-specific extra setup (e.g. medic_vehicle's tent door/roof/solar-panel animations).
[_facility] call (_context getOrDefault ["extraConstructFx", {}]);

{
    _x addCuratorEditableObjects [[_facility], false];
} forEach allCurators;

_caller switchMove "";
