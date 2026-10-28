class Extended_PreInit_EventHandlers {
    class SUBADDON {
        //Path adjusted for being in a SUBADDON
        init = QUOTE(call COMPILE_SCRIPT(compat_bwa3_ewar\XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class SUBADDON {
        init = QUOTE(call COMPILE_SCRIPT(compat_bwa3_ewar\XEH_postInit));
    };
};

class Extended_InitPost_EventHandlers {
    class BWA3_Dingo2_base {
        class SUBADDON {
            init = QUOTE(call FUNC(initVehicle));
        };
    };
};
