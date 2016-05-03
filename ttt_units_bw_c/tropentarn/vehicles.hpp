/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Gelb1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gelb 1 (OPL)";
	icon = "iconManOfficer";
    vehicleClass = "TTT_Gelb_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Opl_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
	weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Rangefinder", "Throw", "Put" };
	respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Rangefinder", "Throw", "Put" };
};

//Gelb 2 (Funker)
class TTT_Gelb2_Bw_Tropentarn : TTT_Funkerfac_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gelb 2 (Funker/FAC)";
    vehicleClass = "TTT_Gelb_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ACE_microDAGR", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ACE_microDAGR", "ItemWatch", "tf_anprc152" };
};

//Gelb 3 (UAV)
class TTT_Gelb3_Bw_Tropentarn : TTT_Funkerfac_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gelb 3 (UAV)";
    backpack = "TTT_Backpack_Funkerfac_Bw_Tropentarn";
    vehicleClass = "TTT_Gelb_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "tf_anprc152" };
};

//Gelb 4 (Moerser)
class TTT_Gelb4_Bw_Tropentarn : TTT_Funkerfac_Base_Bw {
    author = "Tactical Training Team";
    scope = 1;
    displayName = "Gelb 4 (Moerser)";
    vehicleClass = "TTT_Gelb_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_yellow_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Grey

//Grau 1 (Truppfuehrer)
class TTT_Grau1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Grau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
};

//Grau 2 (Funker/FAC)
class TTT_Grau2_Bw_Tropentarn : TTT_Funkerfac_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 2 (Funker/FAC)";
    vehicleClass = "TTT_Grau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_microDAGR" };
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_microDAGR" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD", "Laserbatteries" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD", "Laserbatteries" };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grau3_Bw_Tropentarn : TTT_Gefechtssanitaeter_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Grau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
};

//Grau 4 (Pionier)
class TTT_Grau4_Bw_Tropentarn : TTT_Pionier_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 4 (Pionier)";
    vehicleClass = "TTT_Grau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
};

//Grau 5 (Schuetze)
class TTT_Grau5_Bw_Tropentarn : TTT_Schuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 5 (Schuetze)";
    vehicleClass = "TTT_Grau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD" };
};

//Grau 6 (Schuetze)
class TTT_Grau6_Bw_Tropentarn : TTT_Schuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 6 (Schuetze)";
    vehicleClass = "TTT_Grau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Gold (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Gold

//Gold 1 (Truppfuehrer)
class TTT_Gold1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 1 (Truppfuehrer)";
    vehicleClass = "TTT_Gold_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Tropentarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G28", "ACE_NVG_Wide", "ACE_DK10_b", "ACE_Kestrel4500", "ACE_ATragMX", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_RangeCard", "Laserdesignator", "Laserbatteries" };
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G28", "ACE_NVG_Wide", "ACE_DK10_b", "ACE_Kestrel4500", "ACE_ATragMX", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_RangeCard", "Laserdesignator", "Laserbatteries" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G27_AG_equipped", "BWA3_P8", "ACE_Vector", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G27_AG_equipped", "BWA3_P8", "ACE_Vector", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_SD", "BWA3_20Rnd_762x51_G28_SD", "Laserbatteries" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_AP", "BWA3_20Rnd_762x51_G28_SD", "BWA3_20Rnd_762x51_G28_SD", "Laserbatteries" };
};

