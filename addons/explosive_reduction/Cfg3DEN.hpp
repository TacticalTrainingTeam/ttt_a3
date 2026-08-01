class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "TTT - Explosive Reduction";
                collapsed = 1;

                class Attributes {
                    class GVAR(canDestroy) {
                        displayName = "Destructible by Explosive Charge";
                        tooltip = "Allows players carrying the required explosive charge to destroy this object via the ACE interaction menu.";
                        property = QGVAR(canDestroy);
                        control = "Checkbox";

                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(canDestroy),_value,true)]);
                        defaultValue = "false";

                        unique = 0;
                        condition = "objectDestructable";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
