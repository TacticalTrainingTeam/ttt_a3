class CfgVehicles {

    class Logic;
    class Module_F : Logic {
        class AttributesBase {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };

        class ModuleDescription {
            class AnyBrain;
        };
    };

    class ModuleEditTerrainObject_F: Module_F {};

    class GVAR(buildingShield): ModuleEditTerrainObject_F {
        displayName = CSTRING(BuildingdisplayName);//"Building Shield";
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
                displayName = CSTRING(variabledisplayName);//"Varname";
                tooltip = CSTRING(variableDescription);//"Globaler Variablenname für das Gebäude.";
                expression = "_this setVariable ['#name',_value]";
                defaultValue = "''";
            };
            class GVAR(shield): Checkbox {
                property = "#shield";
                displayName = CSTRING(BuildingdisplayName);//"Building Shield";
                tooltip = CSTRING(Buildingdescription);//"Verhindert ein Zerstören der Gebäudestruktur, ausgenommen Fenster.";
                expression = "_this setVariable ['#shield',_value]";
                defaultValue = "true";
            };
            class GVAR(windowpop): Checkbox {
                property = "#windowpop";
                displayName = CSTRING(windowdisplayName);//"Fenster entglasen";
                tooltip = CSTRING(windowdescription);//"Zerstört alle Fenster im Gebäude.";
                expression = "_this setVariable ['#windowpop',_value]";
                defaultValue = "false";
            };
        };

        class ModuleDescription : ModuleDescription {
            description = CSTRING(Buildingdescription);//"Das markierte Gebäude erhält ein Building-Shield, welches ein Zerstören der Gebäudestruktur verhindert.";
            sync[] = { QGVAR(shield) };

            class GVAR(shield)  {
                description[] = {
                    CSTRING(Buildingdescription),
                    //"Gebäude selbst wird unzerstörbar.",
                    //"Fenster, etc. bleiben zerstörbar."
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
        displayName = CSTRING(VehicledisplayName);//"Vehicleshield hinzufügen";
        function = QFUNC(moduleAddVHS);
        icon = "\a3\Missions_F_Beta\data\img\iconMPTypeDefense_ca.paa";
    };
};
