class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "Gruppe W - Framework";
                collapsed = 1;

                class Attributes {
                    class GVAR(addBuildingShield) {
                        displayName = "BuildingShield";
                        tooltip = "Fügt dem Objekt das BuildingShield aus dem Gruppe W Framework hinzu.";
                        property = QGVAR(addBuildingShield);
                        control = "Checkbox";

                        expression = QUOTE([_this] call FUNC(buildingShield););
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectDestructable - objectHasInventoryCargo - objectBrain - objectAgent - logicModule";
                        typeName = "BOOL";
                    };
                    class GVAR(popWindows) {
                        displayName = "Fenster entglasen";
                        tooltip = "Zerstört alle Fenster im Gebäude.";
                        property = QGVAR(windowpop);
                        control = "Checkbox";

                        expression = QUOTE([_this] call FUNC(removeWindowGlasses););
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
