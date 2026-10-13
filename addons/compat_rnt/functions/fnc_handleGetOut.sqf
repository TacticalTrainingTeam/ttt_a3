#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      GetOut event handler for vehicles with commander higher seat and camonet. Unlocks the commander seat and restores the camouflage of the unit.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: STRING - Role
 *      2: OBJECT - Unit
 *      3: ARRAY - Turret
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call ttt_compat_rnt_fnc_handleGetOut
 *
 * Public: NO
 */

params ["_vehicle", "_role", "_unit", "_turret"];

private _config = configOf _vehicle;

if (local _vehicle && {_turret in [getArray (_config >> QGVAR(commanderTurret)), getArray (_config >> QGVAR(commanderHigherTurret))]}) then {
    [QEGVAR(common,unlockSeat), [_unit]] call CBA_fnc_localEvent;

    _vehicle setVariable [getText (_config >> QGVAR(binoVariable)), false, true];
};

if (local _unit && {_vehicle getVariable ["has_camonet_large", false] || {_vehicle getVariable ["has_camonet", false]}}) then {
    private _camoCoef = _unit getVariable [QGVAR(camouflageCoef), getNumber (configOf _unit >> "camouflage")];
    _unit setUnitTrait ["camouflageCoef", _camoCoef];
};
