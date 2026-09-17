class CfgVehicles {
    class Headgear_H_Beret_02;

    class GVAR(Item_Blue): Headgear_H_Beret_02 {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Reimchen"};
        displayName = CSTRING(blue);
        scope = 2;

        class TransportItems {
            class GVAR(Blue) {
                name = QGVAR(Blue);
                count = 1;
            };
        };
    };

    class GVAR(Item_Brown): GVAR(Item_Blue) {
        displayName = CSTRING(brown);

        class TransportItems {
            class GVAR(Brown) {
                name = QGVAR(Brown);
                count = 1;
            };
        };
    };

    class GVAR(Item_Bronze): GVAR(Item_Blue) {
        displayName = CSTRING(bronze);

        class TransportItems {
            class GVAR(Bronze) {
                name = QGVAR(Bronze);
                count = 1;
            };
        };
    };

    class GVAR(Item_Yellow): GVAR(Item_Blue) {
        displayName = CSTRING(yellow);

        class TransportItems {
            class GVAR(Yellow) {
                name = QGVAR(Yellow);
                count = 1;
            };
        };
    };

    class GVAR(Item_Gold): GVAR(Item_Blue) {
        displayName = CSTRING(gold);

        class TransportItems {
            class GVAR(Gold) {
                name = QGVAR(Gold);
                count = 1;
            };
        };
    };

    class GVAR(Item_Grey): GVAR(Item_Blue) {
        displayName = CSTRING(grey);

        class TransportItems {
            class GVAR(Grey) {
                name = QGVAR(Grey);
                count = 1;
            };
        };
    };

    class GVAR(Item_Green): GVAR(Item_Blue) {
        displayName = CSTRING(green);

        class TransportItems {
            class GVAR(Green) {
                name = QGVAR(Green);
                count = 1;
            };
        };
    };

    class GVAR(Item_Logo): GVAR(Item_Blue) {
        displayName = CSTRING(logo);

        class TransportItems {
            class GVAR(Logo) {
                name = QGVAR(Logo);
                count = 1;
            };
        };
    };

    class GVAR(Item_Platinum): GVAR(Item_Blue) {
        displayName = CSTRING(platinum);

        class TransportItems {
            class GVAR(Platinum) {
                name = QGVAR(Platinum);
                count = 1;
            };
        };
    };

    class GVAR(Item_Red): GVAR(Item_Blue) {
        displayName = CSTRING(red);

        class TransportItems {
            class GVAR(Red) {
                name = QGVAR(Red);
                count = 1;
            };
        };
    };

    class GVAR(Item_Black): GVAR(Item_Blue) {
        displayName = CSTRING(black);

        class TransportItems {
            class GVAR(Black) {
                name = QGVAR(Black);
                count = 1;
            };
        };
    };

    class GVAR(Item_Silver): GVAR(Item_Blue) {
        displayName = CSTRING(silver);

        class TransportItems {
            class GVAR(Silver) {
                name = QGVAR(Silver);
                count = 1;
            };
        };
    };

    class GVAR(Item_Violet): GVAR(Item_Blue) {
        displayName = CSTRING(violet);

        class TransportItems {
            class GVAR(Violet) {
                name = QGVAR(Violet);
                count = 1;
            };
        };
    };

    class GVAR(Item_White): GVAR(Item_Blue) {
        displayName = CSTRING(white);

        class TransportItems {
            class GVAR(White) {
                name = QGVAR(White);
                count = 1;
            };
        };
    };

    class GVAR(Item_Orange): GVAR(Item_Blue) {
        displayName = CSTRING(orange);

        class TransportItems {
            class GVAR(Orange) {
                name = QGVAR(Orange);
                count = 1;
            };
        };
    };

    //Legacy classnames - kept as scope=1 aliases so old missions/Eden placements
    //referencing them by the pre-GVAR name still resolve, without offering them for new use.
    class ttt_Beret_Item_Blue: GVAR(Item_Blue) { scope = 1; };
    class ttt_Beret_Item_Brown: GVAR(Item_Brown) { scope = 1; };
    class ttt_Beret_Item_Bronze: GVAR(Item_Bronze) { scope = 1; };
    class ttt_Beret_Item_Yellow: GVAR(Item_Yellow) { scope = 1; };
    class ttt_Beret_Item_Gold: GVAR(Item_Gold) { scope = 1; };
    class ttt_Beret_Item_Grey: GVAR(Item_Grey) { scope = 1; };
    class ttt_Beret_Item_Green: GVAR(Item_Green) { scope = 1; };
    class ttt_Beret_Item_Logo: GVAR(Item_Logo) { scope = 1; };
    class ttt_Beret_Item_Platinum: GVAR(Item_Platinum) { scope = 1; };
    class ttt_Beret_Item_Red: GVAR(Item_Red) { scope = 1; };
    class ttt_Beret_Item_Black: GVAR(Item_Black) { scope = 1; };
    class ttt_Beret_Item_Silver: GVAR(Item_Silver) { scope = 1; };
    class ttt_Beret_Item_Violet: GVAR(Item_Violet) { scope = 1; };
    class ttt_Beret_Item_White: GVAR(Item_White) { scope = 1; };
    class ttt_Beret_Item_Orange: GVAR(Item_Orange) { scope = 1; };
};
