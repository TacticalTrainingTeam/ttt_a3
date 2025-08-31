class CfgVehicles {

    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Default;
            class Edit;                                                                      // Default edit box (i.e. text input field)
            class Combo;                                                                     // Default combo box (i.e. drop-down menu)
            class Checkbox;                                                                  // Default checkbox (returned value is Boolean)
            class CheckboxNumber;                                                            // Default checkbox (returned value is Number)
            class ModuleDescription;                                                         // Module description
            class Units;                                                                     // Selection of units on which the module is applied
        };

        class ModuleDescription {
            class AnyBrain;
        };
    };

    class GVAR(initSurrenderModule): Module_F {
        scope = 2;                                                                           // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = CSTRING(displayName);                                                  // Name displayed in the menu
        icon = "\a3\Modules_F_Curator\Data\iconFlare_ca.paa";                                // Map icon. Delete this entry to use the default icon.
        portrait = "\a3\Modules_F_Curator\Data\portraitWeather_ca.paa";
        function = QFUNC(surrender);                                                         // Name of function triggered once conditions are met
        functionPriority = 20;                                                               // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        isGlobal = 0;                                                                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 1;                                                              // 1 for module waiting until all synced triggers are activated
        isDisposable = 1;                                                                    // 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
        author = "EinStein";

        canSetArea = 1;                                                                      // Allows for setting the area values in the Attributes menu in 3DEN
        canSetAreaShape = 1;                                                                 // Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN

        class AttributeValues
        {
            // This section allows you to set the default values for the attributes menu in 3DEN
            size3[] = { 50, 50, -1 };                                                        // 3D size (x-axis radius, y-axis radius, z-axis radius)
            isRectangle = 0;                                                                 // Sets if the default shape should be a rectangle or ellipse
        };

        class Attributes: AttributesBase {
            class GVAR(surrenderModule_unitCount): Edit {
            property = QGVAR(surrenderModule_unitCount);                                     // Unique property
            displayName = CSTRING(unitCount_displayName);                                    // Argument label
            tooltip = CSTRING(unitCount_tooltip);                                            // Tooltip description
            typeName = "NUMBER";                                                             // Value type, can be "NUMBER", "STRING" or "BOOL"
            defaultValue = "5";                                                              // Default attribute value. Warning: this is an expression, and its returned value will be used
            };

            class GVAR(surrenderModule_probability): Edit {
            property = QGVAR(surrenderModule_probability);                                   // Unique property
            displayName = CSTRING(probability_displayName);                                  // Argument label
            tooltip = CSTRING(probability_tooltip);                                          // Tooltip description
            typeName = "NUMBER";                                                             // Value type, can be "NUMBER", "STRING" or "BOOL"
            defaultValue = "50";                                                             // Default attribute value. Warning: this is an expression, and its returned value will be used
            };

            class GVAR(surrenderModule_side): Combo {
                property = QGVAR(surrenderModule_side);
                displayName = CSTRING(side_displayName);
                tooltip = CSTRING(side_tooltip);
                typeName = "NUMBER";
                defaultValue = "1";

                // Listbox items
                class Values {
                    class we { name = "Blufor"; value = 0; };
                    class ea { name = "Opfor"; value = 1; };
                    class gu { name = "Greenfor"; value = 2; };
                };
            };
            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(module_description);
        };
    };
};
