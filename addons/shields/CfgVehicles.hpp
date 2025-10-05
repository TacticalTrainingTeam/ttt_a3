class CfgVehicles {

    class Logic;
    class Module_F : Logic {
        class AttributesBase {
            class Edit;
            class Checkbox;
        };

        class ModuleDescription {
        };
    };

    class ModuleEditTerrainObject_F: Module_F {};

    class GVAR(buildingShield): ModuleEditTerrainObject_F {
        displayName = "Building Shield";
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
                tooltip = "Globaler Variablenname für das Gebäude.";
                expression = "_this setVariable ['#name',_value]";
                defaultValue = "''";
            };
            class GVAR(shield): Checkbox {
                property = "#shield";
                displayName = "Building Shield";
                tooltip = "Verhindert ein Zerstören der Gebäudestruktur, ausgenommen Fenster.";
                expression = "_this setVariable ['#shield',_value]";
                defaultValue = "true";
            };
            class GVAR(windowpop): Checkbox {
                property = "#windowpop";
                displayName = "Fenster entglasen";
                tooltip = "Zerstört alle Fenster im Gebäude.";
                expression = "_this setVariable ['#windowpop',_value]";
                defaultValue = "false";
            };
        };

        class ModuleDescription : ModuleDescription {
            description = "Das markierte Gebäude erhält ein Building-Shield, welches ein Zerstören der Gebäudestruktur verhindert.";
            sync[] = { QGVAR(shield) };

            class GVAR(shield)  {
                description[] = {
                    "Gebäude selbst wird unzerstörbar.",
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

    class EGVAR(main,moduleBase);
    class GVAR(moduleAddVHS): EGVAR(main,moduleBase) {
        curatorCanAttach = 1;
        displayName = "Vehicleshield hinzufügen";
        function = QFUNC(module_addVHS);
        icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
    };
};
