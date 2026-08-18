class CfgVehicles {

    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Checkbox;
        };

        class ModuleDescription {};
    };

    class ModuleEditTerrainObject_F: Module_F {};

    class GVAR(buildingShield): ModuleEditTerrainObject_F {
        displayName = CSTRING(buildingShieldModule_displayName);
        icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
        portrait = "\a3\Missions_F_Beta\data\img\portraitMPTypeDefense_ca.paa";
        category = "Framework";
        function = QFUNC(moduleBuildingShield);
        functionPriority = 50;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 1;
        is3DEN = 1;

        class Attributes: AttributesBase {
            class GVAR(varname): Edit {
                property = "#name";
                displayName = CSTRING(buildingShieldModule_varname_displayName);
                tooltip = CSTRING(buildingShieldModule_varname_tooltip);
                expression = "_this setVariable ['#name',_value]";
                defaultValue = "''";
            };
            class GVAR(shield): Checkbox {
                property = "#shield";
                displayName = CSTRING(buildingShieldModule_shield_displayName);
                tooltip = CSTRING(buildingShieldModule_shield_tooltip);
                expression = "_this setVariable ['#shield',_value]";
                defaultValue = "true";
            };
            class GVAR(windowpop): Checkbox {
                property = "#windowpop";
                displayName = CSTRING(buildingShieldModule_windowpop_displayName);
                tooltip = CSTRING(buildingShieldModule_windowpop_tooltip);
                expression = "_this setVariable ['#windowpop',_value]";
                defaultValue = "false";
            };
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(buildingShieldModule_description);
            sync[] = { QGVAR(shield) };

            class GVAR(shield)  {
                description[] = {
                    CSTRING(buildingShieldModule_sync_description1),
                    CSTRING(buildingShieldModule_sync_description2)
                };
                position = 1;
                direction = 0;
                optional = 0;
                duplicate = 0;
                synced[] = {};
            };
        };
    };

    //Vehicleshield
    class GVAR(moduleBase): Module_F {
        author = "Gruppe W";
        category = "Framework";
        function = "";
        scope = 1;
        scopeCurator = 2;
        class EventHandlers {
            init = QUOTE(call FUNC(initModule));
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class GVAR(moduleAddVHS): GVAR(moduleBase) {
        curatorCanAttach = 1;
        displayName = CSTRING(vehicleShieldAction_displayName);
        function = QFUNC(module_addVHS);
        icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
    };
};
