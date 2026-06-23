class CfgVehicles {

    //Reference to the base class, which is defined in the A3\Characters_F\BLUFOR\B_Soldier_F.p3d model.
	// class B_Soldier_base_F;					// For inheritance to work, the base class has to be defined.
	// class B_soldier_new : B_Soldier_base_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	// {
	// 	author = "Splendid Modder";			// The name of the author of the asset, which is displayed in the editor.
	// 	scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	// 	scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	// 	scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	// 	identityTypes[] = { "LanguageENG_F","Head_NATO","G_NATO_default" };		// Identity Types are explained in the Headgear section of this guide.
	// 	displayName = "New Soldier";		// The name of the soldier, which is displayed in the editor.
	// 	cost = 200000;						// How likely the enemies attack this character among some others.
	// 	camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
	// 	sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
	// 	threat[] = { 1, 1, 0.8 };			// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
	// 	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the uniform model this character uses.
	// 	uniformClass = "U_B_soldier_new";							// This links this soldier to a particular uniform. For the details, see below.
	// 	hiddenSelections[] = { "camo" };							// List of model selections which can be changed with hiddenSelectionTextures[]
	// 																// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
	// 	hiddenSelectionsTextures[] = { "\A3\Characters_F_New\BLUFOR\Data\b_soldier_new.paa" };	// The textures for the selections defined above.
	// 																							// If empty, no texture is used.
	// 	canDeactivateMines = 1;					// Can this character deactivate mines?
	// 	engineer = 1;							// Can this character repair vehicles?
	// 	attendant = 1;							// Can this character heal soldiers?
	// 	icon = "iconManEngineer";				// If a character has a special role, a special icon shall be used.
	// 	picture = "pictureRepair";				// The same as above, but for the squad picture.
	// 	backpack = "B_Kitbag_mcamo_Eng";		// Which backpack the character is wearing.
	// 	weapons[] = { "arifle_MX_ACO_pointer_F", "hgun_P07_F", "Throw", "Put" };		// Which weapons the character has.
	// 	respawnWeapons[] = { "arifle_MX_ACO_pointer_F", "hgun_P07_F", "Throw", "Put" };	// Which weapons the character respawns with.
	// 	Items[] = { "FirstAidKit" };			// Which items the character has.
	// 	RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.
	// 	magazines[] = { MAG_10(30Rnd_65x39_caseless_mag), MAG_3(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };			// What ammunition the character has.
	// 	respawnMagazines[] = { MAG_10(30Rnd_65x39_caseless_mag), MAG_3(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };	// What ammunition the character respawns with.
	// 	linkedItems[] = { "V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };		// Which items the character has.
	// 	respawnLinkedItems[] = { "V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };	// Which items the character respawns with.
	// };

    class B_Soldier_F; // base class

    class GVAR(base) : B_Soldier_F {
        author = "Andx";
        scope = 0;
        scopeCurator = 0;
        displayName = "Basis";
        faction = QGVAR(faction_flecktarn);
        editorSubcategory = QGVAR(EdSubcat_Infantry_plain);
    };

    class GVAR(base_flecktarn) : GVAR(base) {
        author = "Andx";
        scope = 0;
        scopeCurator = 0;
        displayName = "Basis Flecktarn";
        faction = QGVAR(faction_flecktarn);
        uniformClass = "ttt_Uniform_plain_BW_Flecktarn";
    };

    // class GVAR(base_desert) : GVAR(base) {
    //     author = "Andx";
    //     scope = 0;
    //     scopeCurator = 0;
    //     displayName = "Basis Tropentarn";
    //     faction = QGVAR(faction_desert);
    //     uniformClass = "ttt_Uniform_plain_US_Desert";
    // };

    class GVAR(flecktarn_survivor): GVAR(base_flecktarn) {
        author = "Andx";
        scope = 2;
        scopeCurator = 2;
        displayName = "Überlebender";
        faction = QGVAR(faction_flecktarn);
        vehicleClass = QGVAR(class_plain);

        items[] = {};
        respawnItems[] = {};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        linkedItems[] = {};
        respawnLinkedItems[] = {};
    };

    class GVAR(flecktarn_rifleman): GVAR(flecktarn_survivor) {
        author = "Andx";
        scope = 2;
        scopeCurator = 2;
        displayName = "Schütze";

        weapons[] = { "arifle_SPAR_01_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put" };
        respawnWeapons[] = { "arifle_SPAR_01_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put" };

        magazines[] = {
            MAG_9("30Rnd_556x45_Stanag_red"),
            MAG_2("16Rnd_9x21_Mag"),
            MAG_2("SmokeShell"),
            "SmokeShellGreen",
            MAG_2("HandGrenade")
        };
        respawnMagazines[] = {
            MAG_9("30Rnd_556x45_Stanag_red"),
            MAG_2("16Rnd_9x21_Mag"),
            MAG_2("SmokeShell"),
            "SmokeShellGreen",
            MAG_2("HandGrenade")
        };

        linkedItems[] = {
            "ttt_Vest_Heavy_Green_US_Desert",
            "ttt_Beret_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ttt_Vest_Heavy_Green_US_Desert",
            "ttt_Beret_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };

    class GVAR(flecktarn_grenadier): GVAR(flecktarn_survivor) {
        author = "Andx";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";

        weapons[] = { "arifle_SPAR_01_GL_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put" };
        respawnWeapons[] = { "arifle_SPAR_01_GL_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put" };

        magazines[] = {
            MAG_9("30Rnd_556x45_Stanag_red"),
            MAG_2("16Rnd_9x21_Mag"),
            MAG_2("SmokeShell"),
            "SmokeShellGreen",
            MAG_2("HandGrenade")
        };
        respawnMagazines[] = {
            MAG_9("30Rnd_556x45_Stanag_red"),
            MAG_2("16Rnd_9x21_Mag"),
            MAG_2("SmokeShell"),
            "SmokeShellGreen",
            MAG_2("HandGrenade")
        };

        linkedItems[] = {
            "ttt_Vest_Heavy_Green_US_Desert",
            "ttt_Beret_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ttt_Vest_Heavy_Green_US_Desert",
            "ttt_Beret_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };

    class GVAR(flecktarn_rifleman_green): GVAR(flecktarn_rifleman) {
        author = "Andx";
        scope = 2;
        scopeCurator = 2;
        displayName = "Schütze (Grün)";

        uniformClass = "ttt_Uniform_green_BW_Flecktarn";
        vehicleClass = QGVAR(class_green);
        editorSubcategory = QGVAR(EdSubcat_Infantry_green);

        weapons[] = { "arifle_SPAR_01_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put" };
        respawnWeapons[] = { "arifle_SPAR_01_blk_ERCO_Pointer_F", "hgun_P07_khk_F", "Throw", "Put" };

        magazines[] = {
            MAG_9("30Rnd_556x45_Stanag_red"),
            MAG_2("16Rnd_9x21_Mag"),
            MAG_2("SmokeShell"),
            "SmokeShellGreen",
            MAG_2("HandGrenade")
        };
        respawnMagazines[] = {
            MAG_9("30Rnd_556x45_Stanag_red"),
            MAG_2("16Rnd_9x21_Mag"),
            MAG_2("SmokeShell"),
            "SmokeShellGreen",
            MAG_2("HandGrenade")
        };

        linkedItems[] = {
            "ttt_Vest_Heavy_Green_US_Desert",
            "ttt_Beret_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ttt_Vest_Heavy_Green_US_Desert",
            "ttt_Beret_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };
};
