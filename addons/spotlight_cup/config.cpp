#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = QUOTE(TTT Spolight CUP);
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Addi", "Andx"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {"ttt_main","CUP_Creatures_People_LoadOrder"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

//deactivate all other menus
class AoW_Showcase_AoW {condition = "false";};
class AoW_Showcase_Future {condition = "false";};
class ApexProtocol {condition = "false";};
class Bootcamp {condition = "false";};
class Contact_Campaign {condition = "false";};
class EastWind {condition = "false";};
class OldMan {condition = "false";};
class Orange_Campaign {condition = "false";};
class Orange_CampaignGerman {condition = "false";};
class Orange_Showcase_IDAP {condition = "false";};
class Orange_Showcase_LoW {condition = "false";};
class SP_FD14 {condition = "false";};
class Tacops_Campaign_01 {condition = "false";};
class Tacops_Campaign_02 {condition = "false";};
class Tacops_Campaign_03 {condition = "false";};
class Tanks_Campaign_01 {condition = "false";};

#include "CfgMainMenuSpotlight.hpp"