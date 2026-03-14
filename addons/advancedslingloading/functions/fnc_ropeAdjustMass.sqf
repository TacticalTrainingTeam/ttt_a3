#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Adjusts cargo mass based on helicopter lift capability
 *
 * Arguments:
 * 0: Cargo object <OBJECT>
 * 1: Helicopter <OBJECT>
 * 2: Ropes (optional) <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_cargo, _heli, _ropes] call ttt_advancedslingloading_fnc_ropeAdjustMass
 *
 * Public: No
 */

params ["_obj", "_heli", ["_ropes", []]];
private _lift = [_heli] call FUNC(ropeGetLiftCapability);
private _originalMass = getMass _obj;
private _heavyLiftMinLift = missionNamespace getVariable ["ASL_SET_MASS", ASL_HEAVY_LIFT_MIN_LIFT];
if (_originalMass >= ((_lift) * ASL_HEAVY_LIFT_MASS_FACTOR) && _lift >= _heavyLiftMinLift) then {
    private _originalMassSet = (getMass _obj) == _originalMass;
    while { _obj in (ropeAttachedObjects _heli) && _originalMassSet } do {
        {
            private _ends = ropeEndPosition _x;
            private _endDistance = (_ends select 0) distance (_ends select 1);
            private _ropeLength = ropeLength _x;
            if ((_ropeLength - ASL_ROPE_DISTANCE_THRESHOLD) <= _endDistance && ((position _heli) select 2) > 0) then {
                [[_obj, ((_lift) * ASL_HEAVY_LIFT_MASS_FACTOR)], "ASL_Rope_Set_Mass", _obj, true] call FUNC(remoteExec);
                _originalMassSet = false;
            };
        } forEach _ropes;
        sleep ASL_HEAVY_LIFT_SLEEP_TIME;
    };
    while { _obj in (ropeAttachedObjects _heli) } do {
        sleep ASL_HEAVY_LIFT_WAIT_TIME;
    };
    [[_obj, _originalMass], "ASL_Rope_Set_Mass", _obj, true] call FUNC(remoteExec);
};
