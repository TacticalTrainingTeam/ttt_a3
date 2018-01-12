/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Yellow_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gelb 1 (OPL)";
	icon = "iconManOfficer";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Commander_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Tropentarn";
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
	weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Rangefinder", default_weapons };
	respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Rangefinder", default_weapons };
};

//Gelb 2 (Funker)
class TTT_Yellow_2_BW_Tropentarn : TTT_Operator_Radio_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gelb 2 (Funker/FAC)";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Operator_Radio_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Gelb 3 (UAV)
class TTT_Yellow_3_BW_Tropentarn : TTT_Operator_Radio_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gelb 3 (UAV)";
    backpack = "TTT_Backpack_Operator_Radio_BW_Tropentarn";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", "B_UavTerminal", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", "B_UavTerminal", default_linkedItems };
};

//Gelb 4 (Moerser)
class TTT_Yellow_4_BW_Tropentarn : TTT_Operator_Radio_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
    displayName = "Gelb 4 (Moerser)";
    vehicleClass = "TTT_Yellow_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Yellow_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Grey

//Grau 1 (Truppfuehrer)
class TTT_Grey_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Grau 2 (Funker/FAC)
class TTT_Grey_2_BW_Tropentarn : TTT_Operator_Radio_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 2 (Funker/FAC)";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", default_weapons };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grey_3_BW_Tropentarn : TTT_Medic_Combat_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Grau 4 (Pionier)
class TTT_Grey_4_BW_Tropentarn : TTT_Pioneer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 4 (Pionier)";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Grau 5 (Schuetze)
class TTT_Grey_5_BW_Tropentarn : TTT_Soldier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 5 (Schuetze)";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Grau 6 (Schuetze)
class TTT_Grey_6_BW_Tropentarn : TTT_Soldier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 6 (Schuetze)";
    vehicleClass = "TTT_Grey_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Gold (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Gold
#define gold_items "BWA3_optic_ZO4x30", "BWA3_optic_Aimpoint", "BWA3_muzzle_snds_G28"

//Gold 1 (Truppfuehrer)
class TTT_Gold_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gold 1 (Truppfuehrer)";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Teamleader_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
};

//Gold 2 (Funker)
class TTT_Gold_2_BW_Tropentarn : TTT_Operator_Radio_Base_BW {
    scope = 2;
	author = "$STR_Tactical_Training_Team";
    displayName = "Gold 2 (Funker/FAC)";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "Laserdesignator", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "Laserdesignator", default_weapons };	
	magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };	
};

