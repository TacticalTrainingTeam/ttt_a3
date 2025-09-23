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
 * [params] call ttt_advancedslingloading_fnc_showSelectRopesMenu
 *
 * Public: No
 */

params ["_title", "_functionName","_ropesIndexAndLabelArray",["_ropesLabel","Ropes"]];

ASL_Show_Select_Ropes_Menu_Array = [[_title,false]];
{
    ASL_Show_Select_Ropes_Menu_Array pushBack [ (_x select 1) + " " + _ropesLabel, [0], "", -5, [["expression", "["+(str (_x select 0))+"] call " + _functionName]], "1", "1"];
} forEach _ropesIndexAndLabelArray;
ASL_Show_Select_Ropes_Menu_Array pushBack ["All " + _ropesLabel, [0], "", -5, [["expression", "{ [_x] call " + _functionName + " } forEach [0,1,2];"]], "1", "1"];
showCommandingMenu "";
showCommandingMenu "#USER:ASL_Show_Select_Ropes_Menu_Array";
