#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

// Source: PzGrenBtl402 addons/Redd_Marder/XEH_postInit.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
[QGVAR(lock), {(_this select 0) lock (_this select 1)}] call CBA_fnc_addEventHandler;
// Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/XEH_postInit.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
[QGVAR(addMagazineTurret), {(_this select 0) addMagazineTurret (_this select 1)}] call CBA_fnc_addEventHandler;
[QGVAR(removeMagazinesTurret), {(_this select 0) removeMagazinesTurret (_this select 1)}] call CBA_fnc_addEventHandler;

// Marder ladder sides: [hatch turret, variable the ladder is stored in, offset, direction]
GVAR(ladderSides) = createHashMapFromArray [
    ["left", [MARDER_HATCH_LEFT_TURRET_PATH, QGVAR(ladderLeft), [-1, -1.7, -0.3], 270]],
    ["right", [MARDER_HATCH_RIGHT_TURRET_PATH, QGVAR(ladderRight), [1, -1.7, -0.3], 90]]
];

GVAR(seatDataCache) = createHashMap;

// Vehicle classname -> camonet animation sources
// Source: PzGrenBtl402 addons/Redd_Wiesel_MK20, Redd_Wiesel_TOW and Redd_Marder functions/fnc_setCamonet.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), merged into one table
GVAR(camonetSources) = createHashMapFromArray [
    ["Redd_Tank_Wiesel_1A4_MK20_Flecktarn", ["mk20_netz_wanne_hide_Source", "mk20_netz_turm_hide_Source", "mk20_netz_waffe_hide_Source"]],
    ["Redd_Tank_Wiesel_1A4_MK20_Tropentarn", ["mk20_netz_wanne_d_hide_Source", "mk20_netz_turm_d_hide_Source", "mk20_netz_waffe_d_hide_Source"]],
    ["Redd_Tank_Wiesel_1A4_MK20_Wintertarn", ["mk20_netz_wanne_w_hide_Source", "mk20_netz_turm_w_hide_Source", "mk20_netz_waffe_w_hide_Source"]],
    ["Redd_Tank_Wiesel_1A2_TOW_Flecktarn", ["netz_wanne_f_hide_Source"]],
    ["Redd_Tank_Wiesel_1A2_TOW_Tropentarn", ["netz_wanne_d_hide_Source"]],
    ["Redd_Tank_Wiesel_1A2_TOW_Wintertarn", ["netz_wanne_w_hide_Source"]],
    ["Redd_Marder_1A5_Flecktarn", ["marder_netz_wanne_hide_Source"]],
    ["Redd_Marder_1A5_Tropentarn", ["marder_netz_wanne_d_hide_Source"]],
    ["Redd_Marder_1A5_Wintertarn", ["marder_netz_wanne_w_hide_Source"]]
];

#include "initSettings.inc.sqf"
