class CfgVehicles {

    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Default;
            class Edit;                    // Default edit box (i.e. text input field)
            class Combo;                // Default combo box (i.e. drop-down menu)
            class Checkbox;                // Default checkbox (returned value is Boolean)
            class CheckboxNumber;        // Default checkbox (returned value is Number)
            class ModuleDescription;    // Module description
            class Units;                // Selection of units on which the module is applied
        };

        // Description base classes (for more information see below):
        class ModuleDescription {
            class AnyBrain;
        };
    };

    class GVAR(initStormModule_Vanilla): Module_F {
        scope = 2;                                                                           // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = "Sturm Modul Vanilla";                                             // Name displayed in the menu
        icon = "\a3\Modules_F_Curator\Data\iconSmoke_ca.paa";                                // Map icon. Delete this entry to use the default icon.
        category = "TTT";
        function = QFUNC(stormInitModule);                                                   // Name of function triggered once conditions are met
        functionPriority = 10;                                                               // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        isGlobal = 0;                                                                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 1;                                                              // 1 for module waiting until all synced triggers are activated
        isDisposable = 1;                                                                    // 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
        author = "EinStein";

        class Attributes: AttributesBase {
            class GVAR(duration): Edit {
                property = QGVAR(duration);                                                  // Unique property
                displayName = "Dauer";                                                       // Argument label
                tooltip = "Wie lange soll der Sturm andauern (in Sekunden; Minimum 60).";    // Tooltip description
                typeName = "NUMBER";                                                         // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "300";                                                        // Default attribute value. Warning: this is an expression, and its returned value will be used
            };

            class GVAR(effect): Checkbox {
                property = QGVAR(effect);
                displayName = "Windeffekt";
                tooltip = "Soll der Wind Gegenstände, wie Spieler und Fahrzeuge, bewegen können.";
                typeName = "BOOL";
                defaultValue = "false";
            };

            class GVAR(stormType): Combo {
                property = QGVAR(stormType);
                displayName = "Sturmtyp"; 
                tooltip = "Um welche Art Sturm soll es sich handeln";
                typeName = "NUMBER";
                defaultValue = "0";

                // Listbox items
                class Values {
                    class sand { name = "Sandsturm"; value = 0; };
                    class snow { name = "Schneesturm"; value = 1; };
                };
            };
            
            class GVAR(walk): Checkbox {
                property = QGVAR(walk);
                displayName = "Gehen erzwingen";
                tooltip = "Sind Infanteristen nur noch in der Lage zu gehen. (Empfohlen)";
                typeName = "BOOL";
                defaultValue = "true";
            };

            class GVAR(direction): Edit {
                property = QGVAR(direction);
                displayName = "Windrichtung";
                tooltip = "Aus wecher Richtung soll der Wind kommen. (0 - 360)";
                typeName = "NUMBER";
                defaultValue = "0";
            };

            class ModuleDescription: ModuleDescription { }; // Module description should be shown last
        };
        
        // Module description (must inherit from base class, otherwise pre-defined entities won't be available)
        class ModuleDescription: ModuleDescription{
            description = "Short module description";    // Short description, will be formatted as structured text
            sync[] = { };                // Array of synced entities (can contain base classes)

            class LocationArea_F {
                description[] = { // Multi-line descriptions are supported
                    "First line",
                    "Second line"
                };
                position = 0;    // Position is taken into effect
                direction = 0;    // Direction is taken into effect
                optional = 1;    // Synced entity is optional
                duplicate = 0;    // Multiple entities of this type can be synced
                synced[] = { "EmptyDetector" };    // Pre-defined entities like "AnyBrain" can be used (see the table below)
            };

            class BluforUnit {
                description = "Short description";
                displayName = "Any BLUFOR unit";    // Custom name
                icon = "iconMan";                    // Custom icon (can be file path or CfgVehicleIcons entry)
                side = 1;                            // Custom side (determines icon color)
            };
        };
    };

};