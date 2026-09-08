#include "..\script_component.hpp"
/*
 * Author: Andx
 * Plays the toss gesture and moves a unit's coin from its inventory into the shared ground
 * weapon holder of a coin check.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Coin classname <STRING>
 * 2: Ground weapon holder <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_class", "_holder"];

[_unit, "PutDown"] call ace_common_fnc_doGesture;
_unit removeItem _class;
_holder addItemCargoGlobal [_class, 1];

[LLSTRING(tossed), true] call ace_common_fnc_displayText;
