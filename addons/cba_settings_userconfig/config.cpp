#include "script_component.hpp"

//Created from https://github.com/CBATeam/CBA_A3/tree/master/template/cba_settings_userconfig

class CfgPatches {
    class cba_settings_userconfig {
        author = ECSTRING(main,TactticalTrainingTeam);
        name = COMPONENT_NAME;
        url = ECSTRING(main,URL);
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
        requiredAddons[] = {"cba_settings"};
        authors[] = {"Andx"};
    };
};

// Uncommenting this will make any changes to "Server" settings be lost upon game restart, applies only to dedicated servers
//cba_settings_volatile = 1;
