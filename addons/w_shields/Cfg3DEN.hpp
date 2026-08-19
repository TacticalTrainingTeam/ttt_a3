class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "Gruppe W - Framework";
                collapsed = 1;

                class Attributes {
                    class GVAR(addVehicleShield) {
                        displayName = CSTRING(vehicleShieldAttribute_displayName);
                        tooltip = CSTRING(vehicleShieldAttribute_tooltip);
                        property = QGVAR(addVehicleShield);
                        control = "Checkbox";

                        expression = QUOTE(
                            if (_value) then {
                                [ARR_2([ARR_4(_this,false,[ARR_2(true,true)],true)],FUNC(addVehicleShield))] call EFUNC(common,callGlobalFnc);
                            } else {
                                [ARR_2([_this],FUNC(removeVehicleShield))] call EFUNC(common,callGlobalFnc);
                            });
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectVehicle";
                        typeName = "BOOL";
                    };
                    class GVAR(addBuildingShield) {
                        displayName = CSTRING(buildingShieldAttribute_displayName);
                        tooltip = CSTRING(buildingShieldAttribute_tooltip);
                        property = QGVAR(addBuildingShield);
                        control = "Checkbox";

                        expression = QUOTE(
                            if (_value) then {
                                [_this] call FUNC(buildingShield);
                            } else {
                                [_this] call FUNC(removeBuildingShield);
                            });
                        defaultValue = 0;

                        unique = 0;
                        condition = "objectDestructable - objectHasInventoryCargo - objectBrain - objectAgent - logicModule";
                        typeName = "BOOL";
                    };
                    class GVAR(popWindows) {
                        displayName = CSTRING(popWindowsAttribute_displayName);
                        tooltip = CSTRING(popWindowsAttribute_tooltip);
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
