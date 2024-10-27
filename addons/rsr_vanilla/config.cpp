class CfgPatches
{
	class ttt_rsr_vanilla
	{
		// Meta information for editor
		name = "TTT RSR Vanilla Fahrzeuge";
		author = "TacticalTrainingTeam";
		authors[] = {"Redd", "Stura", "Reimchen", "Andx"};
		url = "https://tacticalteam.de";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = {"ttt_main", "rsr_core"}; //ToDo find vehicle base class
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {
            "rsr_fennek_transport_flecktarn",
			"rsr_fennek_hmg_flecktarn",
			"rsr_fennek_gmg_flecktarn",
			"rsr_fennek_transport_tropentarn",
			"rsr_fennek_hmg_tropentarn",
			"rsr_fennek_gmg_tropentarn",
			"rsr_bergepanzer_tropentarn",
			"rsr_bergepanzer_flecktarn",
			"rsr_wisent_transport_flecktarn",
			"rsr_wisent_covered_flecktarn",
			"rsr_wisent_repair_flecktarn",
			"rsr_wisent_ammo_flecktarn",
			"rsr_wisent_fuel_flecktarn",
			"rsr_wisent_medical_flecktarn",
			"rsr_wisent_transport_tropentarn",
			"rsr_wisent_covered_tropentarn",
			"rsr_wisent_repair_tropentarn",
			"rsr_wisent_ammo_tropentarn",
			"rsr_wisent_fuel_tropentarn",
			"rsr_wisent_medical_tropentarn"
        };
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

#include "CfgVehicles.hpp"
#include "CfgFunctions.hpp"