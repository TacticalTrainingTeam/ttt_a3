#include "script_component.hpp"

class CfgPatches {
	class ADDON	{
		// Meta information for editor
		name = COMPONENT_NAME;
		author = "Tactical Training Team";
		authors[] = {"Reimchen","Andx"};
		url = "https://tacticalteam.de";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = REQUIRED_VERSION;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = {"ttt_main",  "A3_Characters_F", "A3_Weapons_F"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {
			"TTT_Beret_Item_Blue",
			"TTT_Beret_Item_Brown",
			"TTT_Beret_Item_Bronze",
			"TTT_Beret_Item_Yellow",
			"TTT_Beret_Item_Gold",
			"TTT_Beret_Item_Grey",
			"TTT_Beret_Item_Green",
			"TTT_Beret_Item_Logo",
			"TTT_Beret_Item_Platinum",
			"TTT_Beret_Item_Red",
			"TTT_Beret_Item_Black",
			"TTT_Beret_Item_Silver",
			"TTT_Beret_Item_Violet",
			"TTT_Beret_Item_White",
			"TTT_Beret_Item_Orange"
		};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {
			"TTT_Beret_Blue",
			"TTT_Beret_Brown",
			"TTT_Beret_Bronze",
			"TTT_Beret_Yellow",
			"TTT_Beret_Gold",
			"TTT_Beret_Grey",
			"TTT_Beret_Green",
			"TTT_Beret_Logo",
			"TTT_Beret_Platinum",
			"TTT_Beret_Red",
			"TTT_Beret_Black",
			"TTT_Beret_Silver",
			"TTT_Beret_Violet",
			"TTT_Beret_White",
			"TTT_Beret_Orange"
		};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"