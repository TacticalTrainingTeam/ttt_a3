/*
#############################################################
### Trupp Gelb
#############################################################
*/

//Gelb 1 (OPL)
class TTT_Gelb1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    icon = "iconManOfficer";
    displayName = "Gelb 1 (OPL)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_yellow_us_desert.paa" };
    backpack = "TTT_Backpack_Opl_Us_Desert";
    items[] += { ITEMS_GELB };
    respawnitems[] += { ITEMS_GELB };
    linkedItems[] += { 
        "TTT_Vest_Heavy_Yellow_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Heavy_Yellow_Us_Desert", 
        "TTT_Helmet_1_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY_GL, "Rangefinder") };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY_GL, "Rangefinder") };
};

//Gelb 2 (Funker)
class TTT_Gelb2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gelb 2 (Funker/FAC)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_yellow_us_desert.paa" };
    items[] += { ITEMS_GELB };
    respawnitems[] += { ITEMS_GELB };
    linkedItems[] += { 
        "TTT_Vest_Lite_Yellow_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Yellow_Us_Desert", 
        "TTT_Helmet_2_Us_Desert"
    };
};

//Gelb 3 (UAV)
class TTT_Gelb3_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gelb 3 (UAV)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_yellow_us_desert.paa" };
    items[] += { ITEMS_GELB };
    respawnitems[] += { ITEMS_GELB };
    linkedItems[] += { 
        "TTT_Vest_Lite_Yellow_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Yellow_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
};

//Gelb 4 (Moerser)
class TTT_Gelb4_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
    displayName = "Gelb 4 (Moerser)";
    vehicleClass = "TTT_Gelb_Us_Desert";
    uniformClass = "TTT_Uniform_Gelb_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_yellow_us_desert.paa" };
    items[] += { ITEMS_GELB };
    respawnitems[] += { ITEMS_GELB };
    linkedItems[] += { 
        "TTT_Vest_Lite_Yellow_Us_Desert", 
        "TTT_Helmet_4_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Yellow_Us_Desert", 
        "TTT_Helmet_4_Us_Desert"
    };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/

//Grau 1 (Truppfuehrer)
class TTT_Grau1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_grey_us_desert.paa" };
    items[] += { ITEMS_GRAU };
    respawnItems[] += { ITEMS_GRAU };
    linkedItems[] += {
        "TTT_Vest_Heavy_Grey_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Heavy_Grey_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL_GL, WEAPON_RANGEFINDER) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL_GL, WEAPON_RANGEFINDER) };
};

//Grau 2 (Funker/FAC)
class TTT_Grau2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 2 (Funker/FAC)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_grey_us_desert.paa" };
    items[] += { ITEMS_GRAU };
    respawnItems[] += { ITEMS_GRAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL_GL, WEAPON_LASER_DESIGNATOR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL_GL, WEAPON_LASER_DESIGNATOR) };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grau3_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_grey_us_desert.paa" };
    items[] += { ITEMS_GRAU };
    respawnItems[] += { ITEMS_GRAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
};

//Grau 4 (Pionier)
class TTT_Grau4_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 4 (Pionier)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_grey_us_desert.paa" };
    items[] += { ITEMS_GRAU };
    respawnItems[] += { ITEMS_GRAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
};

//Grau 5 (Schuetze)
class TTT_Grau5_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 5 (Schuetze)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_grey_us_desert.paa" };
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] += { ITEMS_GRAU };
    respawnItems[] += { ITEMS_GRAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
};

//Grau 6 (Schuetze)
class TTT_Grau6_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Grau 6 (Schuetze)";
    vehicleClass = "TTT_Grau_Us_Desert";
    uniformClass = "TTT_Uniform_Grau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_grey_us_desert.paa" };
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] += { ITEMS_GRAU };
    respawnItems[] += { ITEMS_GRAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Grey_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SPECIAL, WEAPON_BINOCULAR) };
};

/*
#############################################################
### Trupp Gold (Desert)
#############################################################
*/

//Gold 1 (Truppfuehrer)
class TTT_Gold1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 1 (Truppfuehrer)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_gold_us_desert.paa" };
    items[] += {
        ITEMS_GOLD,
        ITEMS_SNIPER,
        WEAPON_US_PRIMARY_SILENCER
    };
    respawnItems[] += {
        ITEMS_GOLD,
        ITEMS_SNIPER,
        WEAPON_US_PRIMARY_SILENCER
    };
    linkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_1_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_1_Us_Desert"
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY_GL, WEAPON_LASER_DESIGNATOR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY_GL, WEAPON_LASER_DESIGNATOR) };
    magazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
    respawnMagazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
};

