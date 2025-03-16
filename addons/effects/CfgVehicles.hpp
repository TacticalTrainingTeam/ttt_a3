class CfgVehicles
{

    class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;          
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Slider;
		};

		// Description base classes (for more information see below):
		class ModuleDescription
		{
			class AnyBrain;
		};
	};

    class ACE_Module;
    class GVAR(initStormModule): ACE_Module
    {
        scope = 2;
        displayName = "Sandstorm Module ACE";
        category = "TTT";
        function = QFUNC(stormInit);
        functionPriority = 10;
        isGlobal = 0;                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 1;                // 1 for module waiting until all synced triggers are activated
        isDisposable = 1;                    // 1 if module is to be disabled once it is activated (i.e. repeated trigger activation will not work)
        author = "Andx";
    };

    class GVAR(initStormModule_Vanilla): Module_F
    {
        scope = 2;                                        // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = "Sandstorm Modul Vanilla";            // Name displayed in the menu
        //icon = "\TAG_addonName\data\icon_Nuke_ca.paa";    // Map icon. Delete this entry to use the default icon.
        category = "TTT";

        function = QFUNC(stormInit);    // Name of function triggered once conditions are met
        functionPriority = 10;                // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        isGlobal = 0;                        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 1;                // 1 for module waiting until all synced triggers are activated
        isDisposable = 1;                    // 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)

        class Attributes: AttributesBase
		{
            class GVAR(duration): Slider
            {
				property = "#duration";                                                     // Unique property
				displayName = "Dauer";			                                    // Argument label
				tooltip = "Wie lange soll der Sturm andauern (in Sekunden)";	                // Tooltip description
				typeName = "NUMBER";					                                // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = "300";							                            // Default attribute value. Warning: this is an expression, and its returned value will be used
            };

            class GVAR(test): Default
            {
				property = "#test";                                                     // Unique property
				displayName = "test";			                                    // Argument label
				tooltip = "test";	                // Tooltip description
				typeName = "NUMBER";					                                // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = "300";							                            // Default attribute value. Warning: this is an expression, and its returned value will be used
            };
            	
            class SubCategory
            {
                property = "#diff";
                control = "unsichtbar";
                displayName = "sichtbar"; // Visible text. Despite the attribute code saying the property should be title, displayName is correct
            };

			// Module-specific arguments: FUNKTIONIERT!!!
			class GVAR(type): Combo
			{
				property = "#type";                                                     // Unique property
				displayName = "Sturmtyp";			                                    // Argument label
				tooltip = "Um welche Art Sturm soll es sich handeln";	                // Tooltip description
				typeName = "NUMBER";					                                // Value type, can be "NUMBER", "STRING" or "BOOL"
				defaultValue = "0";							                            // Default attribute value. Warning: this is an expression, and its returned value will be used

				// Listbox items
				class Values
				{
					class sand	{ name = "Sandsturm";	value = 0; };
					class snow	{ name = "Schneesturm"; value = 1; };
				};
			};

			class ModuleDescription : ModuleDescription { }; // Module description should be shown last
		};
        
        // Module description (must inherit from base class, otherwise pre-defined entities won't be available)
		class ModuleDescription : ModuleDescription
		{
			description = "Short module description";	// Short description, will be formatted as structured text
			sync[] = { };				// Array of synced entities (can contain base classes)

			class LocationArea_F
			{
				description[] = { // Multi-line descriptions are supported
					"First line",
					"Second line"
				};
				position = 0;	// Position is taken into effect
				direction = 0;	// Direction is taken into effect
				optional = 1;	// Synced entity is optional
				duplicate = 0;	// Multiple entities of this type can be synced
				synced[] = { "EmptyDetector" };	// Pre-defined entities like "AnyBrain" can be used (see the table below)
			};

			class BluforUnit
			{
				description = "Short description";
				displayName = "Any BLUFOR unit";	// Custom name
				icon = "iconMan";					// Custom icon (can be file path or CfgVehicleIcons entry)
				side = 1;							// Custom side (determines icon color)
			};
		};
    };

};