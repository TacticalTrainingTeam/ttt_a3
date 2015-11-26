/*
 * Author: Badguy
 * Render BFT Icons
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */
private ["_map"];

// check if
if (player getVariable ["BG_BFT_item", 0] == 0) exitWith {};
disableSerialization;
_map = ((findDisplay 12) displayCtrl 51);
{
    _map drawIcon _x;
} forEach BG_BFT_Icons;
