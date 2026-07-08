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
        displayName = CSTRING(module_displayName);
        //category = "";
        function = QFUNC(checkSurrender);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;
        canSetArea = 1;

        class AttributeValues {
            // This section allows you to set the default values for the attributes menu in 3DEN
            size3[] = { 50, 50, -1 };                                                        // 3D size (x-axis radius, y-axis radius, z-axis radius)
            isRectangle = 0;                                                                 // Sets if the default shape should be a rectangle or ellipse
        };

        class Attributes: AttributesBase {
            class GVAR(EnemySides): Combo {
                displayName = CSTRING(EnemySides_displayName);
                tooltip = CSTRING(EnemySides_tooltip);
                control = "Combo";
                property = QGVAR(Module_EnemySides);
                typeName = "STRING";
                defaultValue = "OPF_F";

                class Values {
                    class BLUFOR {name = "BLUFOR"; value = "BLU_F";};
                    class OPFOR {name = "OPFOR"; value = "OPF_F";};
                    class INDEP {name = "INDEP"; value = "IND_F";};
                };
            };

            class GVAR(FriendlySides): Combo {
                displayName = CSTRING(FriendlySides_displayName);
                tooltip = CSTRING(FriendlySides_tooltip);
                control = "Combo";
                property = QGVAR(Module_FriendlySides);
                typeName = "STRING";
                defaultValue = "BLU_F";

                class Values {
                    class BLUFOR {name = "BLUFOR"; value = "BLU_F";};
                    class OPFOR {name = "OPFOR"; value = "OPF_F";};
                    class INDEP  {name = "INDEP"; value = "IND_F";};
                };
            };

            class GVAR(SurrenderChance): Slider {
                displayName = CSTRING(SurrenderChance_displayName);
                tooltip = CSTRING(SurrenderChance_tooltip);
                control = "Slider";
                property = QGVAR(Module_SurrenderChance);
                typeName = "NUMBER";
                defaultValue = "0.01";
            };

            class GVAR(OutnumberRatio): Combo {
                displayName = CSTRING(OutnumberRatio_displayName);
                tooltip = CSTRING(OutnumberRatio_tooltip);
                property = QGVAR(Module_OutumberRatio);
                typeName = "NUMBER";
                defaultValue = "2";

                class Values {
                    class _1x {name = "1x"; value = 1;};
                    class _2x {name = "2x"; value = 2;};
                    class _3x {name = "3x"; value = 3;};
                };
            };

            class ModuleDescription: ModuleDescription {
                description = CSTRING(module_description);
            };
        };
    };
};
