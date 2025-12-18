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
 * call ttt_settings_loader_fnc_loadDefaultSettings;
 *
 * Public: No
 */

private _settingsFiles = [
    QPATHTOF(settings\a3ti.sqf), //A3 Thermal Improvement
    // ACE Settings
    QPATHTOF(settings\ace_advanced_ballistics.sqf),
    QPATHTOF(settings\ace_advanced_fatigue.sqf),
    QPATHTOF(settings\ace_advanced_throwing.sqf),
    QPATHTOF(settings\ace_advanced_vehicle_damage.sqf),
    QPATHTOF(settings\ace_ai.sqf),
    QPATHTOF(settings\ace_arsenal.sqf),
    QPATHTOF(settings\ace_artillery.sqf),
    QPATHTOF(settings\ace_captives.sqf),
    QPATHTOF(settings\ace_common.sqf),
    QPATHTOF(settings\ace_cook_off.sqf),
    QPATHTOF(settings\ace_csw.sqf),
    QPATHTOF(settings\ace_dragging.sqf),
    QPATHTOF(settings\ace_explosives.sqf),
    QPATHTOF(settings\ace_field_rations.sqf),
    QPATHTOF(settings\ace_fire.sqf),
    QPATHTOF(settings\ace_fortify.sqf),
    QPATHTOF(settings\ace_fragmentation_simulation.sqf),
    QPATHTOF(settings\ace_gforces.sqf),
    QPATHTOF(settings\ace_goggles.sqf),
    QPATHTOF(settings\ace_grenades.sqf),
    QPATHTOF(settings\ace_headless.sqf),
    QPATHTOF(settings\ace_hearing.sqf),
    QPATHTOF(settings\ace_interaction.sqf),
    QPATHTOF(settings\ace_interact_menu.sqf),
    QPATHTOF(settings\ace_interact_menu_more.sqf),
    QPATHTOF(settings\ace_interact_menu_moveToRoot.sqf),
    QPATHTOF(settings\ace_logistics.sqf),
    QPATHTOF(settings\ace_magazineRepack.sqf),
    QPATHTOF(settings\ace_map.sqf),
    QPATHTOF(settings\ace_map_gestures.sqf),
    QPATHTOF(settings\ace_map_tools.sqf),
    //handled via preset
    //QPATHTOF(settings\ace_medical.sqf),
    //QPATHTOF(settings\ace_medical_interface.sqf),
    //QPATHTOF(settings\ace_medical_treatment.sqf),
    QPATHTOF(settings\ace_nametags.sqf),
    QPATHTOF(settings\ace_nightvision.sqf),
    QPATHTOF(settings\ace_overheating.sqf),
    QPATHTOF(settings\ace_pointing.sqf),
    QPATHTOF(settings\ace_quickmount.sqf),
    QPATHTOF(settings\ace_repair.sqf),
    QPATHTOF(settings\ace_respawn.sqf),
    QPATHTOF(settings\ace_scopes.sqf),
    QPATHTOF(settings\ace_sitting.sqf),
    QPATHTOF(settings\ace_switch_units.sqf),
    QPATHTOF(settings\ace_trenches.sqf),
    QPATHTOF(settings\ace_uncategorized.sqf),
    QPATHTOF(settings\ace_ui.sqf),
    QPATHTOF(settings\ace_vehiclelock.sqf),
    QPATHTOF(settings\ace_vehicles.sqf),
    QPATHTOF(settings\ace_viewdistance.sqf),
    QPATHTOF(settings\ace_viewrestriction.sqf),
    QPATHTOF(settings\ace_weapons.sqf),
    QPATHTOF(settings\ace_weather.sqf),
    QPATHTOF(settings\ace_winddeflection.sqf),
    QPATHTOF(settings\ace_zeus.sqf),
    QPATHTOF(settings\achilles.sqf), // Achilles
    QPATHTOF(settings\acre_core.sqf), // ACRE
    QPATHTOF(settings\rcobms.sqf), // RCO Basic Map Sharing
    QPATHTOF(settings\bwa3.sqf), // BWMod
    QPATHTOF(settings\cba.sqf), //CBA
    QPATHTOF(settings\crowsew.sqf), //Crows Electronic Warfare
    QPATHTOF(settings\ctab.sqf), // cTab Advanced
    QPATHTOF(settings\dui.sqf), // DUI Squad Radar
    QPATHTOF(settings\emr.sqf), // Ehnanced Movement Rework
    QPATHTOF(settings\grad_treches.sqf), // Grad Trenches
    QPATHTOF(settings\vfx.sqf), // Hatchet Vehicle Framework + UH60M Mod
    QPATHTOF(settings\iedd.sqf), // IEDD Notebook
    QPATHTOF(settings\itc.sqf), // ITC Landsystems
    QPATHTOF(settings\lambs.sqf), // Lambs Danger
    QPATHTOF(settings\laxeman.sqf), // Immerse and Suppress
    QPATHTOF(settings\mts.sqf), // Metis Enhanced
    QPATHTOF(settings\ocap.sqf), // OCAP
    QPATHTOF(settings\ttt.sqf), // Tactical Training Team
    QPATHTOF(settings\tsp.sqf), // Breach and Core
    QPATHTOF(settings\turret_enhanced.sqf), // Turret Enhanced
    QPATHTOF(settings\usaf.sqf), // USAF
    QPATHTOF(settings\zen_add.sqf), // V1 Zeus Additions
    QPATHTOF(settings\kjw.sqf), // KJWs Two Primary Weapons
    QPATHTOF(settings\dzn.sqf), // DZN MG Tripod
    QPATHTOF(settings\zen.sqf) // Zeus Enhanced
];

if ("" call ace_common_fnc_isModLoaded) then {
    _settingsFiles pushBack QPATHTOF(settings\cup.sqf); // CUP
};

if ("" call CBA_fnc_isModLoaded) then {
    _settingsFiles pushBack QPATHTOF(settings\rhs.sqf); // RHS
};

{
    {
        _x params ["_setting", "_value", "_prio"];
        [_setting, _value, _prio, "server"] call CBA_settings_fnc_set;
    } forEach ([_x, false] call CBA_settings_fnc_parse);
} forEach _settingsFiles;

// Log which profile is being loaded
INFO("Loaded CBA settings");
