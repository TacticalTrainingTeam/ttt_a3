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
    faction = "TTT_faction_US";
    vehicleClass = "TTT_Template_US";
    uniformAccessories[] = {};
    nakedUniform = "U_BasicBody";
    hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
    items[] = {
        ITEMS_ACE_DEFAULT,
        ITEMS_US_DEFAULT
    };
    respawnItems[] = {
        ITEMS_ACE_DEFAULT,
        ITEMS_US_DEFAULT
    };
    linkedItems[] = { LINKED_ITEMS_DEFAULT };
    respawnLinkedItems[] = { LINKED_ITEMS_DEFAULT };
    weapons[] = {
        WEAPON_US_SECONDARY,
        WEAPON_ARMA
    };
    respawnWeapons[] = {
        WEAPON_US_SECONDARY,
        WEAPON_ARMA
    };
    magazines[] = {
        MAGAZINES_SMOKE,
        WEAPON_US_MAGAZINES_DEFAULT
    };
    respawnMagazines[] = {
        MAGAZINES_SMOKE,
        WEAPON_US_MAGAZINES_DEFAULT
    };
};

/*
#############################################################
### Basis-Klassen
#############################################################
*/

//Basis-Klasse fuer Truppfuehrer
class TTT_Teamleader_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "Truppfuehrer US (Template)";
    icon = "iconManLeader";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Teamleader_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { "ACE_microDAGR" };
    respawnitems[] += { "ACE_microDAGR" };
    weapons[] += {
        WEAPON_US_PRIMARY_GL,
        WEAPON_RANGEFINDER
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY_GL,
        WEAPON_RANGEFINDER
    };
};

//Basis-Klasse fuer Grenadiere
class TTT_Grenadier_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "Grenadier US (Template)";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Grenadier_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY_GL,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY_GL,
        WEAPON_BINOCULAR
    };
};

//Basis-Klasse fuer MG-Assistenten
class TTT_Assistant_MG_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "MG-Assistent US (Template)";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Assistant_MG_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_RANGEFINDER
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_RANGEFINDER
    };
};

//Basis-Klasse fuer MG-Schuetzen
class TTT_Soldier_MG_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "MG-Schuetze US (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Soldier_MG_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_MG,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_MG,
        WEAPON_BINOCULAR
    };
    magazines[] = {
        MAGAZINES_SMOKE,
        item_2(WEAPON_US_SECONDARY_MAGAZINES),
        WEAPON_US_MG_MAGAZINES
    };
    respawnMagazines[] = {
        MAGAZINES_SMOKE,
        item_2(WEAPON_US_SECONDARY_MAGAZINES),
        WEAPON_US_MG_MAGAZINES
    };
};

//Basis-Klasse fuer LMG-Schuetzen
class TTT_Soldier_LMG_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "LMG-Schuetze US (Template)";
    icon = "iconManMG";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Soldier_LMG_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { WEAPON_US_LMG_ACCESSORY };
    respawnitems[] += { WEAPON_US_LMG_ACCESSORY };
    weapons[] += {
        WEAPON_US_LMG,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_LMG,
        WEAPON_BINOCULAR
    };
    magazines[] = {
        MAGAZINES_SMOKE,
        item_2(WEAPON_US_SECONDARY_MAGAZINES),
        WEAPON_US_LMG_MAGAZINES
    };
    respawnMagazines[] = {
        MAGAZINES_SMOKE,
        item_2(WEAPON_US_SECONDARY_MAGAZINES),
        WEAPON_US_LMG_MAGAZINES
    };
};

//Basis-Klasse fuer AT-Assistent
class TTT_Atassistent_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "AT-Assistent US (Template)";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Soldier_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_RANGEFINDER
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_RANGEFINDER
    };
};

//Basis-Klasse fuer AT-Schuetzen
class TTT_Soldier_AT_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "AT-Schuetze US (Template)";
    icon = "iconManAT";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Soldier_AT_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_RANGEFINDER,
        WEAPON_US_AT
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_RANGEFINDER,
        WEAPON_US_AT
    };
};

//Basis-Klasse fuer Schuetzen
class TTT_Soldier_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "Schuetze US (Template)";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Soldier_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
};

//Basis-Klasse fuer Funker/FAC
class TTT_Operator_Radio_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "Funker/FAC US (Template)";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Operator_Radio_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY_GL,
        WEAPON_LASER_DESIGNATOR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY_GL,
        WEAPON_LASER_DESIGNATOR
    };
    magazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
    respawnMagazines[] += { WEAPON_LASER_DESIGNATOR_MAGAZINES };
};

//Basis-Klasse fuer Pioniere
class TTT_Pioneer_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "Pionier US (Template)";
    icon = "iconManExplosive";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    canDeactivateMines = 1;
    backpack = "TTT_Backpack_Pioneer_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
};

//Basis-Klasse fuer Gefechtssanitaeter
class TTT_Medic_Combat_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "Gefechtssanitaeter US (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    attendant = 1;
    backpack = "TTT_Backpack_Medic_Combat_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    weapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
};

//Basis-Klasse fuer Feldaerzte
class TTT_Medic_Doctor_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "Feldarzt US (Template)";
    icon = "iconManMedic";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    attendant = 1;
    backpack = "TTT_Backpack_Medic_Doctor_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { "ACE_microDAGR" };
    respawnitems[] += { "ACE_microDAGR" };
    weapons[] += {
        WEAPON_US_PRIMARY_LIGHT,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY_LIGHT,
        WEAPON_BINOCULAR
    };
};

//Basis-Klasse fuer Piloten
class TTT_Pilot_Base_US : TTT_Base_US {
    _generalMacro = "B_Helipilot_F";
    author = "$STR_Tactical_Training_Team";
    displayName = "Pilot US (Template)";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "TTT_Backpack_Pilot_US_Desert";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += { "ACE_microDAGR" };
    respawnitems[] += { "ACE_microDAGR" };
    weapons[] += {
        WEAPON_US_PRIMARY_LIGHT,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY_LIGHT,
        WEAPON_BINOCULAR
    };
    magazines[] = {
        MAGAZINES_SMOKE,
        item_3(WEAPON_US_PRIMARY_MAGAZINES),
        item_1(WEAPON_US_SECONDARY_MAGAZINES)
    };
    respawnMagazines[] = {
        MAGAZINES_SMOKE,
        item_3(WEAPON_US_PRIMARY_MAGAZINES),
        item_1(WEAPON_US_SECONDARY_MAGAZINES)
    };
};

//Basis-Klasse fuer UAV-Operatoren
class TTT_Uavoperator_Base_US : TTT_Base_US {
    author = "$STR_Tactical_Training_Team";
    displayName = "UAV-Operator US (Template)";
    vehicleClass = "TTT_Template_US";
    uniformClass = "TTT_Uniform_Base";
    backpack = "B_UAV_01_backpack_F";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\data\TTT_uniform_black_us_desert.paa" };
    items[] += {
        "ACE_UAVBattery",
        "ACE_GD300_b"
    };
    respawnitems[] += {
        "ACE_UAVBattery",
        "ACE_GD300_b"
    };
    linkedItems[] += { "B_UavTerminal" };
    respawnLinkedItems[] += { "B_UavTerminal" };
    weapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
    respawnWeapons[] += {
        WEAPON_US_PRIMARY,
        WEAPON_BINOCULAR
    };
};