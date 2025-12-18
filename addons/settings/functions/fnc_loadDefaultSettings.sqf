#include "..\script_component.hpp"
/*
 * Author: TTT
 * Loads the appropriate CBA settings file based on the mission parameter.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ttt_settings_loader_fnc_loadSettings;
 *
 * Public: No
 */



// Determine which settings file to load
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
    QPATHTOF(settings\achilles.sqf), // Achilles Settings
    QPATHTOF(settings\acre_core.sqf), // ACRE

]
private _settingsFile = preprocessFile _settingsFile;

{
    _x params ["_setting", "_value", "_prio"];
    [_setting, _value, _prio, "server"] call CBA_settings_fnc_set;
} forEach ([_settingsFile, false] call CBA_settings_fnc_parse);

// Log which profile is being loaded
INFO_2("Loading CBA settings profile %1 from %2",_medicalSettings,_settingsFile);
