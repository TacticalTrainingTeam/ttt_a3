#include "script_component.hpp"

class CfgPatches {
	class ADDON	{
		// Meta information for editor
		name = COMPONENT_NAME;
		author = "Tactical Training Team";
		authors[] = {"Redd", "Stura", "Reimchen", "Tank", "V1irus", "Addi", "Andx"};
		url = "https://tacticalteam.de";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = REQUIRED_VERSION;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = {"ttt_main", "ttt_rsr_core", "bwa3_common", "ace_common"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {
			"rsr_eagle_fleck",
			"rsr_eagle_fleck_lowvis",
			"rsr_eagle_fleck_dia",
			"rsr_eagle_tropen",
			"rsr_eagle_tropen_lowvis",
			"rsr_eagle_tropen_dia"
        };
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

#include "CfgVehicles.hpp"