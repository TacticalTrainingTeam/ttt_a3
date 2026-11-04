#include "..\script_component.hpp"
/*
 * Author: Colin, Andx
 * Loads the starting stock (CBA setting GVAR(stock)) into a supply vehicle and sizes its cargo
 * capacity so the loaded mass takes up (1 - GVAR(reserveCapacity)) of it, leaving the rest free
 * for finished drones.
 *
 * Classes already in the cargo count towards the stock, so on a vehicle that wasn't cleared
 * only the difference is added ("top up"). When topping up, the capacity is never reduced, so
 * nothing players stored in the vehicle ends up over the limit.
 *
 * Must run on the server (setMaxLoad) and unscheduled, see fnc_setVehicle.sqf.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Clear the whole cargo first <BOOL> (default: true)
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, true] call ttt_drone_crafting_fnc_fillStock;
 *
 * Public: No
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_clearCargo", true, [true]]
];

if (isNull _vehicle) exitWith {};

// CBA EDITBOX setting: parseSimpleArray returns nil (with an RPT error) on malformed input
private _parsedStock = parseSimpleArray GVAR(stock);
if (isNil "_parsedStock" || {!(_parsedStock isEqualType [])}) then {
    WARNING_1("Setting %1 is no valid array, no stock loaded",QGVAR(stock));
    _parsedStock = [];
};

private _stock = [];
{
    if (_x isEqualTypeParams ["", 0] && {(_x select 1) >= 1}) then {
        _x params ["_rawClass", "_count"];
        ([_rawClass] call FUNC(getCargoType)) params ["_class", "_type"];

        if (_type isEqualTo "") then {
            WARNING_1("Stock entry %1 skipped: unknown class",_rawClass);
        } else {
            _stock pushBack [_class, _type, floor _count];
        };
    } else {
        WARNING_1("Stock entry %1 skipped: expected [classname, count]",_x);
    };
} forEach _parsedStock;

private _previousMaxLoad = maxLoad _vehicle;

_vehicle setMaxLoad STOCK_LOAD_HEADROOM;

if (_clearCargo) then {
    clearItemCargoGlobal _vehicle;
    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearBackpackCargoGlobal _vehicle;
};

{
    _x params ["_class", "_type", "_count"];

    private _toAdd = _count - ([_vehicle, _class, _type] call FUNC(countCargo));
    [_vehicle, _class, _type, _toAdd] call FUNC(addCargo);
} forEach _stock;

private _load = loadAbs _vehicle;
private _maxLoad = if (_load > 0) then {
    ceil (_load / (1 - GVAR(reserveCapacity)))
} else {
    getNumber (configOf _vehicle >> "maximumLoad")
};

if (!_clearCargo) then {
    _maxLoad = _maxLoad max _previousMaxLoad;
};

_vehicle setMaxLoad _maxLoad;

INFO_3("Stock loaded into %1 | load: %2 | capacity: %3",_vehicle,_load,_maxLoad);
