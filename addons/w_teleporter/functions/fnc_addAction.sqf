#include "script_component.hpp"
/*
 * Author: BlauBär
 * Adds a teleporter action to the given object.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 */
params ["_object"];

_object addAction [LLSTRING(technicalTeleport), { createDialog "RscFrameworkTeleporter" }, [], 0, false];
