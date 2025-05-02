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

    class GVAR(enemy_ari): Module_F {
        scope = 2;
        displayName = CSTRING(enemyAri_displayName);
        icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
        category = "Supports";
        function = QFUNC(initEnemyAri); 
        isGlobal = 1;
        
        class Attributes: AttributesBase {
            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(enemyAri_desription);
        };
    };

    class GVAR(friendly_ari): Module_F {
        scope = 2;
        displayName = CSTRING(friendlyAri_displayName);
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        category = "Supports";
        function = QFUNC(initFriendlyAri);
        isGlobal = 1;
        
        class Attributes: AttributesBase {
            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(friendlyAri_desription);
        };
    };
};