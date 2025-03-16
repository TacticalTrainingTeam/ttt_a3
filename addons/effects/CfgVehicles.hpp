class CfgVehicles {
    class ACE_Module;
    class GVAR(initStormModule): ACE_Module {
        scope = 2;
        displayName = "Sandstorm Module ACE";
        category = "TTT";
        function = QFUNC(stormInit);
        functionPriority = 10;
		isGlobal = 0;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 1;					// 1 if module is to be disabled once it is activated (i.e. repeated trigger activation will not work)
        author = "Andx";
    };

    class Module_F;
    class GVAR(initStormModule_Vanilla): Module_F {
		scope = 2;										// Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Sandstorm Modul Vanilla";			// Name displayed in the menu
		//icon = "\TAG_addonName\data\icon_Nuke_ca.paa";	// Map icon. Delete this entry to use the default icon.
		category = "TTT";

		function = QFUNC(stormInit);	// Name of function triggered once conditions are met
		functionPriority = 10;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 1;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
    };

};