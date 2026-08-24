class CfgVehicles {

    class Headgear_H_CrewHelmetHeli_B;

    //Piloten
    class GVAR(item_Buzzard): Headgear_H_CrewHelmetHeli_B {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        displayName = CSTRING(buzzard_displayName);
        scope = 2;

        class TransportItems {
            class GVAR(Buzzard) {
                name = QGVAR(Buzzard);
                count = 1;
            };
        };
    };

    class GVAR(item_Buzzard_NVG): GVAR(item_Buzzard) {
        displayName = CSTRING(buzzard_nvg_displayName);

        class TransportItems {
            class GVAR(Buzzard_NVG) {
                name = QGVAR(Buzzard_NVG);
                count = 1;
            };
        };
    };

    class GVAR(item_hawk): GVAR(item_Buzzard) {
        displayName = CSTRING(hawk_displayName);

        class TransportItems {
            class GVAR(Hawk) {
                name = QGVAR(Hawk);
                count = 1;
            };
        };
    };

    class GVAR(item_Hawk_NVG): GVAR(item_hawk) {
        displayName = CSTRING(hawk_nvg_displayName);

        class TransportItems {
            class GVAR(Hawk_NVG) {
                name = QGVAR(Hawk_NVG);
                count = 1;
            };
        };
    };

    class GVAR(item_Falcon): GVAR(item_Buzzard) {
        displayName = CSTRING(falcon_displayName);

        class TransportItems {
            class GVAR(Falcon) {
                name = QGVAR(Falcon);
                count = 1;
            };
        };
    };

    class GVAR(item_Falcon_NVG): GVAR(item_Falcon) {
        displayName = CSTRING(falcon_nvg_displayName);

        class TransportItems {
            class GVAR(Falcon_NVG) {
                name = QGVAR(Falcon_NVG);
                count = 1;
            };
        };
    };

    class GVAR(item_Eagle): GVAR(item_Buzzard) {
        displayName = CSTRING(eagle_displayName);

        class TransportItems {
            class GVAR(Eagle) {
                name = QGVAR(Eagle);
                count = 1;
            };
        };
    };

    class GVAR(item_Eagle_NVG): GVAR(item_Eagle) {
        displayName = CSTRING(eagle_nvg_displayName);

        class TransportItems {
            class GVAR(Eagle_NVG) {
                name = QGVAR(Eagle_NVG);
                count = 1;
            };
        };
    };

    //Crew
    class Headgear_H_HelmetCrew_I;
    class GVAR(item_crew_bronze): Headgear_H_HelmetCrew_I {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        displayname = CSTRING(bronze_vehiclecrew_displayName);
        scope = 2;

        class TransportItems {
            class GVAR(Bronze_Vehiclecrew) {
                name = QGVAR(Bronze_Vehiclecrew);
                count = 1;
            };
        };
    };

    class GVAR(item_crew_grey): GVAR(item_crew_bronze) {
        displayname = CSTRING(grey_vehiclecrew_displayName);

        class TransportItems {
            class GVAR(Grey_Vehiclecrew) {
                name = QGVAR(Grey_Vehiclecrew);
                count = 1;
            };
        };
    };

    class GVAR(item_crew_silver): GVAR(item_crew_bronze) {
        displayname = CSTRING(silver_vehiclecrew_displayName);

        class TransportItems {
            class GVAR(Silver_Vehiclecrew) {
                name = QGVAR(Silver_Vehiclecrew);
                count = 1;
            };
        };
    };

    class GVAR(item_crew_yellow): GVAR(item_crew_bronze) {
        displayname = CSTRING(yellow_vehiclecrew_displayName);

        class TransportItems {
            class GVAR(Yellow_Vehiclecrew) {
                name = QGVAR(Yellow_Vehiclecrew);
                count = 1;
            };
        };
    };

    class Headgear_H_HelmetB;

    //Fleck Tarn
    class GVAR(Item_bw_fleck_1): Headgear_H_HelmetB {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        displayName = CSTRING(helmet_1_bw_flecktarn_displayName);
        scope = 2;

        class TransportItems {
            class GVAR(1_BW_Flecktarn) {
                name = QGVAR(1_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_2): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_2_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(2_BW_Flecktarn) {
                name = QGVAR(2_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_3): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_3_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(3_BW_Flecktarn) {
                name = QGVAR(3_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_4): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_4_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(4_BW_Flecktarn) {
                name = QGVAR(4_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_5): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_5_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(5_BW_Flecktarn) {
                name = QGVAR(5_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_6): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_6_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(6_BW_Flecktarn) {
                name = QGVAR(6_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_7): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_7_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(7_BW_Flecktarn) {
                name = QGVAR(7_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_8): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_8_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(8_BW_Flecktarn) {
                name = QGVAR(8_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_9): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_9_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(9_BW_Flecktarn) {
                name = QGVAR(9_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_10): GVAR(Item_bw_fleck_1) {
        displayName = CSTRING(helmet_10_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(10_BW_Flecktarn) {
                name = QGVAR(10_BW_Flecktarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_fleck_11): GVAR(Item_bw_fleck_1) {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        displayName = CSTRING(helmet_11_bw_flecktarn_displayName);

        class TransportItems {
            class GVAR(11_BW_Flecktarn) {
                name = QGVAR(11_BW_Flecktarn);
                count = 1;
            };
        };
    };

    //Tropentarn
    class GVAR(Item_bw_tropen_1): Headgear_H_HelmetB {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        displayName = CSTRING(helmet_1_bw_tropentarn_displayName);
        scope = 2;

        class TransportItems {
            class GVAR(1_BW_Tropentarn) {
                name = QGVAR(1_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_2): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_2_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(2_BW_Tropentarn) {
                name = QGVAR(2_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_3): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_3_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(3_BW_Tropentarn) {
                name = QGVAR(3_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_4): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_4_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(4_BW_Tropentarn) {
                name = QGVAR(4_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_5): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_5_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(5_BW_Tropentarn) {
                name = QGVAR(5_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_6): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_6_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(6_BW_Tropentarn) {
                name = QGVAR(6_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_7): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_7_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(7_BW_Tropentarn) {
                name = QGVAR(7_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_8): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_8_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(8_BW_Tropentarn) {
                name = QGVAR(8_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_9): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_9_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(9_BW_Tropentarn) {
                name = QGVAR(9_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_10): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_10_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(10_BW_Tropentarn) {
                name = QGVAR(10_BW_Tropentarn);
                count = 1;
            };
        };
    };

    class GVAR(Item_bw_tropen_11): GVAR(Item_bw_tropen_1) {
        displayName = CSTRING(helmet_11_bw_tropentarn_displayName);

        class TransportItems {
            class GVAR(11_BW_Tropentarn) {
                name = QGVAR(11_BW_Tropentarn);
                count = 1;
            };
        };
    };

    //US Desert
    class GVAR(Item_us_desert_1): Headgear_H_HelmetB {
        displayName = CSTRING(helmet_1_us_desert_displayName);
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        scope = 2;

        class TransportItems {
            class GVAR(1_us_desert) {
                name = QGVAR(1_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_2): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_2_us_desert_displayName);

        class TransportItems {
            class GVAR(2_us_desert) {
                name = QGVAR(2_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_3): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_3_us_desert_displayName);

        class TransportItems {
            class GVAR(3_us_desert) {
                name = QGVAR(3_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_4): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_4_us_desert_displayName);

        class TransportItems {
            class GVAR(4_us_desert) {
                name = QGVAR(4_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_5): GVAR(Item_us_desert_1) {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        displayName = CSTRING(helmet_5_us_desert_displayName);

        class TransportItems {
            class GVAR(5_us_desert) {
                name = QGVAR(5_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_6): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_6_us_desert_displayName);

        class TransportItems {
            class GVAR(6_us_desert) {
                name = QGVAR(6_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_7): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_7_us_desert_displayName);

        class TransportItems {
            class GVAR(7_us_desert) {
                name = QGVAR(7_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_8): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_8_us_desert_displayName);

        class TransportItems {
            class GVAR(8_us_desert) {
                name = QGVAR(8_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_9): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_9_us_desert_displayName);

        class TransportItems {
            class GVAR(9_us_desert) {
                name = QGVAR(9_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_10): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_10_us_desert_displayName);

        class TransportItems {
            class GVAR(10_us_desert) {
                name = QGVAR(10_US_Desert);
                count = 1;
            };
        };
    };

    class GVAR(Item_us_desert_11): GVAR(Item_us_desert_1) {
        displayName = CSTRING(helmet_11_us_desert_displayName);

        class TransportItems {
            class GVAR(11_us_desert) {
                name = QGVAR(11_US_Desert);
                count = 1;
            };
        };
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/Eden placements
    //referencing them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_Helmet_item_Buzzard: GVAR(item_Buzzard) { scope = 1; };
    class ttt_Helmet_item_Buzzard_NVG: GVAR(item_Buzzard_NVG) { scope = 1; };
    class ttt_Helmet_item_hawk: GVAR(item_hawk) { scope = 1; };
    class ttt_Helmet_item_Hawk_NVG: GVAR(item_Hawk_NVG) { scope = 1; };
    class ttt_Helmet_item_Falcon: GVAR(item_Falcon) { scope = 1; };
    class ttt_Helmet_item_Falcon_NVG: GVAR(item_Falcon_NVG) { scope = 1; };
    class ttt_Helmet_item_Eagle: GVAR(item_Eagle) { scope = 1; };
    class ttt_Helmet_item_Eagle_NVG: GVAR(item_Eagle_NVG) { scope = 1; };

    class ttt_Helmet_item_crew_bronze: GVAR(item_crew_bronze) { scope = 1; };
    class ttt_Helmet_item_crew_grey: GVAR(item_crew_grey) { scope = 1; };
    class ttt_Helmet_item_crew_silver: GVAR(item_crew_silver) { scope = 1; };
    class ttt_Helmet_item_crew_yellow: GVAR(item_crew_yellow) { scope = 1; };

    class ttt_Helmet_Item_bw_fleck_1: GVAR(Item_bw_fleck_1) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_2: GVAR(Item_bw_fleck_2) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_3: GVAR(Item_bw_fleck_3) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_4: GVAR(Item_bw_fleck_4) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_5: GVAR(Item_bw_fleck_5) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_6: GVAR(Item_bw_fleck_6) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_7: GVAR(Item_bw_fleck_7) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_8: GVAR(Item_bw_fleck_8) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_9: GVAR(Item_bw_fleck_9) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_10: GVAR(Item_bw_fleck_10) { scope = 1; };
    class ttt_Helmet_Item_bw_fleck_11: GVAR(Item_bw_fleck_11) { scope = 1; };

    class ttt_Helmet_Item_bw_tropen_1: GVAR(Item_bw_tropen_1) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_2: GVAR(Item_bw_tropen_2) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_3: GVAR(Item_bw_tropen_3) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_4: GVAR(Item_bw_tropen_4) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_5: GVAR(Item_bw_tropen_5) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_6: GVAR(Item_bw_tropen_6) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_7: GVAR(Item_bw_tropen_7) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_8: GVAR(Item_bw_tropen_8) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_9: GVAR(Item_bw_tropen_9) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_10: GVAR(Item_bw_tropen_10) { scope = 1; };
    class ttt_Helmet_Item_bw_tropen_11: GVAR(Item_bw_tropen_11) { scope = 1; };

    class ttt_Helmet_Item_us_desert_1: GVAR(Item_us_desert_1) { scope = 1; };
    class ttt_Helmet_Item_us_desert_2: GVAR(Item_us_desert_2) { scope = 1; };
    class ttt_Helmet_Item_us_desert_3: GVAR(Item_us_desert_3) { scope = 1; };
    class ttt_Helmet_Item_us_desert_4: GVAR(Item_us_desert_4) { scope = 1; };
    class ttt_Helmet_Item_us_desert_5: GVAR(Item_us_desert_5) { scope = 1; };
    class ttt_Helmet_Item_us_desert_6: GVAR(Item_us_desert_6) { scope = 1; };
    class ttt_Helmet_Item_us_desert_7: GVAR(Item_us_desert_7) { scope = 1; };
    class ttt_Helmet_Item_us_desert_8: GVAR(Item_us_desert_8) { scope = 1; };
    class ttt_Helmet_Item_us_desert_9: GVAR(Item_us_desert_9) { scope = 1; };
    class ttt_Helmet_Item_us_desert_10: GVAR(Item_us_desert_10) { scope = 1; };
    class ttt_Helmet_Item_us_desert_11: GVAR(Item_us_desert_11) { scope = 1; };
};
