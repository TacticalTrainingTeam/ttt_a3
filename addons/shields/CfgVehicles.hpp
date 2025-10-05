class CfgVehicles {

    class Logic;
    class Module_F : Logic {
        class AttributesBase {
            class Edit;
            class Checkbox;
        };

        class ModuleDescription {};
    };

    class ModuleEditTerrainObject_F: Module_F {};

    class GVAR(buildingShield): ModuleEditTerrainObject_F {
        displayName = "Building Shield"; //ToDo Localize
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
                displayName = "Varname";
                tooltip = "Globaler Variablenname für das Gebäude."; //ToDo Localize
                expression = "_this setVariable ['#name',_value]";
                defaultValue = "''";
            };
            class GVAR(shield): Checkbox {
                property = "#shield";
                displayName = "Building Shield";
                tooltip = "Verhindert ein Zerstören der Gebäudestruktur, ausgenommen Fenster."; //ToDo Localize
                expression = "_this setVariable ['#shield',_value]";
                defaultValue = "true";
            };
            class GVAR(windowpop): Checkbox {
                property = "#windowpop";
                displayName = "Fenster entglasen";
                tooltip = "Zerstört alle Fenster im Gebäude."; //ToDo Localize
                expression = "_this setVariable ['#windowpop',_value]";
                defaultValue = "false";
            };
        };

        class ModuleDescription : ModuleDescription {
            description = "Das markierte Gebäude erhält ein Building-Shield, welches ein Zerstören der Gebäudestruktur verhindert."; //ToDo Localize
            sync[] = { QGVAR(shield) };

            class GVAR(shield)  {
                description[] = {
                    "Gebäude selbst wird unzerstörbar.", //ToDo Localize
                    "Fenster, etc. bleiben zerstörbar."
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
    //class CBA_Extended_EventHandlers_base;

    class GVAR(moduleBase): Module_F {
        author = "Gruppe W";
        category = "Framework";
        function = "";
        scope = 1;
        scopeCurator = 2;
        class EventHandlers {
            init = QUOTE(_this call FUNC(initModule));
            //class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };

    class GVAR(moduleAddVHS): GVAR(moduleBase) {
        curatorCanAttach = 1;
        displayName = "Vehicleshield hinzufügen"; //ToDo Localize
        function = QFUNC(module_addVHS);
        icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
    };
};
