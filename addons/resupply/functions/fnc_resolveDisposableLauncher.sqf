#include "..\script_component.hpp"

/*
 * Author: Andx
 * Resolves a weapon classname against CBA's disposable-launcher registry
 * (CBA_DisposableLaunchers), used to tell truly single-use launchers (e.g.
 * BWA3's Panzerfaust 3) apart from reloadable ones. Registered launchers
 * cycle through 3 classes - a crate-safe "normal" identity, a live class
 * loaded with the real magazine (carried by a unit that hasn't fired yet),
 * and a spent "used" class once fired - and the weapon classname found via
 * `weapons unit` can be any of the three depending on state. Note this is
 * distinct from a launcher simply having one magazine per shot (e.g. vanilla
 * NLAW): those are not registered here, remain reloadable at the engine
 * level given a spare magazine, and are intentionally left out of the
 * result so only the ammo (not the launcher) gets resupplied for them.
 *
 * See: https://github.com/CBATeam/CBA_A3/wiki/Disposable-Launchers
 *
 * Arguments:
 * 0: Weapon classname, in any of its three possible states <STRING>
 *
 * Return Value:
 * The crate-safe "normal" classname to stock for this launcher, or "" if
 * it's not a registered disposable launcher <STRING>
 *
 * Example:
 * ["ACE_launch_NLAW_ready_F"] call ttt_resupply_fnc_resolveDisposableLauncher;
 *
 * Public: No
 */

params ["_weaponClass"];

private _registry = configFile >> "CBA_DisposableLaunchers";
private _result = "";

// Flat, top-level exitWith - nested inside the "isArray" guard's then{} block,
// it would only end that block (SQF stacks a new scope per if/then) and keep
// looping instead of stopping at the first match
for "_i" from 0 to ((count _registry) - 1) do {
    private _entry = _registry select _i;

    if (isArray _entry && {_weaponClass in ([configName _entry] + getArray _entry)}) exitWith {
        _result = (getArray _entry) select 0;
    };
};

_result
