class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "Gruppe W - Framework";
                collapsed = 1;

                class Attributes {
                    class GVAR(addVehicleShield) {
                        displayName = CSTRING(displayName);//"Vehicle Shield";
                        tooltip = CSTRING(description);//"Fügt dem Fahrzeug das VehicleShield aus dem Gruppe W Framework hinzu.";
                        property = QGVAR(addVehicleShield);
                        control = "Checkbox";

                        expression = QUOTE([ARR_2([ARR_6(_this,true,true,[ARR_2(true,true)],true,false)],FUNC(addVehicleShield))] call EFUNC(common,callGlobalFnc));
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectVehicle";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
