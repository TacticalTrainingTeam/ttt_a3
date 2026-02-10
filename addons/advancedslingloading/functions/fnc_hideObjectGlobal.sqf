#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Hides an object globally
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_obj] call ttt_advancedslingloading_fnc_hideObjectGlobal
 *
 * Public: No
 */

params ["_obj"];
if( _obj isKindOf "Land_Can_V2_F" ) then {
    hideObjectGlobal _obj;
};
