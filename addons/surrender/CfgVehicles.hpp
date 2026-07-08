class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Combo;
            class Slider;
        };

        class ModuleDescription {};
    };

    class GVAR(module): Module_F {
        scope = 2;
        displayName = "AI Surrender When Outnumbered";
        category = ECSTRING(effects,category_environment);
        function = QFUNC(checkSurrender);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;
        canSetArea = 1;
        canSetAreaShape = 1;

        class AttributeValues {
            // This section allows you to set the default values for the attributes menu in 3DEN
            size3[] = { 50, 50, -1 };                                                        // 3D size (x-axis radius, y-axis radius, z-axis radius)
            isRectangle = 0;                                                                 // Sets if the default shape should be a rectangle or ellipse
        };

        class Attributes: AttributesBase {
            class GVAR(EnemySides): Combo {
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

            class GVAR(FriendlySides): Combo {
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

            class GVAR(SurrenderChance): Slider {
                displayName = "Chance to Surrender";
                tooltip = "Probability (0-1) that an outnumbered unit will surrender.";
                control = "Slider";
                property = QGVAR(SurrenderChance);
                typeName = "NUMBER";
                defaultValue = "0.5";
            };

            class GVAR(OutnumberRatio): Slider {
                displayName = "Outnumbered Ratio";
                tooltip = "If enemies ≥ ratio x friendlies, unit may surrender.";
                control = "Slider";
                property = QGVAR(OutnumberRatio);
                typeName = "NUMBER";
                defaultValue = "2.0";
            };

            class ModuleDescription: ModuleDescription {
                description = "This module will cause AI units to surrender when outnumbered.";
            };
        };
    };
};
