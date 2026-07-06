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

    class AND_Module_Surrender : Module_F {
        scope = 2;
        displayName = "AI Surrender When Outnumbered";
        category = "AND_Modules";
        function = "FUNC(checkSurrender)";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;

        class Attributes {
            class EnemySides {
                displayName = "Enemy Sides";
                tooltip = "Which sides should be considered enemy units.";
                control = "Combo";
                property = "AND_EnemySides";
                typeName = "STRING";
                defaultValue = "OPF_F";

                class Values {
                    class BLUFOR {name = "BLUFOR"; value = "BLU_F";};
                    class OPFOR {name = "OPFOR"; value = "OPF_F";};
                    class INDEP  {name = "INDEP"; value = "IND_F";};
                };
            };

            class SurrenderChance {
                displayName = "Chance to Surrender";
                tooltip = "Probability (0-1) that an outnumbered unit will surrender.";
                control = "Edit";
                property = "AND_SurrenderChance";
                typeName = "NUMBER";
                defaultValue = "0.5";
            };

            class OutnumberRatio {
                displayName = "Outnumbered Ratio";
                tooltip = "If enemies ≥ ratio x friendlies, unit may surrender.";
                control = "Edit";
                property = "AND_OutnumberRatio";
                typeName = "NUMBER";
                defaultValue = "2.0";
            };
        };
    };
};
