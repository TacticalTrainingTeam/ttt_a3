#include "..\script_component.hpp"
/*
 * Author: Andx
 * Hides the turret of an RsR vehicle and locks the turret seat, so the
 * vehicle can be used without its weapon.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [this] call ttt_rsr_fnc_removeTurretWeapon
 *
 * Public: Yes
 */

params [["_vehicle", objNull, [objNull]]];

_vehicle animate ['HideTurret',1];
_vehicle lockTurret [[0],true];
