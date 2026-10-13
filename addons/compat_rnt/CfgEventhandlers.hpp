class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
};

class Extended_InitPost_EventHandlers {
    class Redd_Tank_Wiesel_1A4_MK20_base {
        class GVAR(camonet) {
            serverInit = QUOTE([ARR_2(FUNC(setCamonet),_this)] call CBA_fnc_execNextFrame);
        };
    };

    class Redd_Tank_Fuchs_1A4_Base {
        class GVAR(map) {
            init = QUOTE(call EFUNC(common,initMapActions));
        };
    };

    class Redd_Tank_LKW_leicht_gl_Wolf_Base {
        class GVAR(map) {
            init = QUOTE(call EFUNC(common,initMapActions));
        };
    };

    class Redd_Marder_1A5_base {
        class GVAR(ramp) {
            init = QUOTE(call FUNC(initRampActions));
        };
        class GVAR(ladder) {
            init = QUOTE(call FUNC(initLadderActions));
        };
        class GVAR(map) {
            init = QUOTE(call EFUNC(common,initMapActions));
        };
        class GVAR(camonet) {
            serverInit = QUOTE([ARR_2(FUNC(setCamonet),_this)] call CBA_fnc_execNextFrame);
        };
    };

    class Redd_Tank_Wiesel_1A2_TOW_base {
        class GVAR(camonet) {
            serverInit = QUOTE([ARR_2(FUNC(setCamonet),_this)] call CBA_fnc_execNextFrame);
        };
        class GVAR(tow) {
            init = QUOTE(call FUNC(addTOWLoadAction));
        };
    };
};
