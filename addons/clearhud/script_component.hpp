#define COMPONENT clearhud
#define COMPONENT_BEAUTIFIED Clear Hud
#include "\z\ttt\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_BLANK
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_BLANK
    #define DEBUG_SETTINGS DEBUG_SETTINGS_BLANK
#endif

#include "\z\ttt\addons\main\script_macros.hpp"

/// PFH ////
////////////
#define KILLPFH			[_this select 1] call CBA_fnc_removePerFrameHandler

// local event handler naming macro
#define NO_DEDICATED	if(isDedicated) exitWith { }
#define NO_CLIENT		if(!isServer) exitWith { }

#define RGB_GREEN 0, 0.5, 0, 1
#define RGB_BLUE 0, 0, 1, 1
#define RGB_ORANGE 0.5, 0.5, 0, 1
#define RGB_RED 1, 0, 0, 1
#define RGB_YELLOW 1, 1, 0, 1
#define RGB_WHITE 1, 1, 1, 1
#define RGB_GRAY 0.5, 0.5, 0.5, 1
#define RGB_BLACK 0, 0, 0, 1
#define RGB_MAROON 0.5, 0, 0, 1
#define RGB_OLIVE 0.5, 0.5, 0, 1
#define RGB_NAVY 0, 0, 0.5, 1
#define RGB_PURPLE 0.5, 0, 0.5, 1
#define RGB_FUCHSIA 1, 0, 1, 1
#define RGB_AQUA 0, 1, 1, 1
#define RGB_TEAL 0, 0.5, 0.5, 1
#define RGB_LIME 0, 1, 0, 1
#define RGB_SILVER 0.75, 0.75, 0.75, 1