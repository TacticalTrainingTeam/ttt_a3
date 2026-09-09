class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVAR(attributes) {
                displayName = "TTT - Resupply";
                collapsed = 1;

                class Attributes {
                    class GVAR(container) {
                        displayName = CSTRING(containerAttribute_displayName);
                        tooltip = CSTRING(containerAttribute_tooltip);
                        property = QGVAR(container);
                        control = "Checkbox";

                        expression = QUOTE([ARR_2(_this,_value)] call FUNC(setContainer););
                        defaultValue = 0;

                        unique = 0;
                        // Deliberately more permissive than w_shields' condition (no objectDestructable/
                        // objectHasInventoryCargo exclusion) - a depot can legitimately be a supply truck
                        // or an ammo crate, both of which carry cargo, and non-destructible props should
                        // still qualify, matching the ZEN context menu's own near-unrestricted condition
                        // (see fnc_zenRegisterContextMenu.sqf, which only excludes "Man").
                        condition = "all - objectBrain - objectAgent - logicModule";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
