/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Gelb1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
	icon = "iconManOfficer";
    displayName = "Gelb 1 (OPL)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_yellow_us_desert.paa" };
	backpack = "TTT_Backpack_Opl_Us_Desert";
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert)};
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert)};
	weapons[] = { "rhs_m4a1_m320_acog", "rhsusf_weap_m1911a1", "Rangefinder", default_weapons };
	respawnWeapons[] = {"rhs_m4a1_m320_acog", "rhsusf_weap_m1911a1", "Rangefinder", default_weapons };
};

//Gelb 2 (Funker)
class TTT_Gelb2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gelb 2 (Funker/FAC)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_yellow_us_desert.paa" };
	backpack = "TTT_Backpack_Funkerfac_Us_Desert";
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
};

//Gelb 3 (UAV)
class TTT_Gelb3_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gelb 3 (UAV)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_yellow_us_desert.paa" };
	backpack = "TTT_Backpack_Funkerfac_Us_Desert";
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert), "B_UavTerminal" };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert), "B_UavTerminal" };
};

//Gelb 4 (Moerser)
class TTT_Gelb4_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
    displayName = "Gelb 4 (Moerser)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_yellow_us_desert.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Grey
#define grey_items "rhsusf_acc_anpeq15_light", "rhsusf_acc_ACOG3", "rhsusf_acc_rotex5_grey"

//Grau 1 (Truppfuehrer)
class TTT_Grau1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_grey_us_desert.paa" };
    items[] = { grey_items, default_items, "ACE_microDAGR" };
    respawnItems[] = { grey_items, default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d10_m320", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d10_m320", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Grau 2 (Funker/FAC)
class TTT_Grau2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 2 (Funker/FAC)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_grey_us_desert.paa" };
    items[] = { grey_items, default_items, "ACE_microDAGR" };
    respawnItems[] = { grey_items, default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d10_m320", "rhsusf_weap_m1911a1", "Laserdesignator", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d10_m320", "rhsusf_weap_m1911a1", "Laserdesignator", default_weapons };
    magazines[] = { default_smoke, default_magazines, "Laserbatteries" };
    respawnMagazines[] = { default_smoke, default_magazines, "Laserbatteries" };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grau3_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_grey_us_desert.paa" };
    items[] = { grey_items, default_items };
    respawnItems[] = { grey_items, default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Grau 4 (Pionier)
class TTT_Grau4_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 4 (Pionier)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_grey_us_desert.paa" };
    items[] = { grey_items, default_items };
    respawnItems[] = { grey_items, default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Grau 5 (Schuetze)
class TTT_Grau5_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 5 (Schuetze)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_grey_us_desert.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] = { grey_items, default_items };
    respawnItems[] = { grey_items, default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Grau 6 (Schuetze)
class TTT_Grau6_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 6 (Schuetze)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_grey_us_desert.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] = { grey_items, default_items };
    respawnItems[] = { grey_items, default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert), "B_UavTerminal" };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert), "B_UavTerminal" };
    weapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d10_grip3", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};
#undef grey_items

/*
#############################################################
### Trupp Gold (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Gold
#define gold_items "rhsusf_acc_anpeq15_light", "rhsusf_acc_ACOG3", "rhsusf_acc_rotex5_grey"

//Gold 1 (Truppfuehrer)
class TTT_Gold1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 1 (Truppfuehrer)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_gold_us_desert.paa" };
    items[] = { default_items, gold_items, "ACE_microDAGR" };
    respawnItems[] = { default_items, gold_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d145_m320", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d145_m320", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, default_magazines, "Laserbatteries" };
    respawnMagazines[] = { default_smoke, default_magazines, "Laserbatteries" };
};

//Gold 2 (Funker/FAC)
class TTT_Gold2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 2 (Funker/FAC)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_gold_us_desert.paa" };
    items[] = { default_items, gold_items, "ACE_microDAGR" };
    respawnItems[] = { default_items, gold_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d145_m320", "rhsusf_weap_m1911a1", "Laserdesignator", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d145_m320", "rhsusf_weap_m1911a1", "Laserdesignator", default_weapons };
    magazines[] = { default_smoke, default_magazines, "Laserbatteries" };
    respawnMagazines[] = { default_smoke, default_magazines, "Laserbatteries" };
};

//Gold 3 (Spotter)
class TTT_Gold3_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 3 (Spotter)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_gold_us_desert.paa" };
    items[] = { default_items, gold_items, sniper_tools, "ACE_microDAGR" };
    respawnItems[] = { default_items, gold_items, sniper_tools, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d145", "rhsusf_weap_m1911a1", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d145", "rhsusf_weap_m1911a1", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, default_magazines};
    respawnMagazines[] = { default_smoke, default_magazines};
};

//Gold 4 (Sniper)
class TTT_Gold4_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 4 (Sniper)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_gold_us_desert.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] = { default_ace_items, sniper_tools, "ACE_microDAGR" };
    respawnItems[] = { default_ace_items, sniper_tools, "ACE_microDAGR" };
    weapons[] = { "srifle_LRR_LRPS_F", "rhsusf_weap_m1911a1", "ACE_Vector", default_weapons };
    respawnWeapons[] = { "srifle_LRR_LRPS_F", "rhsusf_weap_m1911a1", "ACE_Vector", default_weapons };
    magazines[] = { default_smoke, item_3(rhsusf_mag_7x45acp_MHP), item_6(7Rnd_408_Mag) };
    respawnMagazines[] = { default_smoke, item_3(rhsusf_mag_7x45acp_MHP), item_6(7Rnd_408_Mag) };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
};

//Gold 5 (Schuetze)
class TTT_Gold5_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 5 (Schuetze)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_gold_us_desert.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] = { default_items, gold_items };
    respawnItems[] = { default_items, gold_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d145", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d145", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Gold 6 (Schuetze)
class TTT_Gold6_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 6 (Schuetze)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_gold_us_desert.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] = { default_items, gold_items };
    respawnItems[] = { default_items, gold_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert)};
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
    weapons[] = { "rhs_weap_hk416d145", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_hk416d145", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};
#undef gold_items

/*
#############################################################
### Trupp Gruen (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Green

//Gruen 1 (Zugfuehrer)
class TTT_Gruen1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gruen 1 (Zugfuehrer)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_green_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
};

//Gruen 2 (Funker/FAC)
class TTT_Gruen2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gruen 2 (Funker/FAC)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_green_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Gruen3_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gruen 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_green_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items};
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Gruen4_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
    displayName = "Gruen 4 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_green_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
};

/*
#############################################################
### Trupp Braun (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Brown

//Braun 1 (Zugfuehrer)
class TTT_Braun1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Braun 1 (Zugfuehrer)";
    vehicleClass = "TTT_Braun_Us_Desert";
    uniformClass = "TTT_Uniform_Braun_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_brown_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
};

//Braun 2 (Funker/FAC)
class TTT_Braun2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Braun 2 (Funker/FAC)";
    vehicleClass = "TTT_Braun_Us_Desert";
    uniformClass = "TTT_Uniform_Braun_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_brown_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Braun3_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Braun 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Braun_Us_Desert";
    uniformClass = "TTT_Uniform_Braun_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_brown_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
};

/*
#############################################################
### Trupp Schwarz (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Black

//Schwarz 1 (Truppfuehrer)
class TTT_Schwarz1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 1 (Truppfuehrer)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
};

//Schwarz 2 (Grenadier)
class TTT_Schwarz2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 2 (Grenadier)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Schwarz3_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 3 (LMG-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Schwarz4_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 4 (AT-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Schwarz5_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 5 (LMG-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
};


//Schwarz 6 (AT-Schuetze)
class TTT_Schwarz6_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 6 (AT-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_black_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
};

/*
#############################################################
### Trupp Rot (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Red

//Rot 1 (Truppfuehrer)
class TTT_Rot1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 1 (Truppfuehrer)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_red_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
};

//Rot 2 (Grenadier)
class TTT_Rot2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 2 (Grenadier)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_red_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
};

//Rot 3 (LMG-Schuetze)
class TTT_Rot3_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 3 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_red_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
};

//Rot 4 (AT-Schuetze)
class TTT_Rot4_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 4 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_red_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
};

//Rot 5 (LMG-Schuetze)
class TTT_Rot5_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 5 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_red_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
};

//Rot 6 (AT-Schuetze)
class TTT_Rot6_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 6 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_red_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
};

/*
#############################################################
### Trupp Blau (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Blue

//Blau 1 (Truppfuehrer)
class TTT_Blau1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_blue_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
};

//Blau 2 (Grenadier)
class TTT_Blau2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 2 (Grenadier)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_blue_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
};

//Blau 3 (MG-Assistent)
class TTT_Blau3_Us_Desert : TTT_Mgassistent_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 3 (MG-Assistent)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_blue_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
};

//Blau 4 (MG-Schuetze)
class TTT_Blau4_Us_Desert : TTT_Mgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 4 (MG-Schuetze)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_blue_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
};

//Blau 5 (Pionier)
class TTT_Blau5_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 5 (Pionier)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_blue_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
};

//Blau 6 (Pionier)
class TTT_Blau6_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 6 (Pionier)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_blue_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
};

/*
#############################################################
### Trupp Violett (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Purple

//Violett 1 (Truppfuehrer)
class TTT_Violett1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 1 (Truppfuehrer)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_violet_us_desert.paa" };
    items[] = { default_items, "ACE_microDAGR" };
    respawnitems[] = { default_items, "ACE_microDAGR" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Desert), get_helmet(1, Us, Desert) };
};

//Violett 2 (Grenadier)
class TTT_Violett2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 2 (Grenadier)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_violet_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(2, Us, Desert) };
};

//Violett 3 (MG-Assistent)
class TTT_Violett3_Us_Desert : TTT_Mgassistent_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 3 (MG-Assistent)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_violet_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(3, Us, Desert) };
};

//Violett 4 (MG-Schuetze)
class TTT_Violett4_Us_Desert : TTT_Mgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 4 (MG-Schuetze)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_violet_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(4, Us, Desert) };
};

//Violett 5 (Pionier)
class TTT_Violett5_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 5 (Pionier)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_violet_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(5, Us, Desert) };
};

//Violett 6 (Pionier)
class TTT_Violett6_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 6 (Pionier)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_violet_us_desert.paa" };
    items[] = { default_items };
    respawnitems[] = { default_items };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Desert), get_helmet(6, Us, Desert) };
};

/*
#############################################################
### Trupp Bronze (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Bronze

//Bronze 1 (Truppfuehrer)
class TTT_Bronze1_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 1 (Truppfuehrer)";
    icon = "iconManLeader";
    vehicleClass = "TTT_Bronze_Us_Desert";
    backpack = "TTT_Backpack_Pilot_Us_Desert";
    uniformClass = "TTT_Uniform_Bronze_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_bronx_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnItems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Bronze 2 (Schuetze)
class TTT_Bronze2_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 2 (Schuetze)";
    vehicleClass = "TTT_Bronze_Us_Desert";
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    uniformClass = "TTT_Uniform_Bronze_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_bronx_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnItems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Bronze 3 (Fahrer)
class TTT_Bronze3_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 3 (Fahrer)";
    vehicleClass = "TTT_Bronze_Us_Desert";
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    uniformClass = "TTT_Uniform_Bronze_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_bronx_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnItems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Bronze 4 (Kommandant)
class TTT_Bronze4_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 4 (Kommandant)";
    icon = "iconMan";
    vehicleClass = "TTT_Bronze_Us_Desert";
    backpack = "TTT_Backpack_Pilot_Us_Desert";
    uniformClass = "TTT_Uniform_Bronze_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_bronx_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnItems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "ACE_Yardage450", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Bronze 5 (Schuetze)
class TTT_Bronze5_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 5 (Schuetze)";
    vehicleClass = "TTT_Bronze_Us_Desert";
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    uniformClass = "TTT_Uniform_Bronze_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_bronx_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnItems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

//Bronze 6 (Fahrer)
class TTT_Bronze6_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Bronze 6 (Fahrer)";
    vehicleClass = "TTT_Bronze_Us_Desert";
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    uniformClass = "TTT_Uniform_Bronze_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_bronx_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnItems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "BWA3_CrewmanKSK_Tropen_Headset" };
    weapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    respawnWeapons[] = { "rhs_weap_m4_carryhandle", "rhsusf_weap_m1911a1", "Binocular", default_weapons };
    magazines[] = { default_smoke, default_magazines };
    respawnMagazines[] = { default_smoke, default_magazines };
};

/*
#############################################################
### Trupp Weiﬂ (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR White

//Weiﬂ 1 (Oberfeldarzt)
class TTT_Weiss1_Us_Desert : TTT_Feldarzt_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 1 (Oberfeldarzt)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_white_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(1,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(1,Us,Desert) };
};

//Weiﬂ 2 (Fahrzeugfuehrer)
class TTT_Weiss2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_white_us_desert.paa" };
    items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
	linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(2,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(2,Us,Desert) };
};

//Weiss 3 (Feldarzt)
class TTT_Weiss3_Us_Desert : TTT_Feldarzt_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 3 (Feldarzt)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_white_us_desert.paa" };
    items[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(3,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(3,Us,Desert) };
};

//Weiﬂ 4 (Fahrzeugfuehrer)
class TTT_Weiss4_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_white_us_desert.paa" };
    items[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Falcon", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(4,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(4,Us,Desert) };
};

/*
#############################################################
### Trupp Platin (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Platin

//Platin 1 (Pilot)
class TTT_Platin1_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
	icon = "iconManLeader";
    displayName = "Platin 1 (Pilot)";
    vehicleClass = "TTT_Platin_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Eagle", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Eagle", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(1, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(1, Us, Desert) };
};

//Platin 2 (Pilot)
class TTT_Platin2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Platin 2 (Pilot)";
    vehicleClass = "TTT_Platin_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Eagle", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Eagle", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(2, Us, Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(2, Us, Desert) };
};

/*
#############################################################
### Trupp Silber (Desert)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Silver

//Silber 1 (Truppfuehrer)
class TTT_Silber1_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
	icon = "iconManLeader";
    displayName = "Silber 1 (Truppfuehrer)";
    vehicleClass = "TTT_Silber_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    engineer = 1;
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(1,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(1,Us,Desert) };
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silber2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    engineer = 1;
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(2,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(2,Us,Desert) };
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silber3_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 3 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    engineer = 1;
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(3,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(3,Us,Desert) };
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silber4_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    engineer = 1;
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(4,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(4,Us,Desert) };
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silber5_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 5 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    engineer = 1;
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(5,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(5,Us,Desert) };
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silber6_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Silber 6 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Silber_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    engineer = 1;
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    items[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    respawnitems[] = { "TTT_Helmet_Buzzard", default_ace_items, "ACE_microDAGR", get_beret(GROUP_COLOR) };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(6,Us,Desert) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", get_helmet(6,Us,Desert) };
};

/*
#############################################################
### Trupp Adler (Desert) OLD
#############################################################
*/

//Adler 1 (Pilot)
class TTT_Adler1_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Adler 1 (Pilot)";
    vehicleClass = "TTT_Adler_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle" };
};

//Adler 2 (Copilot)
class TTT_Adler2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Adler 2 (Copilot)";
    vehicleClass = "TTT_Adler_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle" };
};

/*
#############################################################
### Trupp Bussard (Desert) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Bussard1_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 1 (Pilot)";
    vehicleClass = "TTT_Bussard_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard" };
};

//Bussard 2 (Copilot)
class TTT_Bussard2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Bussard 2 (Copilot)";
    vehicleClass = "TTT_Bussard_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Buzzard" };
};

/*
#############################################################
### Trupp Habicht (Desert) OLD
#############################################################
*/

//Habicht 1 (Pilot)
class TTT_Habicht1_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 1 (Pilot)";
    vehicleClass = "TTT_Habicht_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk" };
};

//Habicht 2 (Copilot)
class TTT_Habicht2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
	scopeCurator = 0;
	scopeArsenal = 0;
    displayName = "Habicht 2 (Copilot)";
    vehicleClass = "TTT_Habicht_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
	editorSubcategory = "EdSubcat_Unit_Camo_Desert";	
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\desert\uniforms\TTT_uniform_silver_us_desert.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Hawk" };
};

#undef GROUP_COLOR