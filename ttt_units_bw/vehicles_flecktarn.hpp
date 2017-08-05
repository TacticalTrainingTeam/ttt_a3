/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Gelb1_BW_Flecktarn : TTT_Gelb1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gelb_BW_Flecktarn";
    backpack = "TTT_Backpack_Opl_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Gelb 2 (Funker)
class TTT_Gelb2_BW_Flecktarn : TTT_Gelb2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gelb_BW_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Gelb 3 (UAV)
class TTT_Gelb3_BW_Flecktarn : TTT_Gelb3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gelb_BW_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", "B_UavTerminal", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", "B_UavTerminal", default_linkedItems };
};

//Gelb 4 (Moerser)
class TTT_Gelb4_BW_Flecktarn : TTT_Gelb4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gelb_BW_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Grey

//Grau 1 (Truppfuehrer)
class TTT_Grau1_BW_Flecktarn : TTT_Grau1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grau_BW_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Grau 2 (Funker/FAC)
class TTT_Grau2_BW_Flecktarn : TTT_Grau2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grau_BW_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grau3_BW_Flecktarn : TTT_Grau3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grau_BW_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Grau 4 (Pionier)
class TTT_Grau4_BW_Flecktarn : TTT_Grau4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grau_BW_Flecktarn";
    backpack = "TTT_Backpack_Pionier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Grau 5 (Schuetze)
class TTT_Grau5_BW_Flecktarn : TTT_Grau5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grau_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Grau 6 (Schuetze)
class TTT_Grau6_BW_Flecktarn : TTT_Grau6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grau_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Gold (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Gold

//Gold 1 (Truppfuehrer)
class TTT_Gold1_BW_Flecktarn : TTT_Gold1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};


//Gold 2 (Funker)
class TTT_Gold2_BW_Flecktarn : TTT_Gold2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Gold 3 (Spotter)
class TTT_Gold3_BW_Flecktarn : TTT_Gold3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Gold 4 (Sniper)
class TTT_Gold4_BW_Flecktarn : TTT_Gold4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Gold 5 (Schuetze)
class TTT_Gold5_BW_Flecktarn : TTT_Gold5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };	
};

//Gold 6 (Schuetze)
class TTT_Gold6_BW_Flecktarn : TTT_Gold6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Gruen (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Green

//Gruen 1 (Zugfuehrer)
class TTT_Gruen1_BW_Flecktarn : TTT_Gruen1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gruen_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Gruen 2 (Funker/FAC)
class TTT_Gruen2_BW_Flecktarn : TTT_Gruen2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gruen_BW_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Gruen3_BW_Flecktarn : TTT_Gruen3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gruen_BW_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Gruen4_BW_Flecktarn : TTT_Gruen4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gruen_BW_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Braun (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Brown

//Braun 1 (Zugfuehrer)
class TTT_Braun1_BW_Flecktarn : TTT_Braun1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Braun_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Braun_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Braun 2 (Funker/FAC)
class TTT_Braun2_BW_Flecktarn : TTT_Braun2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Braun_BW_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Braun_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Braun3_BW_Flecktarn : TTT_Braun3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Braun_BW_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Braun_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Schwarz (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Black


//Schwarz 1 (Truppfuehrer)
class TTT_Schwarz1_BW_Flecktarn : TTT_Schwarz1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Schwarz_BW_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Schwarz 2 (Grenadier)
class TTT_Schwarz2_BW_Flecktarn : TTT_Schwarz2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Schwarz_BW_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Schwarz3_BW_Flecktarn : TTT_Schwarz3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Schwarz_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Schwarz4_BW_Flecktarn : TTT_Schwarz4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Schwarz_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Schwarz5_BW_Flecktarn : TTT_Schwarz5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Schwarz_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Schwarz 6 (AT-Schuetze)
class TTT_Schwarz6_BW_Flecktarn : TTT_Schwarz6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Schwarz_BW_Flecktarn";
    backpack = "TTT_Backpack_Atschuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Rot (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Red

//Rot 1 (Truppfuehrer)
class TTT_Rot1_BW_Flecktarn : TTT_Rot1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Rot_BW_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Rot 2 (Grenadier)
class TTT_Rot2_BW_Flecktarn : TTT_Rot2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Rot_BW_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Rot 3 (LMG-Schuetze)
class TTT_Rot3_BW_Flecktarn : TTT_Rot3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Rot_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};


//Rot 4 (AT-Schuetze)
class TTT_Rot4_BW_Flecktarn : TTT_Rot4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Rot_BW_Flecktarn";
    backpack = "TTT_Backpack_AtSchuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Rot 5 (LMG-Schuetze)
class TTT_Rot5_BW_Flecktarn : TTT_Rot5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Rot_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Rot 6 (AT-Schuetze)
class TTT_Rot6_BW_Flecktarn : TTT_Rot6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Rot_BW_Flecktarn";
    backpack = "TTT_Backpack_Atschuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Blau (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Blue

//Blau 1 (Truppfuehrer)
class TTT_Blau1_BW_Flecktarn : TTT_Blau1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blau_BW_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Blau 2 (Grenadier)
class TTT_Blau2_BW_Flecktarn : TTT_Blau2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blau_BW_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};


//Blau 5 (MG-Assistent)
class TTT_Blau3_BW_Flecktarn : TTT_Blau3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blau_BW_Flecktarn";
    backpack = "TTT_Backpack_Mgassistent_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Blau 4 (MG-Schuetze)
class TTT_Blau4_BW_Flecktarn : TTT_Blau4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blau_BW_Flecktarn";
    backpack = "TTT_Backpack_Mgschuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Blau 5 (Pionier)
class TTT_Blau5_BW_Flecktarn : TTT_Blau5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blau_BW_Flecktarn";
    backpack = "TTT_Backpack_Pionier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Blau 6 (Pionier)
class TTT_Blau6_BW_Flecktarn : TTT_Blau6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blau_BW_Flecktarn";
    backpack = "TTT_Backpack_Pionier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Violett (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Purple

//Violett 1 (Truppfuehrer)
class TTT_Violett1_BW_Flecktarn : TTT_Violett1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violett_BW_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Violett 2 (Grenadier)
class TTT_Violett2_BW_Flecktarn : TTT_Violett2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violett_BW_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Violett 3 (MG-Assistent)
class TTT_Violett3_BW_Flecktarn : TTT_Violett3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violett_BW_Flecktarn";
    backpack = "TTT_Backpack_Mgassistent_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Violett 4 (MG-Schuetze)
class TTT_Violett4_BW_Flecktarn : TTT_Violett4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violett_BW_Flecktarn";
    backpack = "TTT_Backpack_Mgschuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Violett 5 (Pionier)
class TTT_Violett5_BW_Flecktarn : TTT_Violett5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violett_BW_Flecktarn";
    backpack = "TTT_Backpack_Pionier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Violett 6 (Pionier)
class TTT_Violett6_BW_Flecktarn : TTT_Violett6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violett_BW_Flecktarn";
    backpack = "TTT_Backpack_Pionier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Bronze (Flecktarn)
#############################################################
*/

//Bronze 1 (Truppfuehrer)
class TTT_Bronze1_BW_Flecktarn : TTT_Bronze1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
};

