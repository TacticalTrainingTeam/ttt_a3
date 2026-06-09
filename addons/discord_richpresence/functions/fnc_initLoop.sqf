#include "..\script_component.hpp"
/*
 * Author: Andx
 * Initializes the Discord Rich Presence update loop by scheduling periodic updates.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ttt_discord_richpresence_fnc_initLoop
 *
 * Public: No
 */

params [];
TRACE_1("fnc_initLoop",_this);

if !(GVAR(enableDRP)) exitWith {INFO("Discord Rich Presence is disabled by client");};

INFO("Enaled Discord Rich Presence");

call FUNC(updateRichPresence);

// Call this function again after 10 Minutes
[
    {
        call FUNC(updateRichPresence);
    },
    [],
    DRP_UPDATE_INTERVAL
] call CBA_fnc_waitAndExecute;
