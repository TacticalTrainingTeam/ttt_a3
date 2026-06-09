#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

private _cfgVehicles = configFile >> "CfgVehicles";
private _cases = (toString {getText (_x >> QGVAR(drone)) != ""}) configClasses (configFile >> "CfgMagazines");

GVAR(cases) = createHashMap;

{
    private _droneClass = getText (_x >> QGVAR(drone));
    private _droneConfig = _cfgVehicles >> _droneClass;
    GVAR(cases) set [configName _x, _droneConfig];
} forEach _cases;


ADDON = true;
