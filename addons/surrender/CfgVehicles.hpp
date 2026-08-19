class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Combo;
            class Checkbox;
        };

        class ModuleDescription;
    };

    class GVAR(module): Module_F {
        scope = 2;
        //scopeCurator = 2;
        displayName = CSTRING(module_displayName);
        function = QFUNC(checkSurrender);
        functionPriority = 1;
        isGlobal = 0;                                                                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        canSetArea = 1;
        is3DEN = 0;

        class AttributeValues {
            // This section allows you to set the default values for the attributes menu in 3DEN
            size3[] = { 100, 100, -1 };        // 3D size (x-axis radius, y-axis radius, z-axis radius)
            isRectangle = 0;                // Sets if the default shape should be a rectangle or ellipse
        };

        class Attributes: AttributesBase {
            class GVAR(EnemySide): Combo {
                displayName = CSTRING(EnemySides_displayName);
                tooltip = CSTRING(EnemySides_tooltip);
                property = QGVAR(EnemySide);
                typeName = "NUMBER";
                defaultValue = 2;
                control = "Combo";

                class Values {
                  class BLUFOR {name = "$STR_WEST"; value = 1;};
                    class OPFOR {name = "$STR_east"; value = 2;};
                    class INDEP  {name = "$STR_guerrila"; value = 3;};
                };
            };

            class GVAR(FriendlySide): Combo {
                displayName = CSTRING(FriendlySides_displayName);
                tooltip = CSTRING(FriendlySides_tooltip);
                property = QGVAR(FriendlySide);
                typeName = "NUMBER";
                defaultValue = 1;
                control = "Combo";

                class Values {
                    class BLUFOR {name = "$STR_WEST"; value = 1;};
                    class OPFOR {name = "$STR_east"; value = 2;};
                    class INDEP  {name = "$STR_guerrila"; value = 3;};
                };
            };

            class GVAR(SurrenderChance): Combo {
                displayName = CSTRING(SurrenderChance_displayName);
                tooltip = CSTRING(SurrenderChance_tooltip);
                property = QGVAR(SurrenderChance);
                typeName = "NUMBER";
                defaultValue = "0.5";
                control = "Combo";

                class Values {
                    class _01 {name = "0.1"; value = 0.1;};
                    class _03 {name = "0.3"; value = 0.3;};
                    class _05 {name = "0.5"; value = 0.5;};
                    class _07 {name = "0.7"; value = 0.7;};
                    class _09 {name = "0.9"; value = 0.9;};
                    class _10 {name = "1.0"; value = 1.0;};
                };
            };

            class GVAR(OutnumberRatio): Combo {
                displayName = CSTRING(OutnumberRatio_displayName);
                tooltip = CSTRING(OutnumberRatio_tooltip);
                property = QGVAR(OutnumberRatio);
                typeName = "NUMBER";
                defaultValue = "2";
                control = "Combo";

                class Values {
                    class _1x {name = "1x"; value = 1;};
                    class _2x {name = "2x"; value = 2;};
                    class _3x {name = "3x"; value = 3;};
                };
            };

            class GVAR(DropWeapon): Checkbox {
                displayName = CSTRING(dropWeapon_displayName);
                tooltip = CSTRING(dropWeapon_tooltip);
                property = QGVAR(DropWeapon);
                typeName = "BOOL";
                defaultValue = 0;
                control = "Checkbox";
            };
        };
        class ModuleDescription: ModuleDescription {
            description = CSTRING(module_description);
        };
    };
};
