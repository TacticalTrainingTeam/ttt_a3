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

params ["_obj","_heli",["_ropes",[]]];
private ["_mass","_lift","_originalMass","_heavyLiftMinLift"];
_lift = [_heli] call FUNC(ropeGetLiftCapability);
_originalMass = getMass _obj;
_heavyLiftMinLift = missionNamespace getVariable ["ASL_SET_MASS",4000];
 if( _originalMass >= ((_lift)*0.8) && _lift >= _heavyLiftMinLift ) then {
    private ["_originalMassSet","_ends","_endDistance","_ropeLength"];
    _originalMassSet = (getMass _obj) == _originalMass;
    while { _obj in (ropeAttachedObjects _heli) && _originalMassSet } do {
        {
            _ends = ropeEndPosition _x;
            _endDistance = (_ends select 0) distance (_ends select 1);
            _ropeLength = ropeLength _x;
            if((_ropeLength - 2) <= _endDistance && ((position _heli) select 2) > 0 ) then {
                [[_obj, ((_lift)*0.8)],"ASL_Rope_Set_Mass",_obj,true] call FUNC(remoteExec);
                _originalMassSet = false;
            };
        } forEach _ropes;
        sleep 0.1;
    };
    while { _obj in (ropeAttachedObjects _heli) } do {
        sleep 0.5;
    };
    [[_obj, _originalMass],"ASL_Rope_Set_Mass",_obj,true] call FUNC(remoteExec);
};
