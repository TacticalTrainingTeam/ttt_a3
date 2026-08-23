#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_common",
            "cba_common",
            "ace_common",
            "ace_advanced_ballistics",
            "ace_advanced_fatigue",
            "ace_missileguidance",
            "ace_advanced_throwing",
            "ace_vehicle_damage",
            "ace_ai",
            "ace_arsenal",
            "ace_artillerytables",
            "ace_mk6mortar",
            "ace_captives",
            "ace_casings",
            "ace_cookoff",
            "ace_csw",
            "ace_dragging",
            "ace_explosives",
            "ace_field_rations",
            "ace_fire",
            "ace_fortify",
            "ace_frag",
            "ace_gforces",
            "ace_goggles",
            "ace_grenades",
            "acex_headless",
            "ace_hearing",
            "ace_interaction",
            "ace_interact_menu",
            "ace_killtracker",
            "ace_cargo",
            "ace_rearm",
            "ace_refuel",
            "ace_towing",
            "ace_magazinerepack",
            "ace_map",
            "ace_map_gestures",
            "ace_maptools",
            "ace_nametags",
            "ace_nightvision",
            "ace_overheating",
            "ace_finger",
            "ace_pylons",
            "ace_quickmount",
            "ace_repair",
            "ace_respawn",
            "ace_scopes",
            "acex_sitting",
            "ace_spectator",
            "ace_switchunits",
            "ace_trenches",
            "ace_fastroping",
            "ace_flags",
            "ace_gunbag",
            "ace_hitreactions",
            "ace_laser",
            "ace_marker_flags",
            "ace_microdagr",
            "ace_noradio",
            "ace_overpressure",
            "ace_parachute",
            "ace_ui",
            "ace_vehiclelock",
            "ace_novehicleclanlogo",
            "ace_vehicles",
            "ace_viewports",
            "ace_viewdistance",
            "acex_viewrestriction",
            "ace_weather",
            "ace_winddeflection",
            "ace_zeus"
        };
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"BlauBär", "Andx"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
