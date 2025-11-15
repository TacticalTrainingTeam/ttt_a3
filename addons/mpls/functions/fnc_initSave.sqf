#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Raises an Event on all machines to do the loadout saving. Calls itself after 10 Minutes.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * <NONE>
 *
 * Example:
 * [] call ttt_mpls_fnc_initSave
 *
 * Public: No
 */

params [];

// Raise the event on all machine to save the current loadout
[QGVAR(doBackup), []] call CBA_fnc_remoteEvent;

// Call this function again after 10 Minutes
[
    {
        call FUNC(initSave);
    },
    [],
    TIME_SAVE_INTERVAL
] call CBA_fnc_waitAndExecute;
