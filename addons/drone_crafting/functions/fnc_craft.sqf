#include "..\script_component.hpp"
/*
 * Author: Colin, Andx
 * Server side of crafting a drone, raised by clients via the QGVAR(craftRequest) server event
 * once their progress bar finished. Re-validates everything the client already checked (the
 * cargo may have changed in the meantime), then swaps the ingredients for the result: into the
 * player's backpack if it has room, otherwise into the supply vehicle. If neither has room,
 * the ingredients are put back and nothing is consumed.
 *
 * Runs unscheduled as a CBA event handler, so it can't be interleaved with another craft.
 * The outcome is sent to the player's machine via the QGVAR(craftResult) target event.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Supply vehicle <OBJECT>
 * 2: Recipe class <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [QGVAR(craftRequest), [player, _vehicle, "standard_at"]] call CBA_fnc_serverEvent;
 *
 * Public: No
 */

params [
    ["_player", objNull, [objNull]],
    ["_vehicle", objNull, [objNull]],
    ["_recipeId", "", [""]]
];

if (!alive _player) exitWith {};

private _fnc_reply = {
    params ["_outcome", ["_args", []]];
    [QGVAR(craftResult), [_outcome, _args], _player] call CBA_fnc_targetEvent;
};

private _recipe = GVAR(recipes) get _recipeId;

if (isNil "_recipe") exitWith {
    WARNING_2("Craft request from %1 with unknown recipe %2",_player,_recipeId);
    ["invalid"] call _fnc_reply;
};

if (!alive _vehicle || {!(_vehicle in GVAR(vehicles))}) exitWith {
    ["unavailable"] call _fnc_reply;
};

if ((_player distance _vehicle) > (GVAR(maxDistance) + DISTANCE_TOLERANCE)) exitWith {
    ["tooFar"] call _fnc_reply;
};

([_vehicle, _recipeId] call FUNC(checkIngredients)) params ["", "_missing"];

if (_missing isNotEqualTo []) exitWith {
    ["missing", [_missing]] call _fnc_reply;
};

private _result = _recipe get "result";
private _resultType = _recipe get "resultType";

// Checked before the ingredients are removed - their removal doesn't affect the backpack
private _backpack = backpackContainer _player;
private _toBackpack = !isNull _backpack && {_backpack canAdd _result};

// Remove the ingredients, remembering exactly what was taken so it can be put back. Magazines
// are removed one by one with their ammo count, so a rollback restores partly used ones as
// they were instead of refilling them.
private _removedItems = [];
private _removedMagazines = [];

{
    _x params ["_class", "_type", "_count"];

    if (_type isEqualTo "magazine") then {
        private _ammoCounts = ((magazinesAmmoCargo _vehicle) select {(_x select 0) == _class}) apply {_x select 1};

        {
            [_vehicle, _class, 1, _x] call CBA_fnc_removeMagazineCargo;
            _removedMagazines pushBack [_class, _x];
        } forEach (_ammoCounts select [0, _count]);
    } else {
        [_vehicle, _class, _count] call CBA_fnc_removeItemCargo;
        _removedItems pushBack [_class, _count];
    };
} forEach (_recipe get "ingredients");

private _location = "";

if (_toBackpack) then {
    [_backpack, _result, _resultType, 1] call FUNC(addCargo);
    _location = "backpack";
} else {
    // Checked after the removal, the freed-up mass may be exactly what makes the result fit
    if (_vehicle canAdd _result) then {
        [_vehicle, _result, _resultType, 1] call FUNC(addCargo);
        _location = "vehicle";
    };
};

if (_location isEqualTo "") exitWith {
    {
        _vehicle addItemCargoGlobal _x;
    } forEach _removedItems;

    {
        _x params ["_class", "_ammo"];
        _vehicle addMagazineAmmoCargo [_class, 1, _ammo];
    } forEach _removedMagazines;

    ["noSpace"] call _fnc_reply;
};

TRACE_4("Crafted",_player,_recipeId,_result,_location);

["success", [_recipeId, _location]] call _fnc_reply;
