#define COMPONENT drone_crafting
#define COMPONENT_BEAUTIFIED FPV-Drohnenbau

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Extra distance the server accepts on top of GVAR(maxDistance) - the client checks the distance
// every frame during the progress bar, but the unit's position on the server lags slightly behind.
#define DISTANCE_TOLERANCE 2

// Temporary max load while the stock is loaded, so nothing is rejected for lack of space before
// the final capacity is calculated from the loaded mass (see fnc_fillStock.sqf).
#define STOCK_LOAD_HEADROOM 100000

#define ICON_CRAFT "\a3\ui_f\data\igui\cfg\actions\repair_ca.paa"
#define ICON_VEHICLE "\a3\ui_f\data\map\vehicleicons\iconcar_ca.paa"
