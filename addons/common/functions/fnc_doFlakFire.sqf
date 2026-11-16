#include "..\script_component.hpp"
/*
 * Authors: Reimchen, Andx
 * Erstellt eine GameLogic als Ziel und die lässt die Flak auf dieses feuern.
 * Endet automatisch, sobald Flak oder Richtschütze ausfallen, oder per ttt_common_fnc_stopFlakFire.
 *
 * Arguments:
 * 0: Flak <OBJECT>
 *
 * Return Value:
 * Handle <NUMBER>
 *
 * Example:
 * [flak_01] call ttt_common_fnc_doFlakFire;
 *
 * Public: Yes
 */

params ["_unit"];

if !(isServer) exitWith {};

// already firing: return the running handle instead of stacking a second PFH, logic and Reloaded EH
private _existing = _unit getVariable [QGVAR(flakFire), []];
if (_existing isNotEqualTo []) exitWith {
    _existing select 0
};

//create a group to add the target to
private _group = createGroup sideLogic;
// deleteGroup right after deleteVehicle fails because the unit only leaves its group at end of frame
_group deleteGroupWhenEmpty true;

//To create objects of type "Logic", use createUnit.
private _target = _group createUnit ["Logic", [0,0,0], [], 0, "NONE"];

//Set Ammo to full on reload
private _reloadedEhId = _unit addEventHandler ["Reloaded", {
    params ["_unit"];
    _unit setVehicleAmmo 1;
}];

//Fire
private _handle = [
        {
            params ["_args", "_pfhId"];
            _args params ["_unit","_target"];

            // flak deleted: its variable and EH are gone with it, only the PFH and the logic remain to free
            if (isNull _unit) exitWith {
                [_pfhId] call CBA_fnc_removePerFrameHandler;
                deleteVehicle _target;
            };

            // flak destroyed or gunner dead/dismounted: nothing left that could fire
            if (!alive _unit || {!alive gunner _unit}) exitWith {
                [_unit] call FUNC(stopFlakFire);
            };

            private _targetPos = _unit getPos [300 * sqrt random 1, random 360];
            _target setPosATL [_targetPos select 0, _targetPos select 1, 200];
            _unit doSuppressiveFire _target;
        },
        (6 + floor random 10),
        [_unit,_target]
    ] call CBA_fnc_addPerFrameHandler;

_unit setVariable [QGVAR(flakFire), [_handle, _target, _reloadedEhId]];

//return
_handle
