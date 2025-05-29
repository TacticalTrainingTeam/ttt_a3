#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Raises an Event on all machines to do the loadout saving. Calls itself after 10 Minutes.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * True
 *
 * Example:
 * [] call ttt_mpls_fnc_init
 *
 * Public: No
 */

params [];
TRACE_1("fnc_init",_this);

// Raise the event on all machine to save the current loadout
[QGVAR(doBackup), []] call CBA_fnc_remoteEvent;

// Call this function again after 10 Minutes
[
    {
        call FUNC(init);
    },
    [],
    600
] call CBA_fnc_waitAndExecute;
