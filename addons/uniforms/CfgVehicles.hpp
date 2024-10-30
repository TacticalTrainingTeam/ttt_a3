class CfgVehicles {

    class B_Soldier_base_F;            
    
    class TTT_Base_US : B_Soldier_base_F {
        _generalMacro = "B_Soldier_base_F";
        author = ECSTRING(main,Tactical Training Team);
        displayName = QUOTE(Basis-Klasse US);
        scope = 0;
        icon = "iconMan";
        uniformAccessories[] = {};
        uniformClass = "";    
        nakedUniform = "U_BasicBody";
        hiddenSelections[] = { "Camo", "insignia" }; //Camo = Standardskin der Uniform; insignia = Rangabzeichen (linker Arm);
        items[] = {};
        respawnItems[] = {};
        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
    };

    class TTT_Platin_Pilot : TTT_Base_US {
        displayName = QUOTE(Klasse Platin Pilot);
        scope = 1;
        uniformClass = "TTT_Uniform_Platin_Pilot";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_platin_pilot.paa) };
    };

    class TTT_Yellow_US_Desert : TTT_Base_US {
        displayName = QUOTE(Klasse Gelb Desert);
        uniformClass = "TTT_Uniform_Yellow_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_yellow_US_Desert.paa) };
    };

    class TTT_Grey_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Grau Desert);
        uniformClass = "TTT_Uniform_Grey_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_grey_US_Desert.paa) };
    };

    class TTT_Gold_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Gold Desert);
        uniformClass = "TTT_Uniform_Gold_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_gold_US_Desert.paa) };
    };

    class TTT_Green_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Grün Desert);
        uniformClass = "TTT_Uniform_Green_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_green_US_Desert.paa) };
    };

    class TTT_Brown_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Braun Desert);
        uniformClass = "TTT_Uniform_Brown_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_brown_US_Desert.paa) };
    };

    class TTT_Black_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Schwarz Desert);
        uniformClass = "TTT_Uniform_Black_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_black_US_Desert.paa) };
    };

    class TTT_Red_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Rot Desert);
        uniformClass = "TTT_Uniform_Red_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_red_US_Desert.paa) };
    };

    class TTT_Bronze_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Bronze Desert);
        uniformClass = "TTT_Uniform_Bronze_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_bronze_US_Desert.paa) };
    };

    class TTT_Blue_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Blau Desert);
        uniformClass = "TTT_Uniform_Blue_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_blue_US_Desert.paa) };
    };

    class TTT_Violet_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Violett Desert);
        uniformClass = "TTT_Uniform_Violet_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_violet_US_Desert.paa) };
    };

    class TTT_White_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Weiss Desert);
        uniformClass = "TTT_Uniform_White_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_white_US_Desert.paa) };
    };

    class TTT_Orange_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Orange Desert);
        uniformClass = "TTT_Uniform_Orange_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_orange_US_Desert.paa) };
    };

    class TTT_Platin_US_Desert : TTT_Yellow_US_Desert {
        displayName = QUOTE(Klasse Platin Desert);
        uniformClass = "TTT_Uniform_Platin_US_Desert";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_platin_US_Desert.paa) };
    };

    class TTT_Base_BW : B_Soldier_base_F {
        _generalMacro = "B_Soldier_base_F";
        author = ECSTRING(main,Tactical Training Team);
        displayName = QUOTE(Basis-Klasse BW);
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

    //Flecktarn
    class TTT_Yellow_BW_Flecktarn : TTT_Base_BW {
        displayName = QUOTE(Klasse Gelb Flecktarn);
        scope = 1;
        uniformClass = "TTT_Uniform_Yellow_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_yellow_bw_flecktarn.paa) };
        //hiddenSelectionsMaterials[] = {"\ttt_units_base\data\TTT_uniform.rvmat"};
    };

    class TTT_Grey_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Grau Flecktarn);
        uniformClass = "TTT_Uniform_Grey_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_grey_bw_flecktarn.paa) };
    };

    class TTT_Gold_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Gold Flecktarn);
        uniformClass = "TTT_Uniform_Gold_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_gold_bw_flecktarn.paa) };
    };

    class TTT_Green_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Grün Flecktarn);
        uniformClass = "TTT_Uniform_Green_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_green_bw_flecktarn.paa) };
    };

    class TTT_Brown_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Braun Flecktarn);
        uniformClass = "TTT_Uniform_Brown_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_brown_bw_flecktarn.paa) };
    };

    class TTT_Black_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Schwarz Flecktarn);
        uniformClass = "TTT_Uniform_Black_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_black_bw_flecktarn.paa) };
    };

    class TTT_Red_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Rot Flecktarn);
        uniformClass = "TTT_Uniform_Red_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_red_bw_flecktarn.paa) };
    };

    class TTT_Bronze_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Bronze Flecktarn);
        uniformClass = "TTT_Uniform_Bronze_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_bronze_bw_flecktarn.paa) };
    };

    class TTT_Blue_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Blau Flecktarn);
        uniformClass = "TTT_Uniform_Blue_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_blue_bw_flecktarn.paa) };
    };

    class TTT_Violet_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Violett Flecktarn);
        uniformClass = "TTT_Uniform_Violet_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_violet_bw_flecktarn.paa) };
    };

    class TTT_White_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Weiss Flecktarn);
        uniformClass = "TTT_Uniform_White_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_white_bw_flecktarn.paa) };
    };

    class TTT_Silver_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Silber Flecktarn);
        uniformClass = "TTT_Uniform_Silver_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_silver_bw_flecktarn.paa) };
    };

    class TTT_Orange_BW_Flecktarn : TTT_Yellow_BW_Flecktarn {
        displayName = QUOTE(Klasse Orange Flecktarn);
        uniformClass = "TTT_Uniform_Orange_BW_Flecktarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_orange_bw_flecktarn.paa) };
    };

    //Tropentarn
    class TTT_Yellow_BW_Tropentarn : TTT_Base_BW {
        displayName = QUOTE(Klasse Gelb Tropentarn);
        uniformClass = "TTT_Uniform_Yellow_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_yellow_bw_tropentarn.paa) };
    };

    class TTT_Grey_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
        displayName = QUOTE(Klasse Grau Tropentarn);
        uniformClass = "TTT_Uniform_Grey_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_grey_bw_tropentarn.paa) };
    };

    class TTT_Gold_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
        displayName = QUOTE(Klasse Gold Tropentarn);
        uniformClass = "TTT_Uniform_Gold_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_gold_bw_tropentarn.paa) };
    };

    class TTT_Green_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {
        displayName = QUOTE(Klasse Grün Tropentarn);
        uniformClass = "TTT_Uniform_Green_BW_Tropentarn";
        hiddenSelectionsTextures[] = { QPATHTOF(data\TTT_uniform_green_bw_tropentarn.paa) };
    };

    class TTT_Brown_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Braun Tropentarn";
        uniformClass = "TTT_Uniform_Brown_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_brown_bw_tropentarn.paa" };
    };

    class TTT_Black_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Schwarz Tropentarn";
        uniformClass = "TTT_Uniform_Black_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_black_bw_tropentarn.paa" };
    };

    class TTT_Red_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Rot Tropentarn";
        uniformClass = "TTT_Uniform_Red_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_red_bw_tropentarn.paa" };
    };

    class TTT_Bronze_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Bronze Tropentarn";
        uniformClass = "TTT_Uniform_Bronze_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_bronze_bw_tropentarn.paa" };
    };

    class TTT_Blue_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Blau Tropentarn";
        uniformClass = "TTT_Uniform_Blue_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_blue_bw_tropentarn.paa" };
    };

    class TTT_Violet_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Violett Tropentarn";
        uniformClass = "TTT_Uniform_Violet_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_violet_bw_tropentarn.paa" };
    };

    class TTT_White_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Weiss Tropentarn";
        uniformClass = "TTT_Uniform_White_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_white_bw_tropentarn.paa" };
    };

    class TTT_Orange_BW_Tropentarn : TTT_Yellow_BW_Tropentarn {

        displayName = "Klasse Orange Tropentarn";
        uniformClass = "TTT_Uniform_Orange_BW_Tropentarn";
        hiddenSelectionsTextures[] = { "z\ttt\addons\uniforms\data\TTT_uniform_orange_bw_tropentarn.paa" };
    };


};