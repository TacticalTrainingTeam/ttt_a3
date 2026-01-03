#include "..\script_component.hpp"
/*
 * Author: Andx
 * Loads the CBA settings files.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ttt_settings_fnc_loadDefaultSettings;
 *
 * Public: No
 */

private _settingsFiles = [
    QPATHTOF(settings\a3ti.inc), // A3 Thermal Improvement
    QPATHTOF(settings\ace_advanced_ballistics.inc), // ACE Advanced Ballistics
    QPATHTOF(settings\ace_advanced_fatigue.inc), // ACE Advanced Fatigue
    QPATHTOF(settings\ace_advanced_missile_guidance.inc), // ACE Advanced Missile Guidance
    QPATHTOF(settings\ace_advanced_throwing.inc), // ACE Advanced Throwing
    QPATHTOF(settings\ace_advanced_vehicle_damage.inc), // ACE Advanced Vehicle Damage
    QPATHTOF(settings\ace_ai.inc), // ACE AI
    QPATHTOF(settings\ace_arsenal.inc), // ACE Arsenal
    QPATHTOF(settings\ace_artillery.inc), // ACE Artillery
    QPATHTOF(settings\ace_captives.inc), // ACE Captives
    QPATHTOF(settings\ace_casings.inc), // ACE Casings
    QPATHTOF(settings\ace_common.inc), // ACE Common
    QPATHTOF(settings\ace_cook_off.inc), // ACE Cook Off
    QPATHTOF(settings\ace_csw.inc), // ACE CSW
    QPATHTOF(settings\ace_dragging.inc), // ACE Dragging
    QPATHTOF(settings\ace_explosives.inc), // ACE Explosives
    QPATHTOF(settings\ace_field_rations.inc), // ACE Field Rations
    QPATHTOF(settings\ace_fire.inc), // ACE Fire
    QPATHTOF(settings\ace_fortify.inc), // ACE Fortify
    QPATHTOF(settings\ace_fragmentation_simulation.inc), // ACE Fragmentation Simulation
    QPATHTOF(settings\ace_gforces.inc), // ACE G-Forces
    QPATHTOF(settings\ace_goggles.inc), // ACE Goggles
    QPATHTOF(settings\ace_grenades.inc), // ACE Grenades
    QPATHTOF(settings\ace_headless.inc), // ACE Headless
    QPATHTOF(settings\ace_hearing.inc), // ACE Hearing
    QPATHTOF(settings\ace_interact_menu.inc), // ACE Interact Menu
    QPATHTOF(settings\ace_interaction.inc), // ACE Interaction
    QPATHTOF(settings\ace_kill_tracker.inc), // ACE Kill Tracker
    QPATHTOF(settings\ace_logistics.inc), // ACE Logistics
    QPATHTOF(settings\ace_magazineRepack.inc), // ACE Magazine Repack
    QPATHTOF(settings\ace_map.inc), // ACE Map
    QPATHTOF(settings\ace_map_gestures.inc), // ACE Map Gestures
    QPATHTOF(settings\ace_map_tools.inc), // ACE Map Tools
    //handled via preset
    //QPATHTOF(settings\ace_medical.inc),
    //QPATHTOF(settings\ace_medical_interface.inc),
    //QPATHTOF(settings\ace_medical_treatment.inc),
    QPATHTOF(settings\ace_nametags.inc), // ACE Nametags
    QPATHTOF(settings\ace_nightvision.inc), // ACE Night Vision
    QPATHTOF(settings\ace_overheating.inc), // ACE Overheating
    QPATHTOF(settings\ace_pointing.inc), // ACE Pointing
    QPATHTOF(settings\ace_pylons.inc), // ACE Pylons
    QPATHTOF(settings\ace_quickmount.inc), // ACE Quick Mount
    QPATHTOF(settings\ace_repair.inc), // ACE Repair
    QPATHTOF(settings\ace_respawn.inc), // ACE Respawn
    QPATHTOF(settings\ace_scopes.inc), // ACE Scopes
    QPATHTOF(settings\ace_sitting.inc), // ACE Sitting
    QPATHTOF(settings\ace_spectator.inc), // ACE Spectator
    QPATHTOF(settings\ace_switch_units.inc), // ACE Switch Units
    QPATHTOF(settings\ace_trenches.inc), // ACE Trenches
    QPATHTOF(settings\ace_ui.inc), // ACE UI
    QPATHTOF(settings\ace_uncategorized.inc), // ACE Uncategorized
    QPATHTOF(settings\ace_vehicle_lock.inc), // ACE Vehicle Lock
    QPATHTOF(settings\ace_vehicles.inc), // ACE Vehicles
    QPATHTOF(settings\ace_viewdistance_limiter.inc), // ACE View Distance Limiter
    QPATHTOF(settings\ace_viewrestriction.inc), // ACE View Restriction
    QPATHTOF(settings\ace_volume.inc), // ACE Volume
    QPATHTOF(settings\ace_wardrobe.inc), // ACE Wardrobe
    QPATHTOF(settings\ace_weapons.inc), // ACE Weapons
    QPATHTOF(settings\ace_weather.inc), // ACE Weather
    QPATHTOF(settings\ace_wind_deflection.inc), // ACE Wind Deflection
    QPATHTOF(settings\ace_zeus.inc), // ACE Zeus
    QPATHTOF(settings\achilles.inc), // Achilles
    QPATHTOF(settings\acre.inc), // ACRE
    QPATHTOF(settings\awl.inc), // AWL
    QPATHTOF(settings\blastcore.inc), // Blastcore
    QPATHTOF(settings\bms_rco.inc), // RCO Basic Map Sharing
    QPATHTOF(settings\boc.inc), // BOC
    QPATHTOF(settings\bwa3.inc), // BWMod
    QPATHTOF(settings\cba.inc), // CBA
    QPATHTOF(settings\crowsew.inc), // Crows Electronic Warfare
    QPATHTOF(settings\ctab.inc), // cTab Advanced
    QPATHTOF(settings\dui.inc), // DUI Squad Radar
    QPATHTOF(settings\dzn.inc), // DZN MG Tripod
    QPATHTOF(settings\emr.inc), // Enhanced Movement Rework
    QPATHTOF(settings\fawks_enhanced_nvgs.inc), // Fawks Enhanced NVGs
    QPATHTOF(settings\grad_treches.inc), // Grad Trenches
    QPATHTOF(settings\hvf.inc), // Hatchet Vehicle Framework
    QPATHTOF(settings\iedd.inc), // IEDD Notebook
    QPATHTOF(settings\itc.inc), // ITC Landsystems
    QPATHTOF(settings\kjw.inc), // KJWs Two Primary Weapons
    QPATHTOF(settings\lambs.inc), // Lambs Danger
    QPATHTOF(settings\laxeman.inc), // Immerse and Suppress
    QPATHTOF(settings\medic_preset_default.inc), // ACE Medical Preset Default
    QPATHTOF(settings\medic_preset_easy.inc), // ACE Medical Preset Easy
    QPATHTOF(settings\medic_preset_training.inc), // ACE Medical Preset Training
    QPATHTOF(settings\mts.inc), // Metis Enhanced
    QPATHTOF(settings\ocap.inc), // OCAP
    QPATHTOF(settings\sez.inc), // SEZ
    QPATHTOF(settings\tsp.inc), // Breach and Core
    QPATHTOF(settings\ttt.inc), // Tactical Training Team
    QPATHTOF(settings\turret_enhanced.inc), // Turret Enhanced
    QPATHTOF(settings\uh-60m.inc), // UH-60M
    QPATHTOF(settings\usaf.inc), // USAF
    QPATHTOF(settings\v1.inc), // V1 Zeus Additions
    QPATHTOF(settings\zen.inc) // Zeus Enhanced
];

if ("CUP_Vehicles_LoadOrder" call ace_common_fnc_isModLoaded) then {
    _settingsFiles pushBack QPATHTOF(settings\cup.inc); // CUP
};

if ("rhsusf_main_loadorder" call CBA_fnc_isModLoaded) then {
    _settingsFiles pushBack QPATHTOF(settings\rhs.inc); // RHS
};

{
    {
        _x params ["_setting", "_value", "_prio"];
        [_setting, _value, _prio, "server"] call CBA_settings_fnc_set;
    } forEach ([_x, false] call CBA_settings_fnc_parse);
} forEach _settingsFiles;

// Log which profile is being loaded
INFO("Loaded CBA settings");
