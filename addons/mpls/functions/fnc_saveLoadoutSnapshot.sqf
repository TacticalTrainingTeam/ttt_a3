#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Manually saves a player's current loadout to a separate "snapshot" slot, distinct from the
 * regular auto-saved one (which fnc_initSave.sqf overwrites every TIME_SAVE_INTERVAL and on
 * respawn/disconnect). Used by the ZEN "Make Loadout Snapshot" action so a curator-triggered
 * save survives the next auto-save instead of being silently overwritten by it.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Success <BOOL>
 *
 * Example:
 * [player] call ttt_mpls_fnc_saveLoadoutSnapshot
 *
 * Public: No
 */

params ["_player"];

private _uid = [getPlayerUID _player, "_snapshot"] joinString "";

[_player, _uid] call FUNC(saveLoadout)