//Gold 3 (Spotter)
class TTT_Gold_3_BW_Tropentarn : TTT_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 3 (Spotter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, sniper_tools, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {gold_items, default_item_bw, sniper_tools, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan", "BWA3_P8", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan", "BWA3_P8", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
};

//Gold 4 (Sniper)
class TTT_Gold_4_BW_Tropentarn : TTT_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 2 (Sniper)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {"BWA3_optic_NSV80", sniper_tools, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {"BWA3_optic_NSV80", sniper_tools, default_ace_items, "ACE_microDAGR" };
    weapons[] = { "BWA3_G82_equipped", "BWA3_MP7_equipped", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "BWA3_G82_equipped", "BWA3_MP7_equipped", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, item_3(BWA3_40Rnd_46x30_MP7), item_2(BWA3_10Rnd_127x99_G82), item_2(BWA3_10Rnd_127x99_G82_AP), "BWA3_10Rnd_127x99_G82_Raufoss" };
    respawnMagazines[] = { default_smoke, item_3(BWA3_40Rnd_46x30_MP7), item_2(BWA3_10Rnd_127x99_G82), item_2(BWA3_10Rnd_127x99_G82_AP), "BWA3_10Rnd_127x99_G82_Raufoss" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Gold 5 (Schuetze)
class TTT_Gold_5_BW_Tropentarn : TTT_Soldier_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 5 (Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items};
    respawnItems[] = {gold_items, default_item_bw, default_ace_items};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan", "BWA3_P8", "Binocular", default_weapons };		
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
};

//Gold 6 (Schuetze)
class TTT_Gold_6_BW_Tropentarn : TTT_Soldier_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 6 (Schuetze)";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items};
    respawnItems[] = {gold_items, default_item_bw, default_ace_items};
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
};

/*
#############################################################
### Trupp Gruen (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Green

//Gruen 1 (Zugfuehrer)
class TTT_Green_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 1 (Zugfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Green_BW_Tropentarn";
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Gruen 2 (Funker/FAC)
class TTT_Green_2_BW_Tropentarn : TTT_Operator_Radio_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 2 (Funker/FAC)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Green_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Green_3_BW_Tropentarn : TTT_Medic_Combat_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 3 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Green_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Green_4_BW_Tropentarn : TTT_Medic_Combat_Base_BW {
    scope = 1;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 4 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Green_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Green_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Braun (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Brown

//Braun 1 (Zugfuehrer)
class TTT_Brown_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Braun 1 (Zugfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Brown_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Brown_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Braun 2 (Funker/FAC)
class TTT_Brown_2_BW_Tropentarn : TTT_Operator_Radio_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Braun 2 (Funker/FAC)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Brown_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Brown_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Brown_3_BW_Tropentarn : TTT_Medic_Combat_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Braun 3 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Brown_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Brown_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Schwarz (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Black

//Schwarz 1 (Truppfuehrer)
class TTT_Black_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 1 (Truppfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Schwarz 2 (Grenadier)
class TTT_Black_2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 2 (Grenadier)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Black_3_BW_Tropentarn : TTT_Soldier_LMG_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 3 (LMG-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Black_4_BW_Tropentarn : TTT_Soldier_AT_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 4 (AT-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Black_5_BW_Tropentarn : TTT_Soldier_LMG_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 5 (LMG-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Schwarz 6 (AT-Schuetze)
class TTT_Black_6_BW_Tropentarn : TTT_Soldier_AT_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 6 (AT-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Black_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Rot (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Red

//Rot 1 (Truppfuehrer)
class TTT_Red_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Rot 1 (Truppfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Rot 2 (Grenadier)
class TTT_Red_2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Rot 2 (Grenadier)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Red_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Rot 3 (LMG-Schuetze)
class TTT_Red_3_BW_Tropentarn : TTT_Soldier_LMG_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 3 (LMG-Schuetze)";
    vehicleClass = "TTT_Red_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Rot 4 (AT-Schuetze)
class TTT_Red_4_BW_Tropentarn : TTT_Soldier_AT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 4 (AT-Schuetze)";
    vehicleClass = "TTT_Red_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Rot 5 (LMG-Schuetze)
class TTT_Red_5_BW_Tropentarn : TTT_Soldier_LMG_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 5 (LMG-Schuetze)";
    vehicleClass = "TTT_Red_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Rot 6 (AT-Schuetze)
class TTT_Red_6_BW_Tropentarn : TTT_Soldier_AT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 6 (AT-Schuetze)";
    vehicleClass = "TTT_Red_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Blau (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Blue

//Blau 1 (Truppfuehrer)
class TTT_Blue_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
	items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Blau 2 (Grenadier)
class TTT_Blue_2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 2 (Grenadier)";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Blau 3 (MG-Assistent)
class TTT_Blue_3_BW_Tropentarn : TTT_Assistant_MG_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 3 (MG-Assistent)";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Blau 4 (MG-Schuetze)
class TTT_Blue_4_BW_Tropentarn : TTT_Soldier_MG_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 4 (MG-Schuetze)";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Blau 5 (Pionier)
class TTT_Blue_5_BW_Tropentarn : TTT_Pioneer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 5 (Pionier)";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Blau 6 (Pionier)
class TTT_Blue_6_BW_Tropentarn : TTT_Pioneer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 6 (Pionier)";
    vehicleClass = "TTT_Blue_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Violett (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Purple

//Violett 1 (Truppfuehrer)
class TTT_Violet_1_BW_Tropentarn : TTT_Teamleader_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 1 (Truppfuehrer)";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Violett 2 (Grenadier)
class TTT_Violet_2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 2 (Grenadier)";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Violett 3 (MG-Assistent)
class TTT_Violet_3_BW_Tropentarn : TTT_Assistant_MG_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 3 (MG-Assistent)";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Violett 4 (MG-Schuetze)
class TTT_Violet_4_BW_Tropentarn : TTT_Soldier_MG_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 4 (MG-Schuetze)";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Violett 5 (Pionier)
class TTT_Violet_5_BW_Tropentarn : TTT_Pioneer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 5 (Pionier)";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Violett 6 (Pionier)
class TTT_Violet_6_BW_Tropentarn : TTT_Pioneer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 6 (Pionier)";
    vehicleClass = "TTT_Violet_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(US,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Bronze (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Bronze

//Bronze 1 (Truppfuehrer)
class TTT_Bronze_1_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 1 (Truppfuehrer)";
    icon = "iconManLeader";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 2 (Schuetze)
class TTT_Bronze_2_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 2 (Schuetze)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 3 (Fahrer)
class TTT_Bronze_3_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 3 (Fahrer)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 4 (Kommandant)
class TTT_Bronze_4_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 4 (Kommandant)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 5 (Schuetze)
class TTT_Bronze_5_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 5 (Schuetze)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 6 (Fahrer)
class TTT_Bronze_6_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 6 (Fahrer)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Soldier_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

/*
#############################################################
### Trupp Wei� (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR White

//Wei� 1 (Oberfeldarzt)
class TTT_White_1_BW_Tropentarn : TTT_Medic_Doctor_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 1 (Oberfeldarzt)";
    vehicleClass = "TTT_White_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_White_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Wei� 2 (Fahrzeugfuehrer)
class TTT_White_2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_White_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_White_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Wei� 3 (Feldarzt)
class TTT_White_3_BW_Tropentarn : TTT_Medic_Doctor_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 3 (Feldarzt)";
    vehicleClass = "TTT_White_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_White_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };		
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Wei� 4 (Fahrzeugfuehrer)
class TTT_White_4_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_White_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_White_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };    
	linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Platin (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Platin

//Platin 1 (Pilot)
class TTT_Platinum_1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
	icon  = "iconManLeader";
    displayName = "Platin 1 (Pilot)";
    vehicleClass = "TTT_Platinum_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};	

//Platin 2 (Pilot)
class TTT_Platinum_2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Platin 2 (Pilot)";
    vehicleClass = "TTT_Platinum_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};	

/*
#############################################################
### Trupp Silber (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Silver

//Silber 1 (Truppfuehrer)
class TTT_Silver_1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
	icon  = "iconManLeader";
    displayName = "Silber 1 (Truppfuehrer)";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silver_2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silver_3_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 3 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silver_4_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silver_5_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 5 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silver_6_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 6 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silver_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Bussard (Tropentarn) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Buzzard_1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 1 (Pilot)";
    vehicleClass = "TTT_Bussard_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Bussard 2 (Copilot)
class TTT_Buzzard_2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 2 (Copilot)";
    vehicleClass = "TTT_Bussard_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
};
//Habicht 1 (Pilot)
class TTT_Hawk_1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 1 (Pilot)";
    vehicleClass = "TTT_Habicht_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Hawk", default_linkedItems };
};

//Habicht 2 (Copilot)
class TTT_Hawk_2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 2 (Copilot)";
    vehicleClass = "TTT_Habicht_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silver_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_US_Desert", "TTT_Helmet_Hawk", default_linkedItems };
};

#undef GROUP_COLOR