#define COMPONENT compat_rnt
#define COMPONENT_BEAUTIFIED Compat Redd'n'Tank

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

//Default settings
#define MIN_DURATION 1
#define MAX_DURATION 120
#define TRAILING_DECIMALS 0
#define IS_SERVER_SETTINGS 1
#define MG_MOUNT_TIME 5
#define DISASSEMBLE_TIME 10

// Wiesel TOW
#define WIESEL_TOW_TURRET_PATH [0]
#define WIESEL_TOW_COMMANDER_TURRET_PATH [0, 0]
#define WIESEL_TOW_LOADER_TURRET_PATH [0, 1]
#define WIESEL_TOW_MG3_TURRET_PATH [1]
#define WIESEL_TOW_COMMANDER_HIGHER_TURRET_PATH [2]
#define WIESEL_TOW_LOADER_HIGHER_TURRET_PATH [3]
#define WIESEL_TOW_WEAPON "Redd_TOW"
#define WIESEL_TOW_MAGAZINE "Redd_TOW_Mag"
#define WIESEL_TOW_BARREL "Redd_Milan_Static_Barrel"

// Marder
#define MARDER_COMMANDER_TURRET_PATH [0, 0]
#define MARDER_COMMANDER_HIGHER_TURRET_PATH [2]
#define MARDER_DRIVER_TURRET_PATH [-1]
#define MARDER_HATCH_LEFT_TURRET_PATH [0, 1]
#define MARDER_HATCH_RIGHT_TURRET_PATH [0, 2]
#define MARDER_HATCH_MIDDLE_TURRET_PATH [0, 3]
#define MARDER_MILAN_TURRET_PATH [1]

// Milan (Marder and dismounted)
#define MILAN_MAGAZINE "Redd_Milan_Mag"
#define MILAN_BARREL "Redd_Milan_Static_Barrel"
#define MILAN_TRIPOD "Redd_Milan_Static_Tripod"
#define MILAN_TRIPOD_GM "gm_milan_launcher_weaponBag"
#define MILAN_ACTION_TIME 10
// Only the Milan magazine counts, the dismounted Milan also has a FakeWeapon magazine on turret [-1]
#define STATIC_MILAN_LOADED(milan) ((magazinesAllTurrets milan) findIf {(_x select 0) isEqualTo MILAN_MAGAZINE && {(_x select 2) > 0}} != -1)
#define MILAN_ACTION_DISTANCE 2
#define MILAN_LOAD_ICON QPATHTOF(data\ui\holdaction_load_milan.paa)
#define MILAN_UNLOAD_ICON QPATHTOF(data\ui\holdaction_unload_milan.paa)
#define MILAN_ASSEMBLE_ICON "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa"
#define MILAN_DISASSEMBLE_ICON "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_unloadVehicle_ca.paa"
