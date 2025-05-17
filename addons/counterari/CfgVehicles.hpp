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

    class GVAR(registerEnemyAriModule): Module_F {
        scope = 2;
        displayName = CSTRING(registerEnemyAriModule_displayName);
        icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
        category = "Supports";
        function = QFUNC(initEnemyAri); 
        isGlobal = 1;

        class Attributes: AttributesBase {
            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(registerEnemyAriModule_description);
        };
    };

    class GVAR(registerFriendlyAriModule): Module_F {
        scope = 2;
        displayName = CSTRING(registerFriendlyAriModule_displayName);
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        category = "Supports";
        function = QFUNC(initFriendlyAri);
        isGlobal = 1;
        
        class Attributes: AttributesBase {
            class GVAR(registerFriendlyAriModule_radius): Edit {
                property = QGVAR(registerFriendlyAriModule_radius);
                displayName = CSTRING(registerFriendlyAriModule_radius_displayName);
                tooltip = CSTRING(registerFriendlyAriModule_radius_tooltip);
                typeName = "NUMBER";
                defaultValue = "100";
            };

            class GVAR(registerFriendlyAriModule_rounds): Edit {
                property = QGVAR(registerFriendlyAriModule_rounds);
                displayName = CSTRING(registerFriendlyAriModule_rounds_displayName);
                tooltip = CSTRING(registerFriendlyAriModule_rounds_tooltip);
                typeName = "NUMBER";
                defaultValue = "5";
            };

            class GVAR(registerFriendlyAriModule_decrementing): Checkbox {
                property = QGVAR(registerFriendlyAriModule_decrementing);
                displayName = CSTRING(registerFriendlyAriModule_decrementing_displayName);
                tooltip = CSTRING(registerFriendlyAriModule_decrementing_tooltip);
                typeName = "BOOL";
                defaultValue = "true";
            };

            class GVAR(registerFriendlyAriModule_delay): Edit {
                property = QGVAR(registerFriendlyAriModule_delay);
                displayName = CSTRING(registerFriendlyAriModule_delay_displayName);
                tooltip = CSTRING(registerFriendlyAriModule_delay_tooltip);
                typeName = "NUMBER";
                defaultValue = "5";
            };
            
            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(registerFriendlyAriModule_description);
        };
    };
};