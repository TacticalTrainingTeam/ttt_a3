#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedtowing_fnc_customHideObjectGlobal
 *
 * Public: No
 */

params ["_obj"];

if( _obj isKindOf "Land_Can_V2_F" ) then {
    hideObjectGlobal _obj;
};
