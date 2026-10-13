#include "..\script_component.hpp"
/*
* Author: Mishkar, Timi007
* Source: PzGrenBtl402 addons/Ladder/functions/fnc_attachLadder.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, only this ladder is indestructible, cargo is removed via a common event
* Creates an ACE tactical ladder attached to the vehicle and removes one ladder pack from the vehicle cargo.
*
* Arguments:
* 0: OBJECT - Vehicle
* 1: ARRAY - Offset of the ladder relative to the vehicle (default: [0, 0, 0])
* 2: NUMBER - Direction of the ladder relative to the vehicle (default: 0)
*
* Return Value:
* OBJECT - The ladder
*
* Example:
* [_vehicle, [-1, -1.7, -0.3], 270] call ttt_vehicle_ladder_fnc_attachLadder
*
* Public: Yes
*/


params [["_vehicle", objNull, [objNull]], ["_ladderOffset", [0, 0, 0], [[]]], ["_ladderDir", 0, [0]]];

if (isNull _vehicle) exitWith {objNull};

private _ladder = "ACE_TacticalLadder" createVehicle [0, 0, 0];

// Extended up to the smallest allowed step
for "_i" from MIN_STEP to MAX_STEP do {
    _ladder animate [format ["extract_%1", _i], parseNumber (_i <= MIN_ALLOWED_STEP), true];
};

_ladder animate ["rotate", 0];

// Only ladders set up by this function are indestructible
_ladder allowDamage false;

_ladder attachTo [_vehicle, _ladderOffset];
_ladder setDir _ladderDir;

// MP sync for setDir, see https://community.bistudio.com/wiki/attachTo
_ladder setPosWorld getPosWorld _ladder;

// The cargo can only be changed where the vehicle is local
[QEGVAR(common,removeBackpackCargo), [_vehicle, "ACE_TacticalLadder_Pack"], _vehicle] call CBA_fnc_targetEvent;

_ladder
