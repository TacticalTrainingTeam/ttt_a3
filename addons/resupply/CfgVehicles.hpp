class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class ModuleDescription;
        };
        class ModuleDescription {};
    };

    // --- Macro to reduce repetition ---
    // Each class uses the same function; zeusModule derives the type from typeOf _logic.

    class GVAR(zeusAmmo): Module_F {
        scope = 2;
        displayName = CSTRING(type_ammo);
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_ammo); };
    };

    class GVAR(zeusGrenades): Module_F {
        scope = 2;
        displayName = CSTRING(type_grenades);
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_grenades); };
    };

    class GVAR(zeusAt): Module_F {
        scope = 2;
        displayName = CSTRING(type_at);
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_at); };
    };

    class GVAR(zeusExplosives): Module_F {
        scope = 2;
        displayName = CSTRING(type_explosives);
        //icon = "\A3\ui_f\data\map\markers\nato\b_eng.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_explosives); };
    };

    class GVAR(zeusSupport): Module_F {
        scope = 2;
        displayName = CSTRING(type_support);
        icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_support); };
    };

    class GVAR(zeusMedAlpha): Module_F {
        scope = 2;
        displayName = CSTRING(type_medical_alpha);
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_medical_alpha); };
    };

    class GVAR(zeusMedBravo): Module_F {
        scope = 2;
        displayName = CSTRING(type_medical_bravo);
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_medical_bravo); };
    };

    class GVAR(zeusMedCharlie): Module_F {
        scope = 2;
        displayName = CSTRING(type_medical_charlie);
        icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
        category = "Supports";
        function = QFUNC(zeusModule);
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        curatorCanAttach = 0;
        class Attributes: AttributesBase { class ModuleDescription: ModuleDescription {}; };
        class ModuleDescription: ModuleDescription { description = CSTRING(type_medical_charlie); };
    };
};
