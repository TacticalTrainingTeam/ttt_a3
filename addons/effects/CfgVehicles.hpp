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

    class GVAR(initStormModule): Module_F {
        scope = 2;                                                                           // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = CSTRING(stormModule_displayName);                                      // Name displayed in the menu
        icon = "\a3\Modules_F_Curator\Data\iconSmoke_ca.paa";                                // Map icon. Delete this entry to use the default icon.
        category = CSTRING(category_environment);
        function = QFUNC(stormInitModule);                                                   // Name of function triggered once conditions are met
        functionPriority = 10;                                                               // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        isGlobal = 0;                                                                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 1;                                                              // 1 for module waiting until all synced triggers are activated
        isDisposable = 1;                                                                    // 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
        author = "EinStein";

        class Attributes: AttributesBase {
            class GVAR(stormModule_duration): Edit {
                property = QGVAR(stormModule_duration);                                      // Unique property
                displayName = CSTRING(stormModule_duration_displayName);                     // Argument label
                tooltip = CSTRING(stormModule_duration_tooltip);                             // Tooltip description
                typeName = "NUMBER";                                                         // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "300";                                                        // Default attribute value. Warning: this is an expression, and its returned value will be used
            };

            class GVAR(stormModule_effect): Checkbox {
                property = QGVAR(stormModule_effect);
                displayName = CSTRING(stormModule_effect_displayName);
                tooltip = CSTRING(stormModule_effect_tooltip);
                typeName = "BOOL";
                defaultValue = "false";
            };

            class GVAR(stormModule_stormType): Combo {
                property = QGVAR(stormModule_stormType);
                displayName = CSTRING(stormModule_stormType_displayName); 
                tooltip = CSTRING(stormModule_stormType_tooltip); 
                typeName = "NUMBER";
                defaultValue = "0";

                // Listbox items
                class Values {
                    class sand { name = CSTRING(stormModule_stormType_sandstorm); value = 0; };
                    class snow { name = CSTRING(stormModule_stormType_snowstorm); value = 1; };
                };
            };
            
            class GVAR(stormModule_walk): Checkbox {
                property = QGVAR(stormModule_walk);
                displayName = CSTRING(stormModule_walk_displayName);
                tooltip = CSTRING(stormModule_walk_tooltip);
                typeName = "BOOL";
                defaultValue = "true";
            };

            class GVAR(stormModule_direction): Edit {
                property = QGVAR(stormModule_direction);
                displayName = CSTRING(stormModule_direction_displayName);
                tooltip = CSTRING(stormModule_direction_tooltip);
                typeName = "NUMBER";
                defaultValue = "0";
            };

            class ModuleDescription: ModuleDescription {};
        };
        
        class ModuleDescription: ModuleDescription {
            description = CSTRING(stormModule_description);
        };
    };

    class GVAR(snowModule): GVAR(initStormModule) {
        displayName = CSTRING(snowModule_displayName);                                       // Name displayed in the menu
        function = QFUNC(snowModule);                                                        // Name of function triggered once conditions are met
        isGlobal = 1;                                                                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution

        class Attributes: AttributesBase {
            class GVAR(snowModule_intensity): Edit {
                property = QGVAR(snowModule_intensity);                                      // Unique property
                displayName = CSTRING(snowModule_intensity_displayName);                     // Argument label
                tooltip = CSTRING(snowModule_intensity_tooltip);                             // Tooltip description
                typeName = "NUMBER";                                                         // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "50";                                                         // Default attribute value. Warning: this is an expression, and its returned value will be used
            };

            class ModuleDescription: ModuleDescription {};
        };
        
        class ModuleDescription: ModuleDescription {
            description = CSTRING(snowModule_description);
        };
    };

        class GVAR(condensedBreathModule): GVAR(initStormModule) {
        displayName = CSTRING(condensedBreathModule_displayName);                            // Name displayed in the menu
        category = CSTRING(category_effects);
        function = QFUNC(condensedBreath);                                                   // Name of function triggered once conditions are met
        isGlobal = 1;                                                                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        
        class Attributes: AttributesBase {                                                   // otherweise inherited from initStormModule with five attributes
            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(condensedBreathModule_description);
        };
    };
};