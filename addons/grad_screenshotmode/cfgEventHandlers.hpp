class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };

    class GVAR(clientPreInit) {
        clientInit = QUOTE(call FUNC(clientPreInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };

    class GVAR(clientPostInit) {
        clientInit = QUOTE(call FUNC(clientPostInit));
    };
};