class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "Gruppe W - Framework";
                collapsed = 1;

                class Attributes {
                    class GVAR(addVehicleShield) {
                        displayName = "VehicleShield"; //ToDo Localize
                        tooltip = "Fügt dem Fahrzeug das VehicleShield aus dem Gruppe W Framework hinzu."; //ToDo Localize
                        property = QGVAR(addVehicleShield);
                        control = "Checkbox";

                        expression = QUOTE([ARR_2([ARR_4(_this,false,[ARR_2(true,true)],true)],FUNC(addVehicleShield))] call EFUNC(common,callGlobalFnc));
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectVehicle";
                        typeName = "BOOL";
                    };
                    class GVAR(addBuildingShield) {
                        displayName = "BuildingShield"; //ToDo Localize
                        tooltip = "Fügt dem Objekt das BuildingShield aus dem Gruppe W Framework hinzu."; //ToDo Localize
                        property = QGVAR(addBuildingShield);
                        control = "Checkbox";

                        expression = QUOTE([_this] call FUNCMAIN(buildingShield););
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectDestructable - objectHasInventoryCargo - objectBrain - objectAgent - logicModule";
                        typeName = "BOOL";
                    };
                    class GVAR(popWindows) {
                        displayName = "Fenster entglasen"; //ToDo Localize
                        tooltip = "Zerstört alle Fenster im Gebäude."; //ToDo Localize
                        property = QGVAR(windowpop);
                        control = "Checkbox";

                        expression = QUOTE([_this] call FUNCMAIN(removeWindowGlass););
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectDestructable - objectHasInventoryCargo - objectBrain - objectAgent - logicModule";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
