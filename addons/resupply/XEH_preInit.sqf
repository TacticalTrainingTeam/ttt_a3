#include "script_component.hpp"

ADDON = false;

// Initialise early so a Zeus/3DEN-placed module firing before postInit's
// scanLoadouts runs doesn't hit an undefined variable. Keyed by crate type
// ("ammo", "grenades", "at", "explosives", "support") -> array of [classname, count] pairs.
GVAR(db)      = createHashMap;
GVAR(db_init) = false;

// Crate types filled by their class definition instead of the scanned loadout
// database. Order is the order shown in the ACE/ZEN menus. Entries:
// [type, display name stringtable key, menu icon, crate class, KAT Advanced Medical class or "", gated].
// Only the medical crates have a compat_kam variant, hence "" for the rest.
// Gated types are hidden and refused at a depot unless the mission maker lists them in the depot's
// QGVAR(enabledTypes) variable (see fnc_isTypeEnabled).
private _iconMedic = "a3\characters_f\data\ui\icon_medic_ca.paa";
private _iconOrd = "a3\ui_f\data\map\vehicleicons\iconcrateord_ca.paa";
private _iconSupp = "a3\ui_f\data\map\vehicleicons\iconcratesupp_ca.paa";

GVAR(prefilledTypes) = [
    ["medical_alpha",   LSTRING(type_medical_alpha),   _iconMedic, QEGVAR(common,sana_crate),       QEGVAR(compat_kam,sana_crate), false],
    ["medical_bravo",   LSTRING(type_medical_bravo),   _iconMedic, QEGVAR(common,sanb_crate),       QEGVAR(compat_kam,sanb_crate), false],
    ["medical_charlie", LSTRING(type_medical_charlie), _iconMedic, QEGVAR(common,sanc_crate),       QEGVAR(compat_kam,sanc_crate), false],
    ["spreng",          ELSTRING(common,spreng),       _iconOrd,   QEGVAR(common,explosives_crate), "", true],
    ["pio",             ELSTRING(common,pio),          _iconOrd,   QEGVAR(common,pio_crate),        "", true],
    ["eod",             ELSTRING(common,eod),          _iconOrd,   QEGVAR(common,eod_crate),        "", true],
    ["eod_ugv",         ELSTRING(common,eod_ugv),      _iconOrd,   QEGVAR(common,eod_ugv_crate),    "", true],
    ["uav",             ELSTRING(common,uav),          _iconSupp,  QEGVAR(common,uav_crate),        "", true],
    ["mark",            ELSTRING(common,marker),       _iconSupp,  QEGVAR(common,mark_crate),       "", true]
];
GVAR(prefilled) = createHashMapFromArray (GVAR(prefilledTypes) apply { [_x select 0, _x] });

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

#include "initSettings.inc.sqf"
