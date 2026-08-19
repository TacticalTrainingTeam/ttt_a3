#include "..\script_component.hpp"

/*
 * Author: Andx
 * Classifies a magazine classname into a resupply crate category based on
 * its underlying ammo type.
 *
 * Arguments:
 * 0: Magazine classname <STRING>
 *
 * Return Value:
 * Category - "ammo", "grenades", "at" or "explosives" <STRING>
 *
 * Example:
 * ["30Rnd_65x39_caseless_mag"] call ttt_resupply_fnc_classifyMag;
 *
 * Public: No
 */

params ["_magClass"];

private _ammoClass = getText(configFile >> "CfgMagazines" >> _magClass >> "ammo");

if (_ammoClass isEqualTo "") exitWith { "ammo" };

// AT: unguided rockets and guided missiles
if (_ammoClass isKindOf ["RocketBase", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["MissileBase", configFile >> "CfgAmmo"]) exitWith { "at" };

// Explosives: mines and demolition charges
if (_ammoClass isKindOf ["MineBase", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["BombCore", configFile >> "CfgAmmo"]) exitWith { "explosives" };

// Grenades: thrown grenades, smoke, flares. Hand-thrown frag grenades
// (e.g. GrenadeHand and its subclasses) inherit from "Grenade", not
// "GrenadeBase" - that's a separate, sibling ammo family used by underslung
// 40mm grenade launcher shells (e.g. G_40mm_HE). Without also checking
// "Grenade" here, hand grenades would silently fall through to the
// default "ammo" case below instead of being classified as grenades.
if (_ammoClass isKindOf ["Grenade", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["GrenadeBase", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["SmokeShell", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["FlareBase", configFile >> "CfgAmmo"]) exitWith { "grenades" };

// Default: rifle / pistol ammo
"ammo"