//Gold 2 (JTAC)
class TTT_Gold2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 2 (JTAC)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_gold_us_desert.paa" };
    items[] += {
        ITEMS_GOLD,
        WEAPON_US_PRIMARY_SILENCER,
        "rhsusf_acc_harris_bipod"
    };
    respawnItems[] += {
        ITEMS_GOLD,
        WEAPON_US_PRIMARY_SILENCER,
        "rhsusf_acc_harris_bipod"
    };
    linkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert",
        "TTT_Helmet_2_Us_Desert" 
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY_GL, WEAPON_LASER_DESIGNATOR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY_GL, WEAPON_LASER_DESIGNATOR) };
    magazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
    respawnMagazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
};

//Gold 3 (Spotter)
class TTT_Gold3_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 3 (Spotter)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_gold_us_desert.paa" };
    items[] += {
        ITEMS_GOLD,
        WEAPON_US_PRIMARY_SILENCER,
        "rhsusf_acc_harris_bipod"
    };
    respawnItems[] += {
        ITEMS_GOLD,
        WEAPON_US_PRIMARY_SILENCER,
        "rhsusf_acc_harris_bipod"
    };
    linkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY, WEAPON_LASER_DESIGNATOR) };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_PRIMARY, WEAPON_LASER_DESIGNATOR) };
    magazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
    respawnMagazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
};

//Gold 4 (Sniper)
class TTT_Gold4_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 4 (Sniper)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_gold_us_desert.paa" };
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] += {
        ITEMS_GOLD,
        ITEMS_SNIPER 
    };
    respawnItems[] += {
        ITEMS_GOLD,
        ITEMS_SNIPER 
    };
    linkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Gold_Us_Desert",
        "TTT_Helmet_4_Us_Desert" 
    };
    weapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SNIPER, "ACE_Vector") };
    respawnWeapons[] = { WEAPONS_US_GIVEN_WEAPON(WEAPON_US_SNIPER, "ACE_Vector") };
    magazines[] = { 
        MAGAZINES_SMOKE, 
        item_6(WEAPON_US_SNIPER_MAGAZINES), 
        item_2(WEAPON_US_SECONDARY_MAGAZINES) 
    };
    respawnMagazines[] = { 
        MAGAZINES_SMOKE, 
        item_6(WEAPON_US_SNIPER_MAGAZINES), 
        item_2(WEAPON_US_SECONDARY_MAGAZINES) 
    };
};

//Gold 5 (Schuetze)
class TTT_Gold5_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 5 (Schuetze)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_gold_us_desert.paa" };
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] += {
        ITEMS_GOLD,
        WEAPON_US_SPECIAL_ACCESSORY
    };
    respawnItems[] += {
        ITEMS_GOLD,
        WEAPON_US_SPECIAL_ACCESSORY
    };
    linkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_5_Us_Desert",
        "B_UavTerminal"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_5_Us_Desert",
        "B_UavTerminal"
    };
    weapons[] = { WEAPONS_US(WEAPON_BINOCULAR) };
    respawnWeapons[] = { WEAPONS_US(WEAPON_BINOCULAR) };
};

//Gold 6 (Schuetze)
class TTT_Gold6_Us_Desert : TTT_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gold 6 (Schuetze)";
    vehicleClass = "TTT_Gold_Us_Desert";
    uniformClass = "TTT_Uniform_Gold_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_gold_us_desert.paa" };
    backpack = "TTT_Backpack_Schuetze_Us_Desert";
    items[] += {
        ITEMS_GOLD,
        WEAPON_US_SPECIAL_ACCESSORY
    };
    respawnItems[] += {
        ITEMS_GOLD,
        WEAPON_US_SPECIAL_ACCESSORY
    };
    linkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_6_Us_Desert",
        "B_UavTerminal"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Gold_Us_Desert", 
        "TTT_Helmet_6_Us_Desert",
        "B_UavTerminal"
    };
    weapons[] = { WEAPONS_US(WEAPON_BINOCULAR) };
    respawnWeapons[] = { WEAPONS_US(WEAPON_BINOCULAR) };
};

/*
#############################################################
### Trupp Gruen (Desert)
#############################################################
*/

