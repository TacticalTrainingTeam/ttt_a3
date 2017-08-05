/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Gelb1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gelb 1 (OPL)";
	icon = "iconManOfficer";
    vehicleClass = "TTT_Gelb_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Opl_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Tropentarn";
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
	weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Rangefinder", default_weapons };
	respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Rangefinder", default_weapons };
};

//Gelb 2 (Funker)
class TTT_Gelb2_BW_Tropentarn : TTT_Funkerfac_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gelb 2 (Funker/FAC)";
    vehicleClass = "TTT_Gelb_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Funkerfac_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Gelb 3 (UAV)
class TTT_Gelb3_BW_Tropentarn : TTT_Funkerfac_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gelb 3 (UAV)";
    backpack = "TTT_Backpack_Funkerfac_BW_Tropentarn";
    vehicleClass = "TTT_Gelb_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", "B_UavTerminal", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", "B_UavTerminal", default_linkedItems };
};

//Gelb 4 (Moerser)
class TTT_Gelb4_BW_Tropentarn : TTT_Funkerfac_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
    displayName = "Gelb 4 (Moerser)";
    vehicleClass = "TTT_Gelb_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Grey

//Grau 1 (Truppfuehrer)
class TTT_Grau1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Grau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Grau 2 (Funker/FAC)
class TTT_Grau2_BW_Tropentarn : TTT_Funkerfac_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 2 (Funker/FAC)";
    vehicleClass = "TTT_Grau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", default_weapons };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP), "Laserbatteries" };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grau3_BW_Tropentarn : TTT_Gefechtssanitaeter_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Grau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Grau 4 (Pionier)
class TTT_Grau4_BW_Tropentarn : TTT_Pionier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 4 (Pionier)";
    vehicleClass = "TTT_Grau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_30Rnd_556x45_G36_AP) };
};

//Grau 5 (Schuetze)
class TTT_Grau5_BW_Tropentarn : TTT_Schuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 5 (Schuetze)";
    vehicleClass = "TTT_Grau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Grau 6 (Schuetze)
class TTT_Grau6_BW_Tropentarn : TTT_Schuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Grau 6 (Schuetze)";
    vehicleClass = "TTT_Grau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    respawnItems[] = { default_item_bw, "BWA3_muzzle_snds_G36", default_ace_items};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
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
class TTT_Gold1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Gold 1 (Truppfuehrer)";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Truppfuehrer_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
};

//Gold 2 (Funker)
class TTT_Gold2_BW_Tropentarn : TTT_Funkerfac_Base_BW {
    scope = 2;
	author = "$STR_Tactical_Training_Team";
    displayName = "Gold 2 (Funker/FAC)";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {gold_items, default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "Laserdesignator", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan_AG", "BWA3_P8", "Laserdesignator", default_weapons };	
	magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };	
};

//Gold 3 (Spotter)
class TTT_Gold3_BW_Tropentarn : TTT_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 3 (Spotter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, sniper_tools, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {gold_items, default_item_bw, sniper_tools, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan", "BWA3_P8", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan", "BWA3_P8", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP) };
};

//Gold 4 (Sniper)
class TTT_Gold4_BW_Tropentarn : TTT_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 2 (Sniper)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = {"BWA3_optic_NSV80", sniper_tools, default_ace_items, "ACE_microDAGR" };
    respawnItems[] = {"BWA3_optic_NSV80", sniper_tools, default_ace_items, "ACE_microDAGR" };
    weapons[] = { "BWA3_G82_equipped", "BWA3_MP7_equipped", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "BWA3_G82_equipped", "BWA3_MP7_equipped", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, item_3(BWA3_40Rnd_46x30_MP7), item_2(BWA3_10Rnd_127x99_G82), item_2(BWA3_10Rnd_127x99_G82_AP), "BWA3_10Rnd_127x99_G82_Raufoss" };
    respawnMagazines[] = { default_smoke, item_3(BWA3_40Rnd_46x30_MP7), item_2(BWA3_10Rnd_127x99_G82), item_2(BWA3_10Rnd_127x99_G82_AP), "BWA3_10Rnd_127x99_G82_Raufoss" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Gold 5 (Schuetze)
class TTT_Gold5_BW_Tropentarn : TTT_Schuetze_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 5 (Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items};
    respawnItems[] = {gold_items, default_item_bw, default_ace_items};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    weapons[] = { "BWA3_G27_Tan", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G27_Tan", "BWA3_P8", "Binocular", default_weapons };		
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_6(BWA3_20Rnd_762x51_G28_AP)};
};

//Gold 6 (Schuetze)
class TTT_Gold6_BW_Tropentarn : TTT_Schuetze_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gold 6 (Schuetze)";
    vehicleClass = "TTT_Gold_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = {gold_items, default_item_bw, default_ace_items};
    respawnItems[] = {gold_items, default_item_bw, default_ace_items};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
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
class TTT_Gruen1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 1 (Zugfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Tropentarn";
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Gruen 2 (Funker/FAC)
class TTT_Gruen2_BW_Tropentarn : TTT_Funkerfac_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 2 (Funker/FAC)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Gruen3_BW_Tropentarn : TTT_Gefechtssanitaeter_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 3 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Gruen4_BW_Tropentarn : TTT_Gefechtssanitaeter_Base_BW {
    scope = 1;
    author = "$STR_Tactical_Training_Team";
    displayName = "Gruen 4 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_green_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Braun (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Brown

//Braun 1 (Zugfuehrer)
class TTT_Braun1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Braun 1 (Zugfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Braun_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Braun_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Braun 2 (Funker/FAC)
class TTT_Braun2_BW_Tropentarn : TTT_Funkerfac_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Braun 2 (Funker/FAC)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Braun_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Braun_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Braun3_BW_Tropentarn : TTT_Gefechtssanitaeter_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Braun 3 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Braun_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Braun_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_brown_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Schwarz (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Black

//Schwarz 1 (Truppfuehrer)
class TTT_Schwarz1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 1 (Truppfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Schwarz 2 (Grenadier)
class TTT_Schwarz2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 2 (Grenadier)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Schwarz3_BW_Tropentarn : TTT_Lmgschuetze_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 3 (LMG-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Schwarz4_BW_Tropentarn : TTT_Atschuetze_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 4 (AT-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Schwarz5_BW_Tropentarn : TTT_Lmgschuetze_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 5 (LMG-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Schwarz 6 (AT-Schuetze)
class TTT_Schwarz6_BW_Tropentarn : TTT_Atschuetze_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Schwarz 6 (AT-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_black_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Rot (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Red

//Rot 1 (Truppfuehrer)
class TTT_Rot1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Rot 1 (Truppfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Rot_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Rot 2 (Grenadier)
class TTT_Rot2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    scope = 2;
    author = "$STR_Tactical_Training_Team";
    displayName = "Rot 2 (Grenadier)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Rot_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Rot 3 (LMG-Schuetze)
class TTT_Rot3_BW_Tropentarn : TTT_Lmgschuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 3 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Rot 4 (AT-Schuetze)
class TTT_Rot4_BW_Tropentarn : TTT_Atschuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 4 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Rot 5 (LMG-Schuetze)
class TTT_Rot5_BW_Tropentarn : TTT_Lmgschuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 5 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Rot 6 (AT-Schuetze)
class TTT_Rot6_BW_Tropentarn : TTT_Atschuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Rot 6 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_red_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };
    respawnitems[] = { default_item_bw, default_ace_items, "BWA3_optic_NSA80" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Blau (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Blue

//Blau 1 (Truppfuehrer)
class TTT_Blau1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Blau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
	items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Blau 2 (Grenadier)
class TTT_Blau2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 2 (Grenadier)";
    vehicleClass = "TTT_Blau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Blau 3 (MG-Assistent)
class TTT_Blau3_BW_Tropentarn : TTT_Mgassistent_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 3 (MG-Assistent)";
    vehicleClass = "TTT_Blau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Blau 4 (MG-Schuetze)
class TTT_Blau4_BW_Tropentarn : TTT_Mgschuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 4 (MG-Schuetze)";
    vehicleClass = "TTT_Blau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Blau 5 (Pionier)
class TTT_Blau5_BW_Tropentarn : TTT_Pionier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 5 (Pionier)";
    vehicleClass = "TTT_Blau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Blau 6 (Pionier)
class TTT_Blau6_BW_Tropentarn : TTT_Pionier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Blau 6 (Pionier)";
    vehicleClass = "TTT_Blau_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_blue_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Violett (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Purple

//Violett 1 (Truppfuehrer)
class TTT_Violett1_BW_Tropentarn : TTT_Truppfuehrer_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 1 (Truppfuehrer)";
    vehicleClass = "TTT_Violett_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_item_bw, default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Violett 2 (Grenadier)
class TTT_Violett2_BW_Tropentarn : TTT_Grenadier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 2 (Grenadier)";
    vehicleClass = "TTT_Violett_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Violett 3 (MG-Assistent)
class TTT_Violett3_BW_Tropentarn : TTT_Mgassistent_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 3 (MG-Assistent)";
    vehicleClass = "TTT_Violett_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Violett 4 (MG-Schuetze)
class TTT_Violett4_BW_Tropentarn : TTT_Mgschuetze_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 4 (MG-Schuetze)";
    vehicleClass = "TTT_Violett_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

//Violett 5 (Pionier)
class TTT_Violett5_BW_Tropentarn : TTT_Pionier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 5 (Pionier)";
    vehicleClass = "TTT_Violett_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
};

//Violett 6 (Pionier)
class TTT_Violett6_BW_Tropentarn : TTT_Pionier_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Violett 6 (Pionier)";
    vehicleClass = "TTT_Violett_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_violet_bw_tropentarn.paa" };
    items[] = { default_item_bw, default_ace_items };
    respawnitems[] = { default_item_bw, default_ace_items };	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Bronze (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Bronze

//Bronze 1 (Truppfuehrer)
class TTT_Bronze1_BW_Tropentarn : TTT_Base_BW {
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
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 2 (Schuetze)
class TTT_Bronze2_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 2 (Schuetze)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 3 (Fahrer)
class TTT_Bronze3_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 3 (Fahrer)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 4 (Kommandant)
class TTT_Bronze4_BW_Tropentarn : TTT_Base_BW {
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
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 5 (Schuetze)
class TTT_Bronze5_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 5 (Schuetze)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

//Bronze 6 (Fahrer)
class TTT_Bronze6_BW_Tropentarn : TTT_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Bronze 6 (Fahrer)";
    vehicleClass = "TTT_Bronze_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_BW_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", default_weapons };
    magazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
    respawnMagazines[] = { default_smoke, item_2(BWA3_15Rnd_9x19_P8), item_4(BWA3_30Rnd_556x45_G36_AP) };
};

/*
#############################################################
### Trupp Weiﬂ (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR White

//Weiﬂ 1 (Oberfeldarzt)
class TTT_Weiss1_BW_Tropentarn : TTT_Feldarzt_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 1 (Oberfeldarzt)";
    vehicleClass = "TTT_Weiss_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
};

//Weiﬂ 2 (Fahrzeugfuehrer)
class TTT_Weiss2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
};

//Weiﬂ 3 (Feldarzt)
class TTT_Weiss3_BW_Tropentarn : TTT_Feldarzt_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 3 (Feldarzt)";
    vehicleClass = "TTT_Weiss_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    items[] = { default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { default_ace_items, "ACE_microDAGR" };		
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
};

//Weiﬂ 4 (Fahrzeugfuehrer)
class TTT_Weiss4_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Weiss 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_white_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };    
	linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
};

/*
#############################################################
### Trupp Platin (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Platin

//Platin 1 (Pilot)
class TTT_Platin1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
	icon  = "iconManLeader";
    displayName = "Platin 1 (Pilot)";
    vehicleClass = "TTT_Platin_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };	
};	

//Platin 2 (Pilot)
class TTT_Platin2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Platin 2 (Pilot)";
    vehicleClass = "TTT_Platin_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR" };	
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };		
};	

/*
#############################################################
### Trupp Silber (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Silver

//Silber 1 (Truppfuehrer)
class TTT_Silber1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
	icon  = "iconManLeader";
    displayName = "Silber 1 (Truppfuehrer)";
    vehicleClass = "TTT_Silber_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_BW_Tropentarn", default_linkedItems };	
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silber2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_BW_Tropentarn", default_linkedItems };	
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silber3_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 3 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
	backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_BW_Tropentarn", default_linkedItems };	
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silber4_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_BW_Tropentarn", default_linkedItems };	
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silber5_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 5 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_5_BW_Tropentarn", default_linkedItems };	
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silber6_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 2;
    displayName = "Silber 6 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    engineer = 1;
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_BW_Tropentarn";
	items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_6_BW_Tropentarn", default_linkedItems };	
};

/*
#############################################################
### Trupp Adler (Tropentarn) OLD
#############################################################
*/

//Adler 1 (Pilot)
class TTT_Adler1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Adler 1 (Pilot)";
    vehicleClass = "TTT_Adler_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};

//Adler 2 (Copilot)
class TTT_Adler2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Adler 2 (Copilot)";
    vehicleClass = "TTT_Adler_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};

/*
#############################################################
### Trupp Bussard (Tropentarn) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Bussard1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 1 (Pilot)";
    vehicleClass = "TTT_Bussard_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Bussard 2 (Copilot)
class TTT_Bussard2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 2 (Copilot)";
    vehicleClass = "TTT_Bussard_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", default_linkedItems };
};
//Habicht 1 (Pilot)
class TTT_Habicht1_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 1 (Pilot)";
    vehicleClass = "TTT_Habicht_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", default_linkedItems };
};

//Habicht 2 (Copilot)
class TTT_Habicht2_BW_Tropentarn : TTT_Pilot_Base_BW {
    author = "$STR_Tactical_Training_Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 2 (Copilot)";
    vehicleClass = "TTT_Habicht_BW_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_BW_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\data\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", default_linkedItems };
};

#undef GROUP_COLOR