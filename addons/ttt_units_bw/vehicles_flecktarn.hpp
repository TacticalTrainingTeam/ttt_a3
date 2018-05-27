/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Yellow_1_BW_Flecktarn : TTT_Yellow_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
    backpack = "TTT_Backpack_Commander_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Gelb 2 (Funker)
class TTT_Yellow_2_BW_Flecktarn : TTT_Yellow_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Gelb 3 (UAV)
class TTT_Yellow_3_BW_Flecktarn : TTT_Yellow_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", "B_UavTerminal", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", "B_UavTerminal", default_linkedItems };
};

//Gelb 4 (Moerser)
class TTT_Yellow_4_BW_Flecktarn : TTT_Yellow_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_yellow_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Grey_1_BW_Flecktarn : TTT_Grey_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Grau 2 (Funker/FAC)
class TTT_Grey_2_BW_Flecktarn : TTT_Grey_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grey_3_BW_Flecktarn : TTT_Grey_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
    backpack = "TTT_Backpack_Medic_Combat_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Grau 4 (Pionier)
class TTT_Grey_4_BW_Flecktarn : TTT_Grey_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
    backpack = "TTT_Backpack_Pioneer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Grau 5 (Schuetze)
class TTT_Grey_5_BW_Flecktarn : TTT_Grey_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Grau 6 (Schuetze)
class TTT_Grey_6_BW_Flecktarn : TTT_Grey_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Gold_1_BW_Flecktarn : TTT_Gold_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};


//Gold 2 (Funker)
class TTT_Gold_2_BW_Flecktarn : TTT_Gold_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Gold 3 (Spotter)
class TTT_Gold_3_BW_Flecktarn : TTT_Gold_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Gold 4 (Sniper)
class TTT_Gold_4_BW_Flecktarn : TTT_Gold_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_gold_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Gold 5 (Schuetze)
class TTT_Gold_5_BW_Flecktarn : TTT_Gold_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Gold 6 (Schuetze)
class TTT_Gold_6_BW_Flecktarn : TTT_Gold_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Gold_BW_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_grey_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Green_1_BW_Flecktarn : TTT_Green_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Green_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Gruen 2 (Funker/FAC)
class TTT_Green_2_BW_Flecktarn : TTT_Green_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Green_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Green_3_BW_Flecktarn : TTT_Green_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    backpack = "TTT_Backpack_Medic_Combat_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Green_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Green_4_BW_Flecktarn : TTT_Green_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    backpack = "TTT_Backpack_Medic_Combat_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Green_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_green_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Brown_1_BW_Flecktarn : TTT_Brown_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Brown_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Brown_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Braun 2 (Funker/FAC)
class TTT_Brown_2_BW_Flecktarn : TTT_Brown_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Brown_BW_Tropentarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Brown_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Brown_3_BW_Flecktarn : TTT_Brown_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Brown_BW_Tropentarn";
    backpack = "TTT_Backpack_Medic_Combat_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Brown_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_brown_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Black_1_BW_Flecktarn : TTT_Black_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Schwarz 2 (Grenadier)
class TTT_Black_2_BW_Flecktarn : TTT_Black_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Black_3_BW_Flecktarn : TTT_Black_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Black_4_BW_Flecktarn : TTT_Black_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Black_5_BW_Flecktarn : TTT_Black_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Schwarz 6 (AT-Schuetze)
class TTT_Black_6_BW_Flecktarn : TTT_Black_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_AT_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_black_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Red_1_BW_Flecktarn : TTT_Red_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Rot 2 (Grenadier)
class TTT_Red_2_BW_Flecktarn : TTT_Red_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Rot 3 (LMG-Schuetze)
class TTT_Red_3_BW_Flecktarn : TTT_Red_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};


//Rot 4 (AT-Schuetze)
class TTT_Red_4_BW_Flecktarn : TTT_Red_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_AT_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Rot 5 (LMG-Schuetze)
class TTT_Red_5_BW_Flecktarn : TTT_Red_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Rot 6 (AT-Schuetze)
class TTT_Red_6_BW_Flecktarn : TTT_Red_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_AT_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_red_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Blue_1_BW_Flecktarn : TTT_Blue_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Blau 2 (Grenadier)
class TTT_Blue_2_BW_Flecktarn : TTT_Blue_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};


//Blau 5 (MG-Assistent)
class TTT_Blue_3_BW_Flecktarn : TTT_Blue_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
    backpack = "TTT_Backpack_Assistant_MG_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Blau 4 (MG-Schuetze)
class TTT_Blue_4_BW_Flecktarn : TTT_Blue_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_MG_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Blau 5 (Pionier)
class TTT_Blue_5_BW_Flecktarn : TTT_Blue_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
    backpack = "TTT_Backpack_Pioneer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Blau 6 (Pionier)
class TTT_Blue_6_BW_Flecktarn : TTT_Blue_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
    backpack = "TTT_Backpack_Pioneer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_blue_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
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
class TTT_Violet_1_BW_Flecktarn : TTT_Violet_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
    backpack = "TTT_Backpack_Teamleader_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_violet_bw_Flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Desert), "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Violett 2 (Grenadier)
class TTT_Violet_2_BW_Flecktarn : TTT_Violet_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
    backpack = "TTT_Backpack_Grenadier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_violet_bw_Flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Violett 3 (MG-Assistent)
class TTT_Violet_3_BW_Flecktarn : TTT_Violet_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
    backpack = "TTT_Backpack_Assistant_MG_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_violet_bw_Flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Violett 4 (MG-Schuetze)
class TTT_Violet_4_BW_Flecktarn : TTT_Violet_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_MG_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_violet_bw_Flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Violett 5 (Pionier)
class TTT_Violet_5_BW_Flecktarn : TTT_Violet_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
    backpack = "TTT_Backpack_Pioneer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_violet_bw_Flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Violett 6 (Pionier)
class TTT_Violet_6_BW_Flecktarn : TTT_Violet_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
    backpack = "TTT_Backpack_Pioneer_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_violet_bw_Flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Desert), "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Bronze (Flecktarn)
#############################################################
*/

//Bronze 1 (Truppfuehrer)
class TTT_Bronze_1_BW_Flecktarn : TTT_Bronze_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
};

//Bronze 2 (Schuetze)
class TTT_Bronze_2_BW_Flecktarn : TTT_Bronze_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
};

//Bronze 3 (Fahrer)
class TTT_Bronze_3_BW_Flecktarn : TTT_Bronze_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
};

//Bronze 4 (Kommandant)
class TTT_Bronze_4_BW_Flecktarn : TTT_Bronze_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
};

//Bronze 5 (Schuetze)
class TTT_Bronze_5_BW_Flecktarn : TTT_Bronze_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
};

//Bronze 6 (Fahrer)
class TTT_Bronze_6_BW_Flecktarn : TTT_Bronze_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bronze_BW_Flecktarn";
    backpack = "TTT_Backpack_Soldier_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_bronx_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
};

/*
#############################################################
### Trupp Weiss (Flecktarn)
#############################################################
*/

//Weiss 1 (Oberfeldarzt)
class TTT_White_1_BW_Flecktarn : TTT_White_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_White_BW_Tropentarn";
    backpack = "TTT_Backpack_Medic_Doctor_BW_Flecktarn";
    uniformClass = "TTT_Uniform_White_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Weiss 2 (Fahrzeugfuehrer)
class TTT_White_2_BW_Flecktarn : TTT_White_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_White_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_White_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Weiss 2 (Feldarzt)
class TTT_White_3_BW_Flecktarn : TTT_White_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_White_BW_Tropentarn";
    backpack = "TTT_Backpack_Medic_Doctor_BW_Flecktarn";
    uniformClass = "TTT_Uniform_White_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Weiss 4 (Fahrzeugfuehrer)
class TTT_White_4_BW_Flecktarn : TTT_White_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_White_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_White_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_white_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Platin (Flecktarn)
#############################################################
*/

//Platin 1 (Pilot)
class TTT_Platinum_1_BW_Flecktarn : TTT_Platinum_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Platinum_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_platin_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};

//Platin 2 (Pilot)
class TTT_Platinum_2_BW_Flecktarn : TTT_Platinum_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Platinum_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_platin_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};

/*
#############################################################
### Trupp Silber (Flecktarn)
#############################################################
*/

//Silber 1 (Truppfuehrer)
class TTT_Silver_1_BW_Flecktarn : TTT_Silver_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Flecktarn", default_linkedItems };
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silver_2_BW_Flecktarn : TTT_Silver_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Flecktarn", default_linkedItems };
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silver_3_BW_Flecktarn : TTT_Silver_3_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Flecktarn", default_linkedItems };
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silver_4_BW_Flecktarn : TTT_Silver_4_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Flecktarn", default_linkedItems };
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silver_5_BW_Flecktarn : TTT_Silver_5_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_5_BW_Flecktarn", default_linkedItems };
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silver_6_BW_Flecktarn : TTT_Silver_6_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_6_BW_Flecktarn", default_linkedItems };
};

/*
#############################################################
### Trupp Bussard (Flecktarn) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Buzzard_1_BW_Flecktarn : TTT_Buzzard_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bussard_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Bussard 2 (Copilot)
class TTT_Buzzard_2_BW_Flecktarn : TTT_Buzzard_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Bussard_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Habicht 1 (Pilot)
class TTT_Hawk_1_BW_Flecktarn : TTT_Hawk_1_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Habicht_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
};

//Habicht 2 (Copilot)
class TTT_Hawk_2_BW_Flecktarn : TTT_Hawk_2_BW_Tropentarn {
    author = "$STR_Tactical_Training_Team";
    vehicleClass = "TTT_Habicht_BW_Flecktarn";
    backpack = "TTT_Backpack_Pilot_BW_Flecktarn";
    uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
    editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\addons\ttt_units_bw\data\TTT_uniform_silver_bw_flecktarn.paa" };
    hiddenSelectionsMaterials[] = {"\ttt_a3\addons\ttt_units_base\data\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
};

#undef GROUP_COLOR