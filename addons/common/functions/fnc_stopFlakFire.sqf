#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Beendet das mit ttt_common_fnc_doFlakFire gestartete Flakfeuer und räumt Ziel-Logik und Munitions-EH auf.
 *
 * Arguments:
 * 0: Flak <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [flak_01] call ttt_common_fnc_stopFlakFire;
 *
 * Public: Yes
 */

params [["_unit", objNull, [objNull]]];

if !(isServer) exitWith {};

private _state = _unit getVariable [QGVAR(flakFire), []];
if (_state isEqualTo []) exitWith {};

_state params ["_handle", "_target", "_reloadedEhId"];

[_handle] call CBA_fnc_removePerFrameHandler;
_unit removeEventHandler ["Reloaded", _reloadedEhId];
// group was created with deleteGroupWhenEmpty, so it goes away together with its only unit
deleteVehicle _target;
_unit setVariable [QGVAR(flakFire), nil];
