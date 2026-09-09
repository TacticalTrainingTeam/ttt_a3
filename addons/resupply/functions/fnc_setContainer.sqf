#include "..\script_component.hpp"
/*
 * Author: Andx
 * Marks or unmarks an object as a resupply depot. Same effect as setting
 * QGVAR(container) via the object's Init field or the ZEN context menu -
 * only used as the 3DEN object attribute's expression, since that context
 * can't safely embed a quoted setVariable name inline (see fnc_addActions.sqf
 * for where the resulting variable is read).
 *
 * Arguments:
 * 0: Target object <OBJECT>
 * 1: Mark as depot? <BOOLEAN>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ttt_object, true] call ttt_resupply_fnc_setContainer;
 *
 * Public: No
 */
params [
    ["_target", objNull, [objNull]],
    ["_value", false, [false]]
];

if (isNull _target) exitWith {};

_target setVariable [QGVAR(container), _value];
