#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Shows a menu for selecting specific ropes
 *
 * Arguments:
 * 0: Menu title <STRING>
 * 1: Function name to call <STRING>
 * 2: Ropes index and label array <ARRAY>
 * 3: Ropes label (optional, default "Ropes") <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Extend Cargo Ropes", "ASL_Extend_Ropes_Index_Action", [[0,"Front"]], "Ropes"] call ttt_advancedslingloading_fnc_showSelectRopesMenu
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
