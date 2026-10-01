#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Marker die schon in einer Phase gespeichert oder aus einer geladen wurden
GVAR(savedMarkers) = createHashMap;
// [phaseKey, markerNames, phaseName], in Ladereihenfolge
GVAR(loadedPhases) = [];

ADDON = true;
