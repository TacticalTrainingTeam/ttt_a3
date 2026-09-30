class CfgWeapons {
    //Helicopter
    class H_HelmetB;
    class H_CrewHelmetHeli_B: H_HelmetB { class ItemInfo; };
    class GVAR(Pilot): H_CrewHelmetHeli_B {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = "ttt_Helmet_Pilot";
        scope = 0;

        class ItemInfo: ItemInfo {
            //allowedSlots[] is an array of slot numbers where you may put the weapon. 701 stands for vest, 801 stands for uniform, 901 stands for backpack
            allowedSlots[] = {605,701,901};
        };
    };

    class GVAR(Buzzard): GVAR(Pilot) {
        scope = 2;
        displayName = CSTRING(buzzard_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_buzzard_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_buzzard_ca.pac);
    };

    class GVAR(Buzzard_NVG): GVAR(Buzzard) {
        displayName = CSTRING(buzzard_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    class GVAR(Hawk): GVAR(Buzzard) {
        displayName = CSTRING(hawk_displayName);
        picture = QPATHTOF(data\pictures\ttt_helmet_hawk_ca.pac);
    };

    class GVAR(Hawk_NVG): GVAR(Hawk) {
        displayName = CSTRING(hawk_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    class GVAR(Falcon): GVAR(Buzzard) {
        displayName = CSTRING(falcon_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_falcon_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_falcon_ca.pac);
    };

    class GVAR(Falcon_NVG): GVAR(Falcon) {
        displayName = CSTRING(falcon_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    class GVAR(Eagle): GVAR(Buzzard) {
        displayName = CSTRING(eagle_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_eagle_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_eagle_ca.pac);
    };

    class GVAR(Eagle_NVG): GVAR(Eagle) {
        displayName = CSTRING(eagle_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    //Crew
    class H_HelmetCrew_I;
    class GVAR(Vehiclecrew): H_HelmetCrew_I {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = "ttt_Helmet_Vehiclecrew";
        scope = 0;
    };

    class GVAR(Bronze_Vehiclecrew): GVAR(Vehiclecrew) {
        displayName = CSTRING(bronze_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_bronze_vehiclecrew_co.paa)};
        scope = 2;
        picture = QPATHTOF(data\pictures\ttt_helmet_bronze_vehiclecrew_ca.pac);
    };

    class GVAR(Grey_Vehiclecrew): GVAR(Bronze_Vehiclecrew) {
        displayName = CSTRING(grey_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_grey_vehiclecrew_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_grey_vehiclecrew_ca.pac);
    };

    class GVAR(Silver_Vehiclecrew): GVAR(Bronze_Vehiclecrew) {
        displayName = CSTRING(silver_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_silver_vehiclecrew_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_silver_vehiclecrew_ca.pac);
    };

    class GVAR(Yellow_Vehiclecrew): GVAR(Bronze_Vehiclecrew) {
        displayName = CSTRING(yellow_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_yellow_vehiclecrew_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_yellow_vehiclecrew_ca.pac);
    };

    //Infanterie Helme
    class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB: H_HelmetB_plain_mcamo { class ItemInfo; };
    class GVAR(Base): H_HelmetSpecB {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        model = QUOTE(\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d);

        class ItemInfo: ItemInfo {
            //allowedSlots[] is an array of slot numbers where you may put the weapon. 701 stands for vest, 801 stands for uniform, 901 stands for backpack
            allowedSlots[] = {605,701,901};
            uniformModel = QUOTE(\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d);
         };
    };

    //US Desert
    class GVAR(1_US_Desert): GVAR(Base) {
        scope = 2;
        displayName = CSTRING(helmet_1_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_1_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_1_us_desert_ca.pac);
    };
    class GVAR(2_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_2_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_2_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_2_us_desert_ca.pac);
    };
    class GVAR(3_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_3_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_3_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_3_us_desert_ca.pac);
    };
    class GVAR(4_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_4_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_4_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_4_us_desert_ca.pac);
    };
    class GVAR(5_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_5_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_5_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_5_us_desert_ca.pac);
    };
    class GVAR(6_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_6_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_6_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_6_us_desert_ca.pac);
    };
    class GVAR(7_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_7_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_7_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_7_us_desert_ca.pac);
    };
    class GVAR(8_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_8_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_8_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_8_us_desert_ca.pac);
    };
    class GVAR(9_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_9_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_9_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_9_us_desert_ca.pac);
    };
    class GVAR(10_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_10_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_10_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_10_us_desert_ca.pac);
    };
    class GVAR(11_US_Desert): GVAR(1_US_Desert) {
        displayName = CSTRING(helmet_11_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_11_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_11_us_desert_ca.pac);
    };

    //Flecktarn
    class GVAR(1_BW_Flecktarn): GVAR(Base) {
        scope = 2;
        displayName = CSTRING(helmet_1_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_1_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_1_bw_flecktarn_ca.pac);
    };
    class GVAR(2_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_2_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_2_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_2_bw_flecktarn_ca.pac);
    };
    class GVAR(3_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_3_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_3_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_3_bw_flecktarn_ca.pac);
    };
    class GVAR(4_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_4_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_4_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_4_bw_flecktarn_ca.pac);
    };
    class GVAR(5_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_5_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_5_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_5_bw_flecktarn_ca.pac);
    };
    class GVAR(6_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_6_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_6_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_6_bw_flecktarn_ca.pac);
    };
    class GVAR(7_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_7_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_7_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_7_bw_flecktarn_ca.pac);
    };
    class GVAR(8_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_8_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_8_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_8_bw_flecktarn_ca.pac);
    };
    class GVAR(9_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_9_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_9_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_9_bw_flecktarn_ca.pac);
    };
    class GVAR(10_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_10_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_10_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_10_bw_flecktarn_ca.pac);
    };
    class GVAR(11_BW_Flecktarn): GVAR(1_BW_Flecktarn) {
        displayName = CSTRING(helmet_11_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_11_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_11_bw_flecktarn_ca.pac);
    };

    //BW Tropen
    class GVAR(1_BW_Tropentarn): GVAR(Base) {
        scope = 2;
        displayName = CSTRING(helmet_1_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_1_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_1_bw_tropentarn_ca.pac);
    };
    class GVAR(2_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_2_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_2_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_2_bw_tropentarn_ca.pac);
    };
    class GVAR(3_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_3_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_3_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_3_bw_tropentarn_ca.pac);
    };
    class GVAR(4_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_4_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_4_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_4_bw_tropentarn_ca.pac);
    };
    class GVAR(5_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_5_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_5_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_5_bw_tropentarn_ca.pac);
    };
    class GVAR(6_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_6_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_6_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_6_bw_tropentarn_ca.pac);
    };
    class GVAR(7_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_7_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_7_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_7_bw_tropentarn_ca.pac);
    };
    class GVAR(8_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_8_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_8_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_8_bw_tropentarn_ca.pac);
    };
    class GVAR(9_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_9_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_9_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_9_bw_tropentarn_ca.pac);
    };
    class GVAR(10_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_10_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_10_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_10_bw_tropentarn_ca.pac);
    };
    class GVAR(11_BW_Tropentarn): GVAR(1_BW_Tropentarn) {
        displayName = CSTRING(helmet_11_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_11_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_11_bw_tropentarn_ca.pac);
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/loadouts referencing
    //them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_Helmet_Buzzard: GVAR(Buzzard) { scope = 1; };
    class ttt_Helmet_Buzzard_NVG: GVAR(Buzzard_NVG) { scope = 1; };
    class ttt_Helmet_Hawk: GVAR(Hawk) { scope = 1; };
    class ttt_Helmet_Hawk_NVG: GVAR(Hawk_NVG) { scope = 1; };
    class ttt_Helmet_Falcon: GVAR(Falcon) { scope = 1; };
    class ttt_Helmet_Falcon_NVG: GVAR(Falcon_NVG) { scope = 1; };
    class ttt_Helmet_Eagle: GVAR(Eagle) { scope = 1; };
    class ttt_Helmet_Eagle_NVG: GVAR(Eagle_NVG) { scope = 1; };

    class ttt_Helmet_Bronze_Vehiclecrew: GVAR(Bronze_Vehiclecrew) { scope = 1; };
    class ttt_Helmet_Grey_Vehiclecrew: GVAR(Grey_Vehiclecrew) { scope = 1; };
    class ttt_Helmet_Silver_Vehiclecrew: GVAR(Silver_Vehiclecrew) { scope = 1; };
    class ttt_Helmet_Yellow_Vehiclecrew: GVAR(Yellow_Vehiclecrew) { scope = 1; };

    class ttt_Helmet_1_US_Desert: GVAR(1_US_Desert) { scope = 1; };
    class ttt_Helmet_2_US_Desert: GVAR(2_US_Desert) { scope = 1; };
    class ttt_Helmet_3_US_Desert: GVAR(3_US_Desert) { scope = 1; };
    class ttt_Helmet_4_US_Desert: GVAR(4_US_Desert) { scope = 1; };
    class ttt_Helmet_5_US_Desert: GVAR(5_US_Desert) { scope = 1; };
    class ttt_Helmet_6_US_Desert: GVAR(6_US_Desert) { scope = 1; };
    class ttt_Helmet_7_US_Desert: GVAR(7_US_Desert) { scope = 1; };
    class ttt_Helmet_8_US_Desert: GVAR(8_US_Desert) { scope = 1; };
    class ttt_Helmet_9_US_Desert: GVAR(9_US_Desert) { scope = 1; };
    class ttt_Helmet_10_US_Desert: GVAR(10_US_Desert) { scope = 1; };
    class ttt_Helmet_11_US_Desert: GVAR(11_US_Desert) { scope = 1; };

    class ttt_Helmet_1_BW_Flecktarn: GVAR(1_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_2_BW_Flecktarn: GVAR(2_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_3_BW_Flecktarn: GVAR(3_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_4_BW_Flecktarn: GVAR(4_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_5_BW_Flecktarn: GVAR(5_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_6_BW_Flecktarn: GVAR(6_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_7_BW_Flecktarn: GVAR(7_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_8_BW_Flecktarn: GVAR(8_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_9_BW_Flecktarn: GVAR(9_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_10_BW_Flecktarn: GVAR(10_BW_Flecktarn) { scope = 1; };
    class ttt_Helmet_11_BW_Flecktarn: GVAR(11_BW_Flecktarn) { scope = 1; };

    class ttt_Helmet_1_BW_Tropentarn: GVAR(1_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_2_BW_Tropentarn: GVAR(2_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_3_BW_Tropentarn: GVAR(3_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_4_BW_Tropentarn: GVAR(4_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_5_BW_Tropentarn: GVAR(5_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_6_BW_Tropentarn: GVAR(6_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_7_BW_Tropentarn: GVAR(7_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_8_BW_Tropentarn: GVAR(8_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_9_BW_Tropentarn: GVAR(9_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_10_BW_Tropentarn: GVAR(10_BW_Tropentarn) { scope = 1; };
    class ttt_Helmet_11_BW_Tropentarn: GVAR(11_BW_Tropentarn) { scope = 1; };
};
