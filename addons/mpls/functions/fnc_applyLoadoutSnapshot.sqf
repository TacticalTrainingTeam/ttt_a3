#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Applies a player's previously saved loadout snapshot (see fnc_saveLoadoutSnapshot.sqf). Used by
 * the ZEN "Restore Snapshot" action.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Success <BOOL>
 *
 * Example:
 * [player] call ttt_mpls_fnc_applyLoadoutSnapshot
 *
 * Public: No
 */

params ["_player"];

private _uid = [getPlayerUID _player, "_snapshot"] joinString "";

private _success = [_player, _uid] call FUNC(applyLoadout);

if (_success) then {
    hint LLSTRING(zenSnapshotRestored);
};

_success
