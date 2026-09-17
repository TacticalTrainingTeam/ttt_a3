class CfgVehicles {

    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
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
            class GVAR(door1): Combo {
                property = "#door1";
                displayName = "Door 1";
                tooltip = CSTRING(buildingShieldModule_doorState_tooltip);
                expression = "_this setVariable ['#door1',_value]";
                defaultValue = "0";
                class Values {
                    class Closed { name = CSTRING(buildingShieldModule_doorState_closed); value = 0; };
                    class Locked { name = CSTRING(buildingShieldModule_doorState_locked); value = 1; };
                    class Open   { name = CSTRING(buildingShieldModule_doorState_open);   value = 2; };
                };
            };
            class GVAR(door2): GVAR(door1) {
                property = "#door2";
                displayName = "Door 2";
                expression = "_this setVariable ['#door2',_value]";
            };
            class GVAR(door3): GVAR(door1) {
                property = "#door3";
                displayName = "Door 3";
                expression = "_this setVariable ['#door3',_value]";
            };
            class GVAR(door4): GVAR(door1) {
                property = "#door4";
                displayName = "Door 4";
                expression = "_this setVariable ['#door4',_value]";
            };
            class GVAR(door5): GVAR(door1) {
                property = "#door5";
                displayName = "Door 5";
                expression = "_this setVariable ['#door5',_value]";
            };
            class GVAR(door6): GVAR(door1) {
                property = "#door6";
                displayName = "Door 6";
                expression = "_this setVariable ['#door6',_value]";
            };
            class GVAR(door7): GVAR(door1) {
                property = "#door7";
                displayName = "Door 7";
                expression = "_this setVariable ['#door7',_value]";
            };
            class GVAR(door8): GVAR(door1) {
                property = "#door8";
                displayName = "Door 8";
                expression = "_this setVariable ['#door8',_value]";
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
