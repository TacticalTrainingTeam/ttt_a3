class CfgPatches
{
	class ttt_spotlight_rhs
	{
		// Meta information for editor
		name = "TTT Spolight CUP";
		author = "Tactical Training Team";
        authors[] = {"Addi","Ampersand", "Andx"};
		url = "https://tacticalteam.de";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = {"ttt_main","rhsusf_main_loadorder"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

class CfgMainMenuSpotlight // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
{
	class spotlightrhs
	{
		text = "Tactical Training Team - RHS Server"; // Text displayed on the square button, converted to upper-case
		textIsQuote = 0; // 1 to add quotation marks around the text
		picture = "z\ttt\addons\spotlight_rhs\data\button.paa"; // Square picture, ideally 512x512
		//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
		action = "connectToServer ['game.tacticalteam.de', 2332, '130']"; // Code called upon clicking, passed arguments are [<button:Control>]
		actionText = "Join server: Tactical Training Team - RHS Server"; // Text displayed in top left corner of on-hover white frame
		condition = "true"; // Condition for showing the spotlight
	};
};
