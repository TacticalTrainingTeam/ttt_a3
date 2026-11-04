class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Checkbox;
            class ModuleDescription;
        };

        class ModuleDescription;
    };

    // Eden-only: mid-mission designation is done through the ZEN context menu (drone_crafting_zen),
    // so the module is hidden from Zeus (scopeCurator = 0).
    class GVAR(moduleSupplyVehicle): Module_F {
        scope = 2;
        scopeCurator = 0;
        displayName = CSTRING(module_displayName);
        icon = ICON_CRAFT;
        category = "TTT";
        function = QFUNC(moduleSupplyVehicle);
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 1;
        is3DEN = 0;

        class Attributes: AttributesBase {
            class GVAR(fillStock): Checkbox {
                property = QGVAR(fillStock);
                displayName = CSTRING(module_fillStock_displayName);
                tooltip = CSTRING(module_fillStock_tooltip);
                typeName = "BOOL";
                defaultValue = "true";
            };

            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(module_description);
        };
    };
};
