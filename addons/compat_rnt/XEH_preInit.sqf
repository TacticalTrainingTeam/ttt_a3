#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

// Vehicle classname -> camonet animation sources
GVAR(camonetSources) = createHashMapFromArray [
    ["Redd_Tank_Wiesel_1A4_MK20_Flecktarn", ["mk20_netz_wanne_hide_Source", "mk20_netz_turm_hide_Source", "mk20_netz_waffe_hide_Source"]],
    ["Redd_Tank_Wiesel_1A4_MK20_Tropentarn", ["mk20_netz_wanne_d_hide_Source", "mk20_netz_turm_d_hide_Source", "mk20_netz_waffe_d_hide_Source"]],
    ["Redd_Tank_Wiesel_1A4_MK20_Wintertarn", ["mk20_netz_wanne_w_hide_Source", "mk20_netz_turm_w_hide_Source", "mk20_netz_waffe_w_hide_Source"]]
];

#include "initSettings.inc.sqf"
