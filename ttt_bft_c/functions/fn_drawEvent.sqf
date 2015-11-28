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
    if !(isNull (_x select 2)) then {
        _map drawIcon _x;
    };
    nil
} count BG_BFT_Icons;