//Gold 2 (JTAC)
class TTT_Gold2_Bw_Tropentarn : TTT_Funkerfac_Base_Bw {
    scope = 2;
	author = "Tactical Training Team";
    displayName = "Gold 2 (JTAC)";
    vehicleClass = "TTT_Gold_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Gold 3 (Spotter) 
class TTT_Gold3_Bw_Tropentarn : TTT_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Gold 3 (Spotter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36_AG_equipped", "BWA3_P8", "Laserdesignator", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD", "Laserbatteries" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_SD", "Laserbatteries" };
};

//Gold 4 (Sniper)
class TTT_Gold4_Bw_Tropentarn : TTT_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Gold 2 (Sniper)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_gold_bw_tropentarn.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_Kestrel4500", "ACE_ATragMX", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_RangeCard" };
    respawnItems[] = { "ACE_NVG_Wide", "ACE_Kestrel4500", "ACE_ATragMX", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991", "ACE_RangeCard" };
    weapons[] = { "BWA3_G82_equipped", "BWA3_P8", "ACE_Vector", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G82_equipped", "BWA3_P8", "ACE_Vector", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP", "BWA3_10Rnd_127x99_G82_AP" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Gold 5 (Schuetze)
class TTT_Gold5_Bw_Tropentarn : TTT_Schuetze_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Gold 5 (Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gold_Bw_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Gold 6 (Schuetze)
class TTT_Gold6_Bw_Tropentarn : TTT_Schuetze_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Gold 6 (Schuetze)";
    vehicleClass = "TTT_Gold_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_grey_bw_tropentarn.paa" };
    items[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    respawnItems[] = { "BWA3_optic_NSV600", "BWA3_muzzle_snds_G36", "ACE_NVG_Wide", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991"};
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Gruen (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Green

//Gruen 1 (Zugfuehrer)
class TTT_Gruen1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Gruen 1 (Zugfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_green_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Gruen 2 (Funker/FAC)
class TTT_Gruen2_Bw_Tropentarn : TTT_Funkerfac_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Gruen 2 (Funker/FAC)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_green_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Gruen3_Bw_Tropentarn : TTT_Gefechtssanitaeter_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Gruen 3 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_green_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Gruen4_Bw_Tropentarn : TTT_Gefechtssanitaeter_Base_Bw {
    scope = 1;
    author = "Tactical Training Team";
    displayName = "Gruen 4 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Gruen_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_green_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Braun (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Brown

//Braun 1 (Zugfuehrer)
class TTT_Braun1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Braun 1 (Zugfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Braun_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Braun_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_brown_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Braun 2 (Funker/FAC)
class TTT_Braun2_Bw_Tropentarn : TTT_Funkerfac_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Braun 2 (Funker/FAC)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Braun_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Braun_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_brown_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Braun3_Bw_Tropentarn : TTT_Gefechtssanitaeter_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Braun 3 (Gefechtssanitaeter)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Braun_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Braun_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_brown_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Schwarz (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Black

//Schwarz 1 (Truppfuehrer)
class TTT_Schwarz1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Schwarz 1 (Truppfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Schwarz 2 (Grenadier)
class TTT_Schwarz2_Bw_Tropentarn : TTT_Grenadier_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Schwarz 2 (Grenadier)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Schwarz3_Bw_Tropentarn : TTT_Lmgschuetze_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Schwarz 3 (LMG-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Schwarz4_Bw_Tropentarn : TTT_Atschuetze_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Schwarz 4 (AT-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Schwarz5_Bw_Tropentarn : TTT_Lmgschuetze_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Schwarz 5 (LMG-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Schwarz 6 (AT-Schuetze)
class TTT_Schwarz6_Bw_Tropentarn : TTT_Atschuetze_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Schwarz 6 (AT-Schuetze)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Schwarz_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_black_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Rot (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Red

//Rot 1 (Truppfuehrer)
class TTT_Rot1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Rot 1 (Truppfuehrer)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Rot_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_red_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Rot 2 (Grenadier)
class TTT_Rot2_Bw_Tropentarn : TTT_Grenadier_Base_Bw {
    scope = 2;
    author = "Tactical Training Team";
    displayName = "Rot 2 (Grenadier)";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    vehicleClass = "TTT_Rot_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_red_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Rot 3 (LMG-Schuetze)
class TTT_Rot3_Bw_Tropentarn : TTT_Lmgschuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 3 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_red_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Rot 4 (AT-Schuetze)
class TTT_Rot4_Bw_Tropentarn : TTT_Atschuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 4 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_red_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Rot 5 (LMG-Schuetze)
class TTT_Rot5_Bw_Tropentarn : TTT_Lmgschuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 5 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_red_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Rot 6 (AT-Schuetze)
class TTT_Rot6_Bw_Tropentarn : TTT_Atschuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 6 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_red_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Blau (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Blue

//Blau 1 (Truppfuehrer)
class TTT_Blau1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Blau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_blue_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Blau 2 (Grenadier)
class TTT_Blau2_Bw_Tropentarn : TTT_Grenadier_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 2 (Grenadier)";
    vehicleClass = "TTT_Blau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_blue_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Blau 3 (MG-Assistent)
class TTT_Blau3_Bw_Tropentarn : TTT_Mgassistent_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 3 (MG-Assistent)";
    vehicleClass = "TTT_Blau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_blue_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Blau 4 (MG-Schuetze)
class TTT_Blau4_Bw_Tropentarn : TTT_Mgschuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 4 (MG-Schuetze)";
    vehicleClass = "TTT_Blau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_blue_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Blau 5 (Pionier)
class TTT_Blau5_Bw_Tropentarn : TTT_Pionier_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 5 (Pionier)";
    vehicleClass = "TTT_Blau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_blue_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Blau 6 (Pionier)
class TTT_Blau6_Bw_Tropentarn : TTT_Pionier_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 6 (Pionier)";
    vehicleClass = "TTT_Blau_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_blue_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Violett (Tropentarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Purple

//Violett 1 (Truppfuehrer)
class TTT_Violett1_Bw_Tropentarn : TTT_Truppfuehrer_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 1 (Truppfuehrer)";
    vehicleClass = "TTT_Violett_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_violet_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,Purple,Heavy,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Violett 2 (Grenadier)
class TTT_Violett2_Bw_Tropentarn : TTT_Grenadier_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 2 (Grenadier)";
    vehicleClass = "TTT_Violett_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_violet_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Violett 3 (MG-Assistent)
class TTT_Violett3_Bw_Tropentarn : TTT_Mgassistent_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 3 (MG-Assistent)";
    vehicleClass = "TTT_Violett_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_violet_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Violett 4 (MG-Schuetze)
class TTT_Violett4_Bw_Tropentarn : TTT_Mgschuetze_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 4 (MG-Schuetze)";
    vehicleClass = "TTT_Violett_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_violet_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Violett 5 (Pionier)
class TTT_Violett5_Bw_Tropentarn : TTT_Pionier_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 5 (Pionier)";
    vehicleClass = "TTT_Violett_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_violet_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Violett 6 (Pionier)
class TTT_Violett6_Bw_Tropentarn : TTT_Pionier_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 6 (Pionier)";
    vehicleClass = "TTT_Violett_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_violet_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", get_vest(Us,GROUP_COLOR,Lite,Woodland), "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Bronze (Tropentarn)
#############################################################
*/

//Bronze 1 (Truppfuehrer)
class TTT_Bronze1_Bw_Tropentarn : TTT_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 1 (Truppfuehrer)";
    icon = "iconManLeader";
    vehicleClass = "TTT_Bronze_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "ACE_NVG_Wide", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet1_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet1_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "ACE_Yardage450", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
};

//Bronze 2 (Schuetze)
class TTT_Bronze2_Bw_Tropentarn : TTT_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 2 (Schuetze)";
    vehicleClass = "TTT_Bronze_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet2_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet2_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
};

//Bronze 3 (Fahrer)
class TTT_Bronze3_Bw_Tropentarn : TTT_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 3 (Fahrer)";
    vehicleClass = "TTT_Bronze_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet3_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet3_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
};

//Bronze 4 (Kommandant)
class TTT_Bronze4_Bw_Tropentarn : TTT_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 4 (Kommandant)";
    vehicleClass = "TTT_Bronze_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "ACE_NVG_Wide", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet4_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet4_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
};

//Bronze 5 (Schuetze)
class TTT_Bronze5_Bw_Tropentarn : TTT_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 5 (Schuetze)";
    vehicleClass = "TTT_Bronze_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet5_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet5_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
};

//Bronze 6 (Fahrer)
class TTT_Bronze6_Bw_Tropentarn : TTT_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 6 (Fahrer)";
    vehicleClass = "TTT_Bronze_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Tropentarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_bronx_bw_tropentarn.paa" };
    items[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnItems[] = { "ACE_NVG_Wide", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet6_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet6_Vehiclecrew", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    weapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    respawnWeapons[] = { "BWA3_G36K_equipped", "BWA3_P8", "Binocular", "Throw", "Put" };
    magazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
    respawnMagazines[] = { "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellPurple", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "ACE_M84", "ACE_M84", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP", "BWA3_30Rnd_556x45_G36_AP" };
};

/*
#############################################################
### Trupp Weiﬂ (Tropentarn)
#############################################################
*/

//Weiﬂ 1 (Oberfeldarzt)
class TTT_Weiss1_Bw_Tropentarn : TTT_Feldarzt_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 1 (Oberfeldarzt)";
    vehicleClass = "TTT_Weiss_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_white_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Weiﬂ 2 (Fahrzeugfuehrer)
class TTT_Weiss2_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_white_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
	items[] = { "ACE_NVG_Wide", "TTT_Helmet_Falcon", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Falcon", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Weiﬂ 3 (Feldarzt)
class TTT_Weiss3_Bw_Tropentarn : TTT_Feldarzt_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 3 (Feldarzt)";
    vehicleClass = "TTT_Weiss_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_white_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Weiﬂ 4 (Fahrzeugfuehrer)
class TTT_Weiss4_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_white_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
	items[] = { "ACE_NVG_Wide", "TTT_Helmet_Falcon", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Falcon", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };    
	linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Platin (Tropentarn)
#############################################################
*/

//Platin 1 (Pilot)
class TTT_Platin1_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
	icon  = "iconManLeader";
    displayName = "Platin 1 (Pilot)";
    vehicleClass = "TTT_Platin_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };	
};	

//Platin 2 (Pilot)
class TTT_Platin2_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Platin 2 (Pilot)";
    vehicleClass = "TTT_Platin_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };		
};	

/*
#############################################################
### Trupp Silber (Tropentarn)
#############################################################
*/

//Silber 1 (Truppfuehrer)
class TTT_Silber1_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
	icon  = "iconManLeader";
    displayName = "Silber 1 (Truppfuehrer)";
    vehicleClass = "TTT_Silber_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
	backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
    items[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_1_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };	
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silber2_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
	items[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_2_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };	
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silber3_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 3 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
	backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
    items[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_3_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };	
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silber4_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
	items[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_4_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };	
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silber5_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 5 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
	items[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_5_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };	
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silber6_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 6 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    backpack = "TTT_Backpack_Pilot_Bw_Tropentarn";
	items[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    respawnitems[] = { "ACE_NVG_Wide", "TTT_Helmet_Buzzard", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_IR_Strobe_Item", "ACE_MapTools", "ACE_Flashlight_MX991" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_6_Bw_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };	
};

/*
#############################################################
### Trupp Adler (Tropentarn) OLD
#############################################################
*/

//Adler 1 (Pilot)
class TTT_Adler1_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Adler 1 (Pilot)";
    vehicleClass = "TTT_Adler_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Adler 2 (Copilot)
class TTT_Adler2_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Adler 2 (Copilot)";
    vehicleClass = "TTT_Adler_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

/*
#############################################################
### Trupp Bussard (Tropentarn) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Bussard1_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 1 (Pilot)";
    vehicleClass = "TTT_Bussard_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Bussard 2 (Copilot)
class TTT_Bussard2_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 2 (Copilot)";
    vehicleClass = "TTT_Bussard_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};
//Habicht 1 (Pilot)
class TTT_Habicht1_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 1 (Pilot)";
    vehicleClass = "TTT_Habicht_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

//Habicht 2 (Copilot)
class TTT_Habicht2_Bw_Tropentarn : TTT_Pilot_Base_Bw {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 2 (Copilot)";
    vehicleClass = "TTT_Habicht_Bw_Tropentarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Tropentarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Tropentarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\tropentarn\uniforms\TTT_uniform_silver_bw_tropentarn.paa" };
    linkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
    respawnLinkedItems[] = { "BWA3_G_Combat_Clear", "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152" };
};

#undef GROUP_COLOR