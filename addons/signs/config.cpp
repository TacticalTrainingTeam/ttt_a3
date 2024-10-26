class CfgPatches
{
	class ttt_signs
	{
		// Meta information for editor
		name = "TTT Signs";
		author = "Tactical Training Team";
		url = "";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Functions_F", "ttt_main", "cba_main"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {			
			"TTT_Flag_Logo",
			"TTT_Flag_Blue",
			"TTT_Flag_Brown",
			"TTT_Flag_Bronze",
			"TTT_Flag_Yellow",
			"TTT_Flag_Gold",
			"TTT_Flag_Green",
			"TTT_Flag_Red",
			"TTT_Flag_Black",
			"TTT_Flag_Silver",
			"TTT_Flag_Platinum",
			"TTT_Flag_Violet",
			"TTT_Flag_White",
			"TTT_Flag_Orange",
			"TTT_Sign_Small_Blue",
			"TTT_Sign_Small_Bronze",
			"TTT_Sign_Small_Brown",
			"TTT_Sign_Small_Yellow",
			"TTT_Sign_Small_Gold",
			"TTT_Sign_Small_Grey",
			"TTT_Sign_Small_Green",
			"TTT_Sign_Small_Red",
			"TTT_Sign_Small_Black",
			"TTT_Sign_Small_Silver",
			"TTT_Sign_Small_Platinum",
			"TTT_Sign_Small_Violet",
			"TTT_Sign_Small_White",
			"TTT_Sign_Small_Logo",
			"TTT_Sign_Small_Orange",
			"TTT_Sign_Large_Blue",
			"TTT_Sign_Large_Bronze",
			"TTT_Sign_Large_Brown",
			"TTT_Sign_Large_Yellow",
			"TTT_Sign_Large_Gold",
			"TTT_Sign_Large_Grey",
			"TTT_Sign_Large_Green",
			"TTT_Sign_Large_Red",
			"TTT_Sign_Large_Black",
			"TTT_Sign_Large_Silver",
			"TTT_Sign_Large_Platinum",
			"TTT_Sign_Large_Violet",
			"TTT_Sign_Large_White",
			"TTT_Sign_Large_Logo",
			"TTT_Sign_Large_Orange"
			};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

#include "CfgVehicles.hpp"