/*
#############################################################
### Basis-Klassen
#############################################################
*/

//Basis-Klasse fuer Basisklassen
class TTT_Base_BW : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    author = "$STR_Tactical_Training_Team";
    displayName = "Basis-Klasse BW";
    scope = 0;
	icon = "iconMan";
    uniformAccessories[] = {};
	uniformClass = "TTT_Uniform_Base_Bw";	
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
//Flecktarn
class TTT_Yellow_BW_Flecktarn : TTT_Base_BW {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gelb Flecktarn";
	scope = 1;
	uniformClass = "TTT_Uniform_Yellow_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
	//hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
};

class TTT_Grey_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Grau Flecktarn";
	uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
};

class TTT_Gold_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gold Flecktarn";
	uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
};

class TTT_Green_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gruen Flecktarn";
	uniformClass = "TTT_Uniform_Green_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
};

class TTT_Brown_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Braun Flecktarn";
	uniformClass = "TTT_Uniform_Brown_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
};

class TTT_Black_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Schwarz Flecktarn";
	uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
};

class TTT_Red_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Rot Flecktarn";
	uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
};

class TTT_Bronze_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Bronze Flecktarn";
	uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
};

class TTT_Blue_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Blau Flecktarn";
	uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
};

class TTT_Violet_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Violett Flecktarn";
	uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_flecktarn.paa" };
};

class TTT_White_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Weiss Flecktarn";
	uniformClass = "TTT_Uniform_White_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
};

class TTT_Silver_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Silber Flecktarn";
	uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
};
class TTT_Orange_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Orange Flecktarn";
	uniformClass = "TTT_Uniform_Orange_BW_Flecktarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_orange_bw_flecktarn.paa" };
};
//Tropentarn
class TTT_Yellow_BW_Tropentarn : TTT_Base_BW {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gelb Tropentarn";
	scope = 1;
	uniformClass = "TTT_Uniform_Yellow_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
};

class TTT_Grey_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Grau Tropentarn";
	uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
};

class TTT_Gold_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gold Tropentarn";
	uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
};

class TTT_Green_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Gruen Tropentarn";
	uniformClass = "TTT_Uniform_Green_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
};

class TTT_Brown_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Braun Tropentarn";
	uniformClass = "TTT_Uniform_Brown_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
};

class TTT_Black_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Schwarz Tropentarn";
	uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
};

class TTT_Red_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Rot Tropentarn";
	uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
};

class TTT_Bronze_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Bronze Tropentarn";
	uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
};

class TTT_Blue_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Blau Tropentarn";
	uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
};

class TTT_Violet_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Violett Tropentarn";
	uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
};

class TTT_White_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Weiss Tropentarn";
	uniformClass = "TTT_Uniform_White_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
};

class TTT_Silver_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Silber Tropentarn";
	uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
};
class TTT_Orange_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
	author = "$STR_Tactical_Training_Team";
	displayName = "Klasse Orange Tropentarn";
	uniformClass = "TTT_Uniform_Orange_BW_Tropentarn";
	hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_orange_bw_tropentarn.paa" };
};
