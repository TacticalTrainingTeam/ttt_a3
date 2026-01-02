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
    QPATHTOF(settings\a3ti.inc), //A3 Thermal Improvement
    // ACE Settings
    QPATHTOF(settings\ace_advanced_ballistics.inc),
    QPATHTOF(settings\ace_advanced_fatigue.inc),
    QPATHTOF(settings\ace_advanced_throwing.inc),
    QPATHTOF(settings\ace_advanced_vehicle_damage.inc),
    QPATHTOF(settings\ace_ai.inc),
    QPATHTOF(settings\ace_arsenal.inc),
    QPATHTOF(settings\ace_artillery.inc),
    QPATHTOF(settings\ace_captives.inc),
    QPATHTOF(settings\ace_common.inc),
    QPATHTOF(settings\ace_cook_off.inc),
    QPATHTOF(settings\ace_csw.inc),
    QPATHTOF(settings\ace_dragging.inc),
    QPATHTOF(settings\ace_explosives.inc),
    QPATHTOF(settings\ace_field_rations.inc),
    QPATHTOF(settings\ace_fire.inc),
    QPATHTOF(settings\ace_fortify.inc),
    QPATHTOF(settings\ace_fragmentation_simulation.inc),
    QPATHTOF(settings\ace_gforces.inc),
    QPATHTOF(settings\ace_goggles.inc),
    QPATHTOF(settings\ace_grenades.inc),
    QPATHTOF(settings\ace_headless.inc),
    QPATHTOF(settings\ace_hearing.inc),
    QPATHTOF(settings\ace_interaction.inc),
    QPATHTOF(settings\ace_interact_menu.inc),
    QPATHTOF(settings\ace_interact_menu_more.inc),
    QPATHTOF(settings\ace_interact_menu_moveToRoot.inc),
    QPATHTOF(settings\ace_logistics.inc),
    QPATHTOF(settings\ace_magazineRepack.inc),
    QPATHTOF(settings\ace_map.inc),
    QPATHTOF(settings\ace_map_gestures.inc),
    QPATHTOF(settings\ace_map_tools.inc),
    //handled via preset
    //QPATHTOF(settings\ace_medical.inc),
    //QPATHTOF(settings\ace_medical_interface.inc),
    //QPATHTOF(settings\ace_medical_treatment.inc),
    QPATHTOF(settings\ace_nametags.inc),
    QPATHTOF(settings\ace_nightvision.inc),
    QPATHTOF(settings\ace_overheating.inc),
    QPATHTOF(settings\ace_pointing.inc),
    QPATHTOF(settings\ace_quickmount.inc),
    QPATHTOF(settings\ace_repair.inc),
    QPATHTOF(settings\ace_respawn.inc),
    QPATHTOF(settings\ace_scopes.inc),
    QPATHTOF(settings\ace_sitting.inc),
    QPATHTOF(settings\ace_switch_units.inc),
    QPATHTOF(settings\ace_trenches.inc),
    QPATHTOF(settings\ace_uncategorized.inc),
    QPATHTOF(settings\ace_ui.inc),
    QPATHTOF(settings\ace_vehiclelock.inc),
    QPATHTOF(settings\ace_vehicles.inc),
    QPATHTOF(settings\ace_viewdistance.inc),
    QPATHTOF(settings\ace_viewrestriction.inc),
    QPATHTOF(settings\ace_weapons.inc),
    QPATHTOF(settings\ace_weather.inc),
    QPATHTOF(settings\ace_winddeflection.inc),
    QPATHTOF(settings\ace_zeus.inc),
    QPATHTOF(settings\achilles.inc), // Achilles
    QPATHTOF(settings\acre_core.inc), // ACRE
    QPATHTOF(settings\rcobms.inc), // RCO Basic Map Sharing
    QPATHTOF(settings\bwa3.inc), // BWMod
    QPATHTOF(settings\cba.inc), //CBA
    QPATHTOF(settings\crowsew.inc), //Crows Electronic Warfare
    QPATHTOF(settings\ctab.inc), // cTab Advanced
    QPATHTOF(settings\dui.inc), // DUI Squad Radar
    QPATHTOF(settings\emr.inc), // Ehnanced Movement Rework
    QPATHTOF(settings\grad_treches.inc), // Grad Trenches
    QPATHTOF(settings\vfx.inc), // Hatchet Vehicle Framework + UH60M Mod
    QPATHTOF(settings\iedd.inc), // IEDD Notebook
    QPATHTOF(settings\itc.inc), // ITC Landsystems
    QPATHTOF(settings\lambs.inc), // Lambs Danger
    QPATHTOF(settings\laxeman.inc), // Immerse and Suppress
    QPATHTOF(settings\mts.inc), // Metis Enhanced
    QPATHTOF(settings\ocap.inc), // OCAP
    QPATHTOF(settings\ttt.inc), // Tactical Training Team
    QPATHTOF(settings\tsp.inc), // Breach and Core
    QPATHTOF(settings\turret_enhanced.inc), // Turret Enhanced
    QPATHTOF(settings\usaf.inc), // USAF
    QPATHTOF(settings\zen_add.inc), // V1 Zeus Additions
    QPATHTOF(settings\kjw.inc), // KJWs Two Primary Weapons
    QPATHTOF(settings\dzn.inc), // DZN MG Tripod
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
