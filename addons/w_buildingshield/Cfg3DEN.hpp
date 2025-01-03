class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "Gruppe W - Framework";
                collapsed = 1;

                class Attributes {
                    class GVAR(addBuildingShield) {
                        displayName = CSTRING(displayName);//"Building Shield";
                        tooltip = CSTRING(descsription);//;
                        property = QGVAR(addBuildingShield);
                        control = "Checkbox";

                        expression = QUOTE([_this] call FUNC(buildingShield););
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectDestructable - objectHasInventoryCargo - objectBrain - objectAgent - logicModule";
                        typeName = "BOOL";
                    };
                    class GVAR(popWindows) {
                        displayName = CSTRING(window_displayName);//"Fenster entglasen";
                        tooltip = CSTRING(window_description);//"Zerstört alle Fenster im Gebäude.";
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
