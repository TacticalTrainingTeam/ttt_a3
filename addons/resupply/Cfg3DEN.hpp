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
                        // Only the engine's predefined tokens are valid here (objectBrain, objectControllable,
                        // objectAgent, objectVehicle, objectSimulated, objectHasInventoryCargo,
                        // objectDestructable - see a3\3den fn_3DENExportSQF.sqf); an unknown token like "all"
                        // or "object" still shows the checkbox, but the value is reset when the dialog closes.
                        // Deliberately more permissive than w_shields' condition (no objectDestructable/
                        // objectHasInventoryCargo requirement) - a depot can legitimately be a supply truck
                        // or an ammo crate, and non-destructible props should still qualify, matching the
                        // ZEN context menu's own near-unrestricted condition (see fnc_zenRegisterContextMenu.sqf,
                        // which only excludes "Man"). objectSimulated excludes simple objects.
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
