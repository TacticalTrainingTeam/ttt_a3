#include "..\script_component.hpp"

params ["_magClass"];

private _ammoClass = getText(configFile >> "CfgMagazines" >> _magClass >> "ammo");

if (_ammoClass isEqualTo "") exitWith { "ammo" };

// AT: unguided rockets and guided missiles
if (_ammoClass isKindOf ["RocketBase", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["MissileBase", configFile >> "CfgAmmo"]) exitWith { "at" };

// Explosives: mines and demolition charges
if (_ammoClass isKindOf ["MineBase", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["BombCore", configFile >> "CfgAmmo"]) exitWith { "explosives" };

// Grenades: thrown grenades, smoke, flares
if (_ammoClass isKindOf ["GrenadeBase", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["SmokeShell", configFile >> "CfgAmmo"] ||
    _ammoClass isKindOf ["FlareBase", configFile >> "CfgAmmo"]) exitWith { "grenades" };

// Default: rifle / pistol ammo
"ammo"
