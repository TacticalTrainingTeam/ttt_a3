#include "..\script_component.hpp"
/*
 * Author: Andx
 * Writes the marker phases of the current map to the player's profile.
 *
 * Arguments:
 * 0: Phases, each as [name, systemTime, records] <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_phases] call ttt_markersave_fnc_setPhases
 *
 * Public: No
 */

params [["_phases", [], [[]]]];

profileNamespace setVariable [PHASES_VAR, [PHASE_FORMAT_VERSION, _phases]];
saveProfileNamespace;
