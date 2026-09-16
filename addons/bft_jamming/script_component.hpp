#define COMPONENT bft_jamming
#define COMPONENT_BEAUTIFIED BFT Jamming

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Capability tags piggybacked onto CrowsEW's jammer capabilities array (crowsEW_main_jamMap).
// CrowsEW only special-cases "VoiceCommsJammer"/"DroneJammer" internally - any other tag rides
// along untouched in its jamMap/broadcasts, which is how we register a BFT jammer without
// touching CrowsEW's code.
#define BFT_JAM_CAP_BLACKOUT "BftJammerBlackout"
#define BFT_JAM_CAP_DRIFT "BftJammerDrift"
// Mixed: Blackout inside the effective radius, Drift (tapering to 0) in the falloff band - the
// same two radii the module already has, just both effects zoned onto one device.
#define BFT_JAM_CAP_MIXED "BftJammerMixed"

// Values of the module's "JamType" dropdown (CfgVehicles.hpp).
#define BFT_JAM_TYPE_BLACKOUT 0
#define BFT_JAM_TYPE_DRIFT 1
#define BFT_JAM_TYPE_MIXED 2

// Fixed Drift tuning - deliberately not CBA settings, so behavior is the same on every server.
#define BFT_JAM_MAX_DRIFT_DISTANCE 250
#define BFT_JAM_DRIFT_UPDATE_INTERVAL 3

// Spectrum beacon type tag used for detectability (arbitrary - CrowsEW's spectrum GUI doesn't
// special-case beacon "type" for rendering, only the literal string "drone" is special-cased
// for one antenna filter mode).
#define BFT_JAM_SPECTRUM_TYPE "sweep_bft"

// Literal name of cTab's local event fired after cTab_fnc_updateLists rebuilds the BFT arrays
// (cTabBFTmembers/cTabBFTgroups/cTabBFTvehicles): [QGVARMAIN(listsUpdated)] call CBA_fnc_localEvent
// in cTab_core's fnc_updateLists.sqf. GVARMAIN(var) expands to PREFIX_var (CBA's GVARMAINS macro),
// and cTab's PREFIX is "ctab" - so this is "ctab_listsUpdated", not "ctab_<component>_listsUpdated".
#define CTAB_LISTS_UPDATED_EVENT "ctab_listsUpdated"

// CrowsEW's own public CBA event/global names we integrate with (see readme.md for details).
#define CROWSEW_ADD_JAMMER_EVENT "crowsEW_main_addJammer"
#define CROWSEW_UPDATE_JAMMERS_EVENT "crowsEW_main_updateJammers"
#define CROWSEW_ADD_BEACON_EVENT "crowsEW_spectrum_addBeacon"
#define CROWSEW_REMOVE_BEACON_EVENT "crowsEW_spectrum_removeBeacon"
#define CROWSEW_JAM_MAP crowsEW_main_jamMap