//Bronze 2 (Schuetze)
class TTT_Bronze2_BW_Flecktarn : TTT_Bronze2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
};

//Bronze 3 (Fahrer)
class TTT_Bronze3_BW_Flecktarn : TTT_Bronze3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
};

//Bronze 4 (Kommandant)
class TTT_Bronze4_BW_Flecktarn : TTT_Bronze4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
};

//Bronze 5 (Schuetze)
class TTT_Bronze5_BW_Flecktarn : TTT_Bronze5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
};

//Bronze 6 (Fahrer)
class TTT_Bronze6_BW_Flecktarn : TTT_Bronze6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
};

/*
#############################################################
### Trupp Weiﬂ (Flecktarn)
#############################################################
*/

//Weiﬂ 1 (Oberfeldarzt)
class TTT_Weiss1_BW_Flecktarn : TTT_Weiss1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Weiss_BW_Flecktarn";
    backpack = "TTT_Backpack_Feldarzt_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};  
	linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Weiﬂ 2 (Fahrzeugfuehrer)
class TTT_Weiss2_BW_Flecktarn : TTT_Weiss2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Weiss_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Weiﬂ 2 (Feldarzt)
class TTT_Weiss3_BW_Flecktarn : TTT_Weiss3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Weiss_BW_Flecktarn";
    backpack = "TTT_Backpack_Feldarzt_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Weiﬂ 4 (Fahrzeugfuehrer)
class TTT_Weiss4_BW_Flecktarn : TTT_Weiss4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Weiss_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Platin (Flecktarn)
#############################################################
*/

//Platin 1 (Pilot)
class TTT_Platin1_BW_Flecktarn : TTT_Platin1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Platin_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_platin_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};	

//Platin 2 (Pilot)
class TTT_Platin2_BW_Flecktarn : TTT_Platin2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Platin_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_platin_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };	
};	

/*
#############################################################
### Trupp Silber (Flecktarn)
#############################################################
*/

//Silber 1 (Truppfuehrer)
class TTT_Silber1_BW_Flecktarn : TTT_Silber1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silber_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silber2_BW_Flecktarn : TTT_Silber2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silber_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silber3_BW_Flecktarn : TTT_Silber3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silber_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
	linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silber4_BW_Flecktarn : TTT_Silber4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silber_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silber5_BW_Flecktarn : TTT_Silber5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silber_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silber6_BW_Flecktarn : TTT_Silber6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silber_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Bussard (Flecktarn) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Bussard1_BW_Flecktarn : TTT_Bussard1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bussard_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Bussard 2 (Copilot)
class TTT_Bussard2_BW_Flecktarn : TTT_Bussard2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bussard_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Habicht 1 (Pilot)
class TTT_Habicht1_BW_Flecktarn : TTT_Habicht1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Habicht_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
};

//Habicht 2 (Copilot)
class TTT_Habicht2_BW_Flecktarn : TTT_Habicht2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Habicht_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_BW_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
};

#undef GROUP_COLOR