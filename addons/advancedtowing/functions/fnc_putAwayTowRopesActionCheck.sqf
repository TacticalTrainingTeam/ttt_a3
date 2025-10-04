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
 * [params] call PREFIX_advancedtowing_fnc_putawayTowRopesActionCheck
 *
 * Public: No
 */

[cursorTarget] call FUNC(canPutAwayTowRopes);
