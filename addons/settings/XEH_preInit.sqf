#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

["CBA_settings_refreshSetting", { _this call FUNC(onSettingRegistered); }] call CBA_fnc_addEventHandler;

[] call FUNC(loadDefaultSettings);

["CBA_settingsInitialized", { [] call FUNC(diagnoseSettings); }] call CBA_fnc_addEventHandler;

ADDON = true;