//Gruen 1 (Zugfuehrer)
class TTT_Gruen1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gruen 1 (Zugfuehrer)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_green_us_desert.paa" };
    items[] += { ITEMS_GREEN };
    respawnitems[] += { ITEMS_GREEN };
    linkedItems[] += { 
        "TTT_Vest_Heavy_Green_Us_Desert",
        "TTT_Helmet_1_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Heavy_Green_Us_Desert",
        "TTT_Helmet_1_Us_Desert" 
    };
};

//Gruen 2 (Funker/FAC)
class TTT_Gruen2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gruen 2 (Funker/FAC)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_green_us_desert.paa" };
    items[] += { ITEMS_GREEN };
    respawnitems[] += { ITEMS_GREEN };
    linkedItems[] += { 
        "TTT_Vest_Heavy_Green_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Heavy_Green_Us_Desert",
        "TTT_Helmet_2_Us_Desert" 
    };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Gruen3_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Gruen 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_green_us_desert.paa" };
    items[] += { ITEMS_GREEN };
    respawnitems[] += { ITEMS_GREEN };
    linkedItems[] += { 
        "TTT_Vest_Lite_Green_Us_Desert",
        "TTT_Helmet_3_Us_Desert" 
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Green_Us_Desert", 
        "TTT_Helmet_3_Us_Desert"
    };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Gruen4_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 1;
    displayName = "Gruen 4 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Gruen_Us_Desert";
    uniformClass = "TTT_Uniform_Gruen_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_green_us_desert.paa" };
    items[] += { ITEMS_GREEN };
    respawnitems[] += { ITEMS_GREEN };
    linkedItems[] += { 
        "TTT_Vest_Lite_Green_Us_Desert", 
        "TTT_Helmet_4_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Green_Us_Desert", 
        "TTT_Helmet_4_Us_Desert" 
    };
};

/*
#############################################################
### Trupp Braun (Desert)
#############################################################
*/

//Braun 1 (Zugfuehrer)
class TTT_Braun1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Braun 1 (Zugfuehrer)";
    vehicleClass = "TTT_Braun_Us_Desert";
    uniformClass = "TTT_Uniform_Braun_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_brown_us_desert.paa" };
    items[] += { ITEMS_BRAUN };
    respawnitems[] += { ITEMS_BRAUN };
    linkedItems[] += { 
        "TTT_Vest_Heavy_Brown_Us_Desert",
        "TTT_Helmet_1_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Heavy_Brown_Us_Desert",
        "TTT_Helmet_1_Us_Desert" 
    };
};

//Braun 2 (Funker/FAC)
class TTT_Braun2_Us_Desert : TTT_Funkerfac_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Braun 2 (Funker/FAC)";
    vehicleClass = "TTT_Braun_Us_Desert";
    uniformClass = "TTT_Uniform_Braun_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_brown_us_desert.paa" };
    items[] += { ITEMS_BRAUN };
    respawnitems[] += { ITEMS_BRAUN };
    linkedItems[] += { 
        "TTT_Vest_Heavy_Brown_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Heavy_Brown_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Braun3_Us_Desert : TTT_Gefechtssanitaeter_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Braun 3 (Gefechtssanitaeter)";
    vehicleClass = "TTT_Braun_Us_Desert";
    uniformClass = "TTT_Uniform_Braun_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_brown_us_desert.paa" };
    items[] += { ITEMS_BRAUN };
    respawnitems[] += { ITEMS_BRAUN };
    linkedItems[] += { 
        "TTT_Vest_Lite_Brown_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Brown_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
};

/*
#############################################################
### Trupp Schwarz (Desert)
#############################################################
*/

//Schwarz 1 (Truppfuehrer)
class TTT_Schwarz1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 1 (Truppfuehrer)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { ITEMS_SCHWARZ };
    respawnitems[] += { ITEMS_SCHWARZ };
    linkedItems[] += { 
        "TTT_Vest_Heavy_Black_Us_Desert", 
        "TTT_Helmet_1_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Heavy_Black_Us_Desert", 
        "TTT_Helmet_1_Us_Desert" 
    };
};

//Schwarz 2 (Grenadier)
class TTT_Schwarz2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 2 (Grenadier)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { ITEMS_SCHWARZ };
    respawnitems[] += { ITEMS_SCHWARZ };
    linkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Schwarz3_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 3 (LMG-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { ITEMS_SCHWARZ };
    respawnitems[] += { ITEMS_SCHWARZ };
    linkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Schwarz4_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 4 (AT-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { ITEMS_SCHWARZ };
    respawnitems[] += { ITEMS_SCHWARZ };
    linkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_4_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_4_Us_Desert" 
    };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Schwarz5_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 5 (LMG-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { ITEMS_SCHWARZ };
    respawnitems[] += { ITEMS_SCHWARZ };
    linkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_5_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_5_Us_Desert" 
    };
};


//Schwarz 6 (AT-Schuetze)
class TTT_Schwarz6_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Schwarz 6 (AT-Schuetze)";
    vehicleClass = "TTT_Schwarz_Us_Desert";
    uniformClass = "TTT_Uniform_Schwarz_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { ITEMS_SCHWARZ };
    respawnitems[] += { ITEMS_SCHWARZ };
    linkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_6_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Black_Us_Desert", 
        "TTT_Helmet_6_Us_Desert" 
    };
};

/*
#############################################################
### Trupp Rot (Desert)
#############################################################
*/

//Rot 1 (Truppfuehrer)
class TTT_Rot1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 1 (Truppfuehrer)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_red_us_desert.paa" };
    items[] += { ITEMS_ROT };
    respawnitems[] += { ITEMS_ROT };
    linkedItems[] += { 
        "TTT_Vest_Heavy_Red_Us_Desert", 
        "TTT_Helmet_1_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Heavy_Red_Us_Desert", 
        "TTT_Helmet_1_Us_Desert" 
    };
};

//Rot 2 (Grenadier)
class TTT_Rot2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 2 (Grenadier)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_red_us_desert.paa" };
    items[] += { ITEMS_ROT };
    respawnitems[] += { ITEMS_ROT };
    linkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_2_Us_Desert" 
    };
};

//Rot 3 (LMG-Schuetze)
class TTT_Rot3_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 3 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_red_us_desert.paa" };
    items[] += { ITEMS_ROT };
    respawnitems[] += { ITEMS_ROT };
    linkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_3_Us_Desert" 
    };
};

//Rot 4 (AT-Schuetze)
class TTT_Rot4_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 4 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_red_us_desert.paa" };
    items[] += { ITEMS_ROT };
    respawnitems[] += { ITEMS_ROT };
    linkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_4_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_4_Us_Desert" 
    };
};

//Rot 5 (LMG-Schuetze)
class TTT_Rot5_Us_Desert : TTT_Lmgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 5 (LMG-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_red_us_desert.paa" };
    items[] += { ITEMS_ROT };
    respawnitems[] += { ITEMS_ROT };
    linkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_5_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_5_Us_Desert" 
    };
};

//Rot 6 (AT-Schuetze)
class TTT_Rot6_Us_Desert : TTT_Atschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Rot 6 (AT-Schuetze)";
    vehicleClass = "TTT_Rot_Us_Desert";
    uniformClass = "TTT_Uniform_Rot_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_red_us_desert.paa" };
    items[] += { ITEMS_ROT };
    respawnitems[] += { ITEMS_ROT };
    linkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_6_Us_Desert" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Lite_Red_Us_Desert", 
        "TTT_Helmet_6_Us_Desert" 
    };
};

/*
#############################################################
### Trupp Bronze (Desert)
#############################################################
*/

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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_bronx_us_desert.paa" };
    items[] += {
        ITEMS_BRONZE,
        "ACE_microDAGR" 
    };
    respawnItems[] += {
        ITEMS_BRONZE,
        "ACE_microDAGR" 
    };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    weapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_RANGEFINDER };
    respawnWeapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_RANGEFINDER };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_bronx_us_desert.paa" };
    items[] += { ITEMS_BRONZE };
    respawnitems[] += { ITEMS_BRONZE };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    weapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
    respawnWeapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_bronx_us_desert.paa" };
    items[] += { ITEMS_BRONZE };
    respawnitems[] += { ITEMS_BRONZE };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    weapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
    respawnWeapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_bronx_us_desert.paa" };
    items[] += {
        ITEMS_BRONZE,
        "ACE_microDAGR" 
    };
    respawnItems[] += {
        ITEMS_BRONZE,
        "ACE_microDAGR" 
    };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    weapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_RANGEFINDER };
    respawnWeapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_RANGEFINDER };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_bronx_us_desert.paa" };
    items[] += { ITEMS_BRONZE };
    respawnitems[] += { ITEMS_BRONZE };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    weapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
    respawnWeapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_bronx_us_desert.paa" };
    items[] += { ITEMS_BRONZE };
    respawnitems[] += { ITEMS_BRONZE };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "BWA3_CrewmanKSK_Tropen_Headset"
    };
    weapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
    respawnWeapons[] += { WEAPON_US_PRIMARY_LIGHT, WEAPON_BINOCULAR };
};

/*
#############################################################
### Trupp Blau (Desert)
#############################################################
*/

//Blau 1 (Truppfuehrer)
class TTT_Blau1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 1 (Truppfuehrer)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_blue_us_desert.paa" };
    items[] += { ITEMS_BLAU };
    respawnitems[] += { ITEMS_BLAU };
    linkedItems[] += {
        "TTT_Vest_Heavy_Blue_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Heavy_Blue_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
};

//Blau 2 (Grenadier)
class TTT_Blau2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 2 (Grenadier)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_blue_us_desert.paa" };
    items[] += { ITEMS_BLAU };
    respawnitems[] += { ITEMS_BLAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
};

//Blau 3 (MG-Assistent)
class TTT_Blau3_Us_Desert : TTT_Mgassistent_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 3 (MG-Assistent)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_blue_us_desert.paa" };
    items[] += { ITEMS_BLAU };
    respawnitems[] += { ITEMS_BLAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
};

//Blau 4 (MG-Schuetze)
class TTT_Blau4_Us_Desert : TTT_Mgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 4 (MG-Schuetze)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_blue_us_desert.paa" };
    items[] += { ITEMS_BLAU };
    respawnitems[] += { ITEMS_BLAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
};

//Blau 5 (Pionier)
class TTT_Blau5_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 5 (Pionier)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_blue_us_desert.paa" };
    items[] += { ITEMS_BLAU };
    respawnitems[] += { ITEMS_BLAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
};

//Blau 6 (Pionier)
class TTT_Blau6_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Blau 6 (Pionier)";
    vehicleClass = "TTT_Blau_Us_Desert";
    uniformClass = "TTT_Uniform_Blau_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_blue_us_desert.paa" };
    items[] += { ITEMS_BLAU };
    respawnitems[] += { ITEMS_BLAU };
    linkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_6_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Blue_Us_Desert",
        "TTT_Helmet_6_Us_Desert"
    };
};

/*
#############################################################
### Trupp Violett (Desert)
#############################################################
*/

//Violett 1 (Truppfuehrer)
class TTT_Violett1_Us_Desert : TTT_Truppfuehrer_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 1 (Truppfuehrer)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_violet_us_desert.paa" };
    items[] += { ITEMS_VIOLETT };
    respawnitems[] += { ITEMS_VIOLETT };
    linkedItems[] += {
        "TTT_Vest_Heavy_Purple_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Heavy_Purple_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
};

//Violett 2 (Grenadier)
class TTT_Violett2_Us_Desert : TTT_Grenadier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 2 (Grenadier)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_violet_us_desert.paa" };
    items[] += { ITEMS_VIOLETT };
    respawnitems[] += { ITEMS_VIOLETT };
    linkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
};

//Violett 3 (MG-Assistent)
class TTT_Violett3_Us_Desert : TTT_Mgassistent_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 3 (MG-Assistent)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_violet_us_desert.paa" };
    items[] += { ITEMS_VIOLETT };
    respawnitems[] += { ITEMS_VIOLETT };
    linkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
};

//Violett 4 (MG-Schuetze)
class TTT_Violett4_Us_Desert : TTT_Mgschuetze_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 4 (MG-Schuetze)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_violet_us_desert.paa" };
    items[] += { ITEMS_VIOLETT };
    respawnitems[] += { ITEMS_VIOLETT };
    linkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
};

//Violett 5 (Pionier)
class TTT_Violett5_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 5 (Pionier)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_violet_us_desert.paa" };
    items[] += { ITEMS_VIOLETT };
    respawnitems[] += { ITEMS_VIOLETT };
    linkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_5_Us_Desert"
    };
};

//Violett 6 (Pionier)
class TTT_Violett6_Us_Desert : TTT_Pionier_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Violett 6 (Pionier)";
    vehicleClass = "TTT_Violett_Us_Desert";
    uniformClass = "TTT_Uniform_Violett_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_violet_us_desert.paa" };
    items[] += { ITEMS_VIOLETT };
    respawnitems[] += { ITEMS_VIOLETT };
    linkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_6_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Lite_Purple_Us_Desert",
        "TTT_Helmet_6_Us_Desert"
    };
};

/*
#############################################################
### Trupp Weiﬂ (Desert)
#############################################################
*/

//Weiﬂ 1 (Oberfeldarzt)
class TTT_Weiss1_Us_Desert : TTT_Feldarzt_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 1 (Oberfeldarzt)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_white_us_desert.paa" };
    items[] += { ITEMS_WEISS };
    respawnitems[] += { ITEMS_WEISS };
    linkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_1_Us_Desert"
    };
};

//Weiﬂ 2 (Fahrzeugfuehrer)
class TTT_Weiss2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 2 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_white_us_desert.paa" };
    items[] += {
        ITEMS_WEISS,
        "TTT_Helmet_Falcon"
    };
    respawnitems[] += {
        ITEMS_WEISS,
        "TTT_Helmet_Falcon"
    };
    linkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_2_Us_Desert"
    };
};

//Weiss 3 (Feldarzt)
class TTT_Weiss3_Us_Desert : TTT_Feldarzt_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 3 (Feldarzt)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_white_us_desert.paa" };
    items[] += { ITEMS_WEISS };
    respawnitems[] += { ITEMS_WEISS };
    linkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_3_Us_Desert"
    };
};

//Weiﬂ 4 (Fahrzeugfuehrer)
class TTT_Weiss4_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Weiss 4 (Fahrzeugfuehrer)";
    vehicleClass = "TTT_Weiss_Us_Desert";
    uniformClass = "TTT_Uniform_Weiss_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_white_us_desert.paa" };
    items[] += {
        ITEMS_WEISS,
        "TTT_Helmet_Falcon"
    };
    respawnitems[] += {
        ITEMS_WEISS,
        "TTT_Helmet_Falcon"
    };
    linkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
    respawnLinkedItems[] += {
        "TTT_Vest_Crew_Us_Desert",
        "TTT_Helmet_4_Us_Desert"
    };
};

/*
#############################################################
### Trupp Platin (Desert)
#############################################################
*/

//Platin 1 (Pilot)
class TTT_Platin1_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    icon = "iconManLeader";
    displayName = "Platin 1 (Pilot)";
    vehicleClass = "TTT_Platin_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_PLATIN };
    respawnitems[] += { ITEMS_PLATIN };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle"
    };
};

//Platin 2 (Pilot)
class TTT_Platin2_Us_Desert : TTT_Pilot_Base_Us {
    author = "Tactical Training Team";
    scope = 2;
    displayName = "Platin 2 (Pilot)";
    vehicleClass = "TTT_Platin_Us_Desert";
    uniformClass = "TTT_Uniform_Silber_Us_Desert";
    editorSubcategory = "EdSubcat_Unit_Camo_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_PLATIN };
    respawnitems[] += { ITEMS_PLATIN };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle"
    };
};

/*
#############################################################
### Trupp Silber (Desert)
#############################################################
*/

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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_SILBER };
    respawnitems[] += { ITEMS_SILBER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_1_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_1_Us_Desert"
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_SILBER };
    respawnitems[] += { ITEMS_SILBER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_2_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_2_Us_Desert"
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_SILBER };
    respawnitems[] += { ITEMS_SILBER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_3_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_3_Us_Desert"
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_SILBER };
    respawnitems[] += { ITEMS_SILBER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_4_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_4_Us_Desert"
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_SILBER };
    respawnitems[] += { ITEMS_SILBER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_5_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_5_Us_Desert"
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_SILBER };
    respawnitems[] += { ITEMS_SILBER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_6_Us_Desert"
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_6_Us_Desert"
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_ADLER };
    respawnitems[] += { ITEMS_ADLER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle" 
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_ADLER };
    respawnitems[] += { ITEMS_ADLER };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Eagle" 
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_BUSSARD };
    respawnitems[] += { ITEMS_BUSSARD };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Buzzard" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Buzzard" 
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_BUSSARD };
    respawnitems[] += { ITEMS_BUSSARD };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Buzzard" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Buzzard" 
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_HABICHT };
    respawnitems[] += { ITEMS_HABICHT };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Hawk" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Hawk" 
    };
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
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_silver_us_desert.paa" };
    items[] += { ITEMS_HABICHT };
    respawnitems[] += { ITEMS_HABICHT };
    linkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Hawk" 
    };
    respawnLinkedItems[] += { 
        "TTT_Vest_Crew_Us_Desert", 
        "TTT_Helmet_Hawk" 
    };
};    