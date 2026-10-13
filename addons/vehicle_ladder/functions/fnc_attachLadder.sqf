#include "..\script_component.hpp"
/*
* Author: Mishkar, Timi007
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

for "_i" from MIN_STEP to MIN_ALLOWED_STEP do {
    _ladder animate [format ["extract_%1", _i], 1, true];
};
for "_i" from (MIN_ALLOWED_STEP + 1) to MAX_STEP do {
    _ladder animate [format ["extract_%1", _i], 0, true];
};

_ladder animate ["rotate", 0];

_ladder attachTo [_vehicle, _ladderOffset];
_ladder setDir _ladderDir;

// MP sync for setDir, see https://community.bistudio.com/wiki/attachTo
_ladder setPosWorld getPosWorld _ladder;

[_vehicle, "ACE_TacticalLadder_Pack"] call CBA_fnc_removeBackpackCargo;

_ladder
