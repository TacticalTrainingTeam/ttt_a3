#include "..\script_component.hpp"
/*
 * Author: Andx
 * Returns the position of a phase in the list of currently loaded phases.
 *
 * Arguments:
 * 0: Phase name <STRING>
 *
 * Return Value:
 * Index in ttt_markersave_loadedPhases, -1 if the phase is not loaded <NUMBER>
 *
 * Example:
 * ["Phase 1"] call ttt_markersave_fnc_getLoadedIndex
 *
 * Public: No
 */

params [["_name", "", [""]]];

private _key = toLower _name;

GVAR(loadedPhases) findIf {(_x select 0) isEqualTo _key} // return
