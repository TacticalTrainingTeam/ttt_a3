#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"BadKneeGrow", "Menom [TTT]"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"A3_Data_F","A3_Characters_F","A3_Air_F","A3_Armor_F","A3_Boat_F","A3_Soft_F","A3_Air_F_Heli_Heli_Transport_04","A3_Characters_F_exp"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 0;
    };
};

// Configs imports
class RscPicture;
class RscText;
class RscStandardDisplay;
class RscVignette;
class RscStructuredText;
class RscProgress;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscActivePicture;

#include "CfgEventHandlers.hpp"

// Override base classes
#include "RscDisplayLoading.hpp"
#include "RscDisplayLoadMission.hpp"
#include "RscDisplayNotFreeze.hpp"