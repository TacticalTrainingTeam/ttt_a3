class Extended_PreInit_EventHandlers {
    class SUBADDON {
        //Path adjusted for being in a SUBADDON
        init = QUOTE(call COMPILE_SCRIPT(usaf_duke_ewar_compat\XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class SUBADDON {
        init = QUOTE(call COMPILE_SCRIPT(usaf_duke_ewar_compat\XEH_postInit));
    };
};

class Extended_InitPost_EventHandlers {
    class LandVehicle {
        class SUBADDON {
            init = QUOTE(call FUNC(initVehicle));
        };
    };
};
