class CfgGroups {
    class West {   // BLUFOR
        name = "BLUFOR";

        class  GVAR(faction_flecktarn) {
            name = "TTT Flecktarn";

            class Infantry{
                name = "Fire Team";

                class MyMod_Fireteam
                {
                    name = "Fireteam";
                    side = 1;
                    faction = QGVAR(faction_flecktarn);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0
                    {
                        side = 1;
                        vehicle = QGVAR(base);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };

                    class Unit1
                    {
                        side = 1;
                        vehicle = QGVAR(base);
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };

                    class Unit2
                    {
                        side = 1;
                        vehicle = QGVAR(base);
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };

                    class Unit3
                    {
                        side = 1;
                        vehicle = QGVAR(base);
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                };
            };
        };
    };
};
