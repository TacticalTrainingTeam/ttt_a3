class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Combo;
            class Slider;
            class Checkbox;
            class ModuleDescription;
        };

        class ModuleDescription;
    };

    class ttt_surrender_module: Module_F {
        scope = 2;
        //scopeCurator = 2;
        displayName = CSTRING(module_displayName);
        function = QFUNC(checkSurrender);
        functionPriority = 1;
        isGlobal = 2;
        canSetArea = 1;
        is3DEN = 0;

        class AttributeValues {
			// This section allows you to set the default values for the attributes menu in 3DEN
			size3[] = { 100, 100, -1 };		// 3D size (x-axis radius, y-axis radius, z-axis radius)
			isRectangle = 0;				// Sets if the default shape should be a rectangle or ellipse
        };

        class Attributes: AttributesBase {
            class EnemySide: Combo {
                displayName = CSTRING(EnemySides_displayName);
                tooltip = CSTRING(EnemySides_tooltip);
                property = "ttt_surrender_module_EnemySide";
                typeName = "NUMBER";
                defaultValue = 2;
                control = "Combo";

                class Values {
                  class BLUFOR {name = "$STR_WEST"; value = 1;};
                    class OPFOR {name = "$STR_east"; value = 2;};
                    class INDEP  {name = "$STR_guerrila"; value = 3;};
                };
            };

            class FriendlySide: Combo {
                displayName = CSTRING(FriendlySides_displayName);
                tooltip = CSTRING(FriendlySides_tooltip);
                property = "ttt_surrender_module_FriendlySide";
                typeName = "NUMBER";
                defaultValue = 1;
                control = "Combo";

                class Values {
                    class BLUFOR {name = "$STR_WEST"; value = 1;};
                    class OPFOR {name = "$STR_east"; value = 2;};
                    class INDEP  {name = "$STR_guerrila"; value = 3;};
                };
            };

            class SurrenderChance: Slider {
                displayName = CSTRING(SurrenderChance_displayName);
                tooltip = CSTRING(SurrenderChance_tooltip);
                property = "ttt_surrender_module_SurrenderChance";
                typeName = "NUMBER";
                defaultValue = "0.5";
                control = "Slider";
            };

            class OutnumberRatio: Combo {
                displayName = CSTRING(OutnumberRatio_displayName);
                tooltip = CSTRING(OutnumberRatio_tooltip);
                property = "ttt_surrender_module_OutnumberRatio";
                typeName = "NUMBER";
                defaultValue = "2";
                control = "Combo";

                class Values {
                    class _1x {name = "1x"; value = 1;};
                    class _2x {name = "2x"; value = 2;};
                    class _3x {name = "3x"; value = 3;};
                };
            };

            class DropWeapon: Checkbox {
                displayName = CSTRING(dropWeapon_displayName);
                tooltip = CSTRING(dropWeapon_tooltip);
                property = "ttt_surrender_module_dropWeapon";
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
