#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Init event handler. Adds the custom get in actions for the commander and driver (the vehicle is locked while the ramp is closed) and locks the vehicle or opens the ramp according to the 3DEN attribute.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call ttt_compat_rnt_fnc_initRampActions
 *
 * Public: NO
 */

params ["_vehicle"];

if (hasInterface) then {
    private _displayName = getText (configOf _vehicle >> "displayName");

    {
        _x params ["_params", "_str", "_picture"];

        private _text = format [localize _str, _displayName];
        private _actionID = _vehicle addAction _params;
        _vehicle setUserActionText [_actionID, _text, "", _picture];
    } forEach GVAR(getInParams);
};

if (isServer) then {
    if (locked _vehicle isNotEqualTo 2) then {
        [QGVAR(lock), [_vehicle, 2], _vehicle] call CBA_fnc_targetEvent;
    };

    // Type check as the attribute is nil when not set in 3DEN
    if (_vehicle getVariable [QGVAR(RampAttribute), false] isEqualTo true) then {
        [_vehicle, true] call FUNC(openRamp);
    };
};
