class CfgWeapons {
    //Helicopter
    class H_HelmetB;
    class H_CrewHelmetHeli_B: H_HelmetB { class ItemInfo; };
    class ttt_Helmet_Pilot: H_CrewHelmetHeli_B {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = "ttt_Helmet_Pilot";
        scope = 0;

        class ItemInfo: ItemInfo {
            //allowedSlots[] is an array of slot numbers where you may put the weapon. 701 stands for vest, 801 stands for uniform, 901 stands for backpack
            allowedSlots[] = {605,701,901};
        };
    };

    class ttt_Helmet_Buzzard: ttt_Helmet_Pilot {
        scope = 2;
        displayName = CSTRING(buzzard_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_buzzard_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_buzzard_ca.pac);
    };

    class ttt_Helmet_Buzzard_NVG: ttt_Helmet_Buzzard {
        displayName = CSTRING(buzzard_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    class ttt_Helmet_Hawk: ttt_Helmet_Buzzard {
        displayName = CSTRING(hawk_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_buzzard_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_hawk_ca.pac);
    };

    class ttt_Helmet_Hawk_NVG: ttt_Helmet_Hawk {
        displayName = CSTRING(hawk_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    class ttt_Helmet_Falcon: ttt_Helmet_Buzzard {
        displayName = CSTRING(falcon_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_falcon_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_falcon_ca.pac);
    };

    class ttt_Helmet_Falcon_NVG: ttt_Helmet_Falcon {
        displayName = CSTRING(falcon_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    class ttt_Helmet_Eagle: ttt_Helmet_Buzzard {
        displayName = CSTRING(eagle_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_eagle_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_eagle_ca.pac);
    };

    class ttt_Helmet_Eagle_NVG: ttt_Helmet_Eagle {
        displayName = CSTRING(eagle_nvg_displayName);
        subItems[] = {"Integrated_NVG_F"};
    };

    //Crew
    class H_HelmetCrew_I;
    class ttt_Helmet_Vehiclecrew: H_HelmetCrew_I {
        author = ECSTRING(main,TacticalTrainingTeam);
        displayName = "ttt_Helmet_Vehiclecrew";
        scope = 0;
    };

    class ttt_Helmet_Bronze_Vehiclecrew: ttt_Helmet_Vehiclecrew {
        displayName = CSTRING(bronze_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_bronze_vehiclecrew_co.paa)};
        scope = 2;
        picture = QPATHTOF(data\pictures\ttt_helmet_bronze_vehiclecrew_ca.pac);
    };

    class ttt_Helmet_Grey_Vehiclecrew: ttt_Helmet_Bronze_Vehiclecrew {
        displayName = CSTRING(grey_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_grey_vehiclecrew_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_grey_vehiclecrew_ca.pac);
    };

    class ttt_Helmet_Silver_Vehiclecrew: ttt_Helmet_Bronze_Vehiclecrew {
        displayName = CSTRING(silver_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_silver_vehiclecrew_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_silver_vehiclecrew_ca.pac);
    };

    class ttt_Helmet_Yellow_Vehiclecrew: ttt_Helmet_Bronze_Vehiclecrew {
        displayName = CSTRING(yellow_vehiclecrew_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_yellow_vehiclecrew_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_yellow_vehiclecrew_ca.pac);
    };

    //Infanterie Helme
    class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB: H_HelmetB_plain_mcamo { class ItemInfo; };
    class ttt_Helmet_Base: H_HelmetSpecB {
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
    class ttt_Helmet_1_US_Desert: ttt_Helmet_Base {
        scope = 2;
        displayName = CSTRING(helmet_1_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_1_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_1_us_desert_ca.pac);
    };
    class ttt_Helmet_2_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_2_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_2_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_2_us_desert_ca.pac);
    };
    class ttt_Helmet_3_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_3_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_3_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_3_us_desert_ca.pac);
    };
    class ttt_Helmet_4_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_4_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_4_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_4_us_desert_ca.pac);
    };
    class ttt_Helmet_5_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_5_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_5_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_5_us_desert_ca.pac);
    };
    class ttt_Helmet_6_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_6_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_6_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_6_us_desert_ca.pac);
    };
    class ttt_Helmet_7_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_7_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_7_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_7_us_desert_ca.pac);
    };
    class ttt_Helmet_8_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_8_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_8_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_8_us_desert_ca.pac);
    };
    class ttt_Helmet_9_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_9_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_9_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_9_us_desert_ca.pac);
    };
    class ttt_Helmet_10_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_10_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_10_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_10_us_desert_ca.pac);
    };
    class ttt_Helmet_11_US_Desert: ttt_Helmet_1_US_Desert {
        displayName = CSTRING(helmet_11_us_desert_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_11_us_desert_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_11_us_desert_ca.pac);
    };

    //Flecktarn
    class ttt_Helmet_1_BW_Flecktarn: ttt_Helmet_Base {
        scope = 2;
        displayName = CSTRING(helmet_1_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_1_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_1_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_2_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_2_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_2_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_2_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_3_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_3_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_3_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_3_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_4_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_4_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_4_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_4_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_5_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_5_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_5_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_5_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_6_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_6_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_6_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_6_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_7_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_7_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_7_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_7_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_8_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_8_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_8_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_8_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_9_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_9_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_9_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_9_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_10_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_10_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_10_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_10_bw_flecktarn_ca.pac);
    };
    class ttt_Helmet_11_BW_Flecktarn: ttt_Helmet_1_BW_Flecktarn {
        displayName = CSTRING(helmet_11_bw_flecktarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_11_bw_flecktarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_11_bw_flecktarn_ca.pac);
    };

    //BW Tropen
    class ttt_Helmet_1_BW_Tropentarn: ttt_Helmet_Base {
        scope = 2;
        displayName = CSTRING(helmet_1_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_1_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_1_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_2_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_2_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_2_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_2_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_3_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_3_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_3_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_3_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_4_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_4_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_4_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_4_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_5_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_5_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_5_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_5_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_6_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_6_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_6_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_6_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_7_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_7_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_7_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_7_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_8_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_8_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_8_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_8_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_9_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_9_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_9_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_9_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_10_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_10_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_10_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_10_bw_tropentarn_ca.pac);
    };
    class ttt_Helmet_11_BW_Tropentarn: ttt_Helmet_1_BW_Tropentarn {
        displayName = CSTRING(helmet_11_bw_tropentarn_displayName);
        hiddenSelectionsTextures[] = {QPATHTOF(data\ttt_helmet_11_bw_tropentarn_co.paa)};
        picture = QPATHTOF(data\pictures\ttt_helmet_11_bw_tropentarn_ca.pac);
    };
};
