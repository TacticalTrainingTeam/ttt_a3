/*
#############################################################
### Basis-Klassen
#############################################################
*/

//Basis-Klasse fuer Basisklassen
class TTT_Base_US : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    author = "$STR_Tactical_Training_Team";
    displayName = "Basis-Klasse US";
    scope = 0;
	icon = "iconMan";
    uniformAccessories[] = {};
	uniformClass = "TTT_Uniform_Base_Us";	
    nakedUniform = "U_BasicBody";
    hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
    items[] = {};
    respawnItems[] = {};
	weapons[] = {};
	respawnWeapons[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
};

/*
#############################################################
### Basis-Klassen
#############################################################
*/
//Woodland
class TTT_Yellow_US_Woodland : TTT_Base_US {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gelb Woodland";
	scope = 1;
	uniformClass = "TTT_Uniform_Yellow_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_yellow_US_Woodland.paa" };
	//hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
};

class TTT_Grey_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Grau Woodland";
	uniformClass = "TTT_Uniform_Grey_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_grey_US_Woodland.paa" };
};

class TTT_Gold_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gold Woodland";
	uniformClass = "TTT_Uniform_Gold_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_gold_US_Woodland.paa" };
};

class TTT_Green_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gruen Woodland";
	uniformClass = "TTT_Uniform_Green_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_green_US_Woodland.paa" };
};

class TTT_Brown_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Braun Woodland";
	uniformClass = "TTT_Uniform_Brown_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_brown_US_Woodland.paa" };
};

class TTT_Black_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Schwarz Woodland";
	uniformClass = "TTT_Uniform_Black_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_black_US_Woodland.paa" };
};

class TTT_Red_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Rot Woodland";
	uniformClass = "TTT_Uniform_Red_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_red_US_Woodland.paa" };
};

class TTT_Bronze_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Bronze Woodland";
	uniformClass = "TTT_Uniform_Bronze_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_bronx_US_Woodland.paa" };
};

class TTT_Blue_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Blau Woodland";
	uniformClass = "TTT_Uniform_Blue_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_blue_US_Woodland.paa" };
};

class TTT_Violet_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Violett Woodland";
	uniformClass = "TTT_Uniform_Violet_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_violet_US_Woodland.paa" };
};

class TTT_White_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Weiss Woodland";
	uniformClass = "TTT_Uniform_White_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_white_US_Woodland.paa" };
};

class TTT_Silver_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Silber Woodland";
	uniformClass = "TTT_Uniform_Silver_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_silver_US_Woodland.paa" };
};
class TTT_Orange_US_Woodland : TTT_Yellow_US_Woodland {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Orange Woodland";
	uniformClass = "TTT_Uniform_Orange_US_Woodland";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_orange_US_Woodland.paa" };
};
//Desert
class TTT_Yellow_US_Desert : TTT_Base_US {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gelb Desert";
	scope = 1;
	uniformClass = "TTT_Uniform_Yellow_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_yellow_US_Desert.paa" };
};

class TTT_Grey_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Grau Desert";
	uniformClass = "TTT_Uniform_Grey_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_grey_US_Desert.paa" };
};

class TTT_Gold_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gold Desert";
	uniformClass = "TTT_Uniform_Gold_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_gold_US_Desert.paa" };
};

class TTT_Green_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gruen Desert";
	uniformClass = "TTT_Uniform_Green_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_green_US_Desert.paa" };
};

class TTT_Brown_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Braun Desert";
	uniformClass = "TTT_Uniform_Brown_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_brown_US_Desert.paa" };
};

class TTT_Black_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Schwarz Desert";
	uniformClass = "TTT_Uniform_Black_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_black_US_Desert.paa" };
};

class TTT_Red_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Rot Desert";
	uniformClass = "TTT_Uniform_Red_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_red_US_Desert.paa" };
};

class TTT_Bronze_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Bronze Desert";
	uniformClass = "TTT_Uniform_Bronze_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_bronx_US_Desert.paa" };
};

class TTT_Blue_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Blau Desert";
	uniformClass = "TTT_Uniform_Blue_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_blue_US_Desert.paa" };
};

class TTT_Violet_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Violett Desert";
	uniformClass = "TTT_Uniform_Violet_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_violet_US_Desert.paa" };
};

class TTT_White_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Weiss Desert";
	uniformClass = "TTT_Uniform_White_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_white_US_Desert.paa" };
};

class TTT_Silver_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Silber Desert";
	uniformClass = "TTT_Uniform_Silver_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_silver_US_Desert.paa" };
};
class TTT_Orange_US_Desert : TTT_Yellow_US_Desert {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Orange Desert";
	uniformClass = "TTT_Uniform_Orange_US_Desert";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_US\data\TTT_uniform_orange_US_Desert.paa" };
};
