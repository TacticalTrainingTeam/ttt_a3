class CfgPatches
{
	class ttt_uniforms
	{
		// Meta information for editor
		name = "TTT Uniformen";
		author = "TacticalTrainingTeam";
		//authors[] = {"Reimchen","Andx"};
		url = "https://tacticalteam.de";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = {"ttt_main",  "A3_Characters_F", "A3_Weapons_F"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {

		};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {
			"TTT_Uniform_Yellow_US_Desert",
			"TTT_Uniform_Green_US_Desert",
			"TTT_Uniform_Brown_US_Desert",
			"TTT_Uniform_Red_US_Desert",
			"TTT_Uniform_Black_US_Desert",
			"TTT_Uniform_Violet_US_Desert",
			"TTT_Uniform_White_US_Desert",
			"TTT_Uniform_Blue_US_Desert",
			"TTT_Uniform_Grey_US_Desert",
			"TTT_Uniform_Gold_US_Desert",
			"TTT_Uniform_Silver_US_Desert",
			"TTT_Uniform_Orange_US_Desert",
		};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"