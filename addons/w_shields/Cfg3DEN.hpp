class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "Gruppe W - Framework";
                collapsed = 1;

                class Attributes {
                    class GVAR(addVehicleShield) {
                        displayName = CSTRING(VehicledisplayName);//"VehicleShield";
                        tooltip = CSTRING(Vehicledescription);//"Fügt dem Fahrzeug das VehicleShield aus dem Gruppe W Framework hinzu.";
                        property = QGVAR(addVehicleShield);
                        control = "Checkbox";

                        expression = QUOTE([ARR_2([ARR_4(_this,false,[ARR_2(true,true)],true)],FUNC(addVehicleShield))] call EFUNC(common,callGlobalFnc));
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectVehicle";
                        typeName = "BOOL";
                    };
                    class GVAR(addBuildingShield) {
                        displayName = CSTRING(BuildingdisplayName);//"BuildingShield";
                        tooltip = CSTRING(Buildingdescription);//"Fügt dem Objekt das BuildingShield aus dem Gruppe W Framework hinzu.";
                        property = QGVAR(addBuildingShield);
                        control = "Checkbox";

                        expression = QUOTE([_this] call FUNC(buildingShield););
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectDestructable - objectHasInventoryCargo - objectBrain - objectAgent - logicModule";
                        typeName = "BOOL";
                    };
                    class GVAR(popWindows) {
                        displayName = CSTRING(windowdisplayName)M//"Fenster entglasen";
                        tooltip = CSTRING(windowdescription);//"Zerstört alle Fenster im Gebäude.";
                        property = QGVAR(windowpop);
                        control = "Checkbox";

                        expression = QUOTE([_this] call FUNC(removeWindowGlass););
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
