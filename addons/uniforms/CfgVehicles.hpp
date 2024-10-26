class CfgVehicles {

	class B_Soldier_base_F;			
	
	//Basis-Klasse fuer Basisklassen
	class TTT_Base_US : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		author = "Tactical Training Team";
		displayName = "Basis-Klasse US";
		scope = 0;
		icon = "iconMan";
		uniformAccessories[] = {};
		uniformClass = "";	
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
		items[] = {};
		respawnItems[] = {};
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
	};

	class TTT_Yellow_US_Desert : TTT_Base_US {
		author = "Tactical Training Team";
		displayName = "Klasse Gelb Desert";
		scope = 1;
		uniformClass = "TTT_Uniform_Yellow_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_yellow_US_Desert.paa" };
	};

	class TTT_Grey_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Grau Desert";
		uniformClass = "TTT_Uniform_Grey_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_grey_US_Desert.paa" };
	};

	class TTT_Gold_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Gold Desert";
		uniformClass = "TTT_Uniform_Gold_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_gold_US_Desert.paa" };
	};

	class TTT_Green_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Grün Desert";
		uniformClass = "TTT_Uniform_Green_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_green_US_Desert.paa" };
	};

	class TTT_Brown_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Braun Desert";
		uniformClass = "TTT_Uniform_Brown_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_brown_US_Desert.paa" };
	};

	class TTT_Black_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Schwarz Desert";
		uniformClass = "TTT_Uniform_Black_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_black_US_Desert.paa" };
	};

	class TTT_Red_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Rot Desert";
		uniformClass = "TTT_Uniform_Red_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_red_US_Desert.paa" };
	};

	class TTT_Bronze_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Bronze Desert";
		uniformClass = "TTT_Uniform_Bronze_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_bronze_US_Desert.paa" };
	};

	class TTT_Blue_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Blau Desert";
		uniformClass = "TTT_Uniform_Blue_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_blue_US_Desert.paa" };
	};

	class TTT_Violet_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Violett Desert";
		uniformClass = "TTT_Uniform_Violet_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_violet_US_Desert.paa" };
	};

	class TTT_White_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Weiss Desert";
		uniformClass = "TTT_Uniform_White_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_white_US_Desert.paa" };
	};

	class TTT_Silver_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Silber Desert";
		uniformClass = "TTT_Uniform_Silver_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_silver_US_Desert.paa" };
	};
	class TTT_Orange_US_Desert : TTT_Yellow_US_Desert {
		author = "Tactical Training Team";
		displayName = "Klasse Orange Desert";
		uniformClass = "TTT_Uniform_Orange_US_Desert";
		hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_orange_US_Desert.paa" };
	};

};