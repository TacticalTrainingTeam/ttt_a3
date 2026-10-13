#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Adds the Metis Enhanced "place map on vehicle" interaction. Position and orientation are read from the vehicle config (ttt_compat_rnt_mapActionPosition and ttt_compat_rnt_mapActionOrientation), the action is only available while the animation source ttt_compat_rnt_mapActionAnimation has the phase ttt_compat_rnt_mapActionAnimationPhase (if set).
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call ttt_compat_rnt_fnc_initMapActions
 *
 * Public: NO
 */

params ["_vehicle"];

if (isNil "mts_map_fnc_getPlaceMapOnVehicleAction" || {!hasInterface}) exitWith {};

private _config = configOf _vehicle;
private _position = getArray (_config >> QGVAR(mapActionPosition));
private _orientation = getArray (_config >> QGVAR(mapActionOrientation));
if (_position isEqualTo [] || {_orientation isEqualTo []}) exitWith {};

private _action = [
    _position,
    _orientation,
    {
        params ["_vehicle"];

        private _config = configOf _vehicle;
        private _animation = getText (_config >> QGVAR(mapActionAnimation));

        (_animation isEqualTo "" || {_vehicle animationSourcePhase _animation == getNumber (_config >> QGVAR(mapActionAnimationPhase))}) &&
        {_vehicle getVariable [QGVAR(showMapAction), true]}
    },
    []
] call mts_map_fnc_getPlaceMapOnVehicleAction;

[_vehicle, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;
