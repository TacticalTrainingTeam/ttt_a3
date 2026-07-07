class CfgVehicles {
    class Logic;
    class Module_F: Logic
    {
        class AttributesBase
        {
            class Edit;
            class Combo;
            class Checkbox;
            class Slider;
        };
    };

    class GVAR(module) : Module_F {
        scope = 2;
        displayName = "AI Surrender When Outnumbered";
        category = QGVAR(Modules);
        function = QFUNC(checkSurrender);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;

        class Attributes {
            class EnemySides {
                displayName = "Enemy Sides";
                tooltip = "Which sides should be considered enemy units.";
                control = "Combo";
                property = QGVAR(EnemySides);
                typeName = "STRING";
                defaultValue = "OPF_F";

                class Values {
                    class BLUFOR {name = "BLUFOR"; value = "BLU_F";};
                    class OPFOR {name = "OPFOR"; value = "OPF_F";};
                    class INDEP  {name = "INDEP"; value = "IND_F";};
                };
            };

            class FriendlySides {
                displayName = "Friendly Sides";
                tooltip = "Which sides should be considered friendly units.";
                control = "Combo";
                property = QGVAR(FriendlySides);
                typeName = "STRING";
                defaultValue = "BLU_F";

                class Values {
                    class BLUFOR {name = "BLUFOR"; value = "BLU_F";};
                    class OPFOR {name = "OPFOR"; value = "OPF_F";};
                    class INDEP  {name = "INDEP"; value = "IND_F";};
                };
            };

            class SurrenderChance {
                displayName = "Chance to Surrender";
                tooltip = "Probability (0-1) that an outnumbered unit will surrender.";
                control = "Slider";
                property = QGVAR(SurrenderChance);
                typeName = "NUMBER";
                defaultValue = "0.5";
            };

            class OutnumberRatio {
                displayName = "Outnumbered Ratio";
                tooltip = "If enemies ≥ ratio x friendlies, unit may surrender.";
                control = "Slider";
                property = QGVAR(OutnumberRatio);
                typeName = "NUMBER";
                defaultValue = "2.0";
            };
        };
    };
};
