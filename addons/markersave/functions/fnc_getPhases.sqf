#include "..\script_component.hpp"
/*
 * Author: Andx
 * Returns the saved marker phases of the current map from the player's profile.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Phases, each as [name, systemTime, records] <ARRAY>
 *
 * Example:
 * [] call ttt_markersave_fnc_getPhases
 *
 * Public: No
 */

private _data = profileNamespace getVariable [PHASES_VAR, []];

if (_data isEqualTo [] || {(_data select 0) isNotEqualTo PHASE_FORMAT_VERSION}) exitWith {[]};

+(_data select 1) // return
