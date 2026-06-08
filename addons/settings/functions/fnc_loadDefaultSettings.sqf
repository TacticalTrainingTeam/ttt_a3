#include "../script_component.hpp"
/*
 * Author: BlauBär edit by Andx
 * Loads the default settings.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */

{
    private _settingsFile = preprocessFile format [QPATHTOF(settings\%1.inc.sqf), _x];
    {
        _x params ["_setting", "_value", "_priority"];
        [_setting, _value, _priority, "server"] call CBA_settings_fnc_set;
    } forEach ([_settingsFile, VALIDATE_SETTINGS] call CBA_settings_fnc_parse);
} forEach [
    "A3TI",
    "ACE_AdvancedBallistics",
    "ACE_AdvancedFatigue",
    "ACE_AdvancedMissileGuidance",
    "ACE_AdvancedThrowing",
    "ACE_AdvancedVehicleDamage",
    "ACE_AI",
    "ACE_Arsenal",
    "ACE_Artillery",
    "ACE_Captives",
    "ACE_Casings",
    "ACE_Common",
    "ACE_Cookoff",
    "ACE_CSW",
    "ACE_Dragging",
    "ACE_Explosives",
    "ACE_FieldRations",
    "ACE_Fire",
    "ACE_Fortify",
    "ACE_FragmentationSimulation",
    "ACE_GForces",
    "ACE_Goggles",
    "ACE_Grenades",
    "ACE_Headless",
    "ACE_Hearing",
    "ACE_Interaction",
    "ACE_InteractionMenu",
    "ACE_KillTracker",
    "ACE_Logistics",
    "ACE_MagazineRepack",
    "ACE_Map",
    "ACE_MapGestures",
    "ACE_MapTools",
    "ACE_NameTags",
    "ACE_Nightvision",
    "ACE_Overheating",
    "ACE_Pointing",
    "ACE_Pylons",
    "ACE_QuickMount",
    "ACE_Repair",
    "ACE_Respawn",
    "ACE_Scopes",
    "ACE_Sitting",
    "ACE_Spectator",
    "ACE_SwitchUnits",
    "ACE_Trenches",
    "ACE_Uncategorized",
    "ACE_UserInterface",
    "ACE_VehicleLock",
    "ACE_Vehicles",
    "ACE_ViewDistanceLimiter",
    "ACE_ViewRestriction",
    "ACE_Weapons",
    "ACE_Weather",
    "ACE_WindDeflection",
    "ACE_Zeus",
    "Achilles",
    "ACRE2",
    "AutoWeaponLower",
    "BOCR",
    "BWA3",
    "CBA",
    "CrowsEW",
    "cTab",
    "DUI_SquadRadar",
    "dzn_MGTripod",
    "EnhancedMovementRework",
    "Fawks_EnhancedNVGs",
    "FPV",
    "GRAD_Trenches",
    "IEDD_Notebook",
    "ITC_Land",
    "KJWs_TwoPrimaryWeapons",
    "LAMBS",
    "LAxemann_Immerse",
    "LAxemanns_Suppress",
    "MTS_Enhanced",
    "OCAP",
    "RCOBMS",
    "TSP_Breach",
    "TSP_Core",
    "TTT",
    "Turret_Enhanced",
    "UH_60M",
    "USAF",
    "ZEN"
];
