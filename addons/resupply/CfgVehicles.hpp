class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class ModuleDescription;
        };

        class ModuleDescription {
        };
    };

    // scope = 0 at the base + is3DEN = 0 keeps these out of the classic 2D
    // editor and 3DEN entirely. Each leaf overrides scope back to 2, which is
    // required (together with scopeCurator = 2) for Zeus to list it in the
    // curator interface - these modules are Zeus-only by design.
    class GVAR(module_base): Module_F {
        scope = 0;
        scopeCurator = 2;
        category = "Supports";
        function = QFUNC(zeusPlaceCrate);
        isGlobal = 1;
        isTriggerActivated = 0;
        is3DEN = 0;
        icon = QUOTE(a3\ui_f\data\map\vehicleicons\iconcrateammo_ca.paa);

        class Attributes: AttributesBase {
            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(zeusModule_description);
        };
    };

    class GVAR(module_ammo): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_ammo);
        GVAR(crateType) = "ammo";
    };

    class GVAR(module_grenades): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_grenades);
        GVAR(crateType) = "grenades";
    };

    class GVAR(module_at): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_at);
        GVAR(crateType) = "at";
    };

    class GVAR(module_explosives): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_explosives);
        GVAR(crateType) = "explosives";
    };

    class GVAR(module_support): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_support);
        GVAR(crateType) = "support";
    };

    class GVAR(module_medical_alpha): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_medical_alpha);
        GVAR(crateType) = "medical_alpha";
    };

    class GVAR(module_medical_bravo): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_medical_bravo);
        GVAR(crateType) = "medical_bravo";
    };

    class GVAR(module_medical_charlie): GVAR(module_base) {
        scope = 2;
        displayName = CSTRING(type_medical_charlie);
        GVAR(crateType) = "medical_charlie";
    };
};
