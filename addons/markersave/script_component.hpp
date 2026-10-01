#define COMPONENT markersave
#define COMPONENT_BEAUTIFIED Marker Phases

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Layout der gespeicherten Daten, bei inkompatiblen Änderungen erhöhen
#define PHASE_FORMAT_VERSION 1
#define PHASES_VAR format ['%1_%2', QGVAR(phases), toLower worldName]

#define USER_MARKER_PREFIX "_USER_DEFINED #"
#define MAX_MARKERS_PER_PHASE 500
#define MARKERS_PER_FRAME 10

#define CHANNEL_NAMES ["global", "side", "command", "group", "vehicle", "direct"]
#define DEFAULT_CHANNEL 1
