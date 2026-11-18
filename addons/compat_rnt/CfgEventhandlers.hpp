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

class Extended_FiredBIS_EventHandlers {
    // Separate handler, Redd's own fired event handler of the Marder also drops the empty Milan tube
    class Redd_Marder_1A5_base {
        class GVAR(smokeLauncher) {
            firedBIS = QUOTE(call FUNC(handleMarderFired));
        };
    };

    // Hide the tube on the dismounted Milan after a shot, Redd's fired handler still drops the empty tube
    class Redd_Milan_Static_Base {
        class GVAR(milan) {
            firedBIS = QUOTE(if (local (_this select 0)) then {(_this select 0) animateSource [ARR_3('ReloadMagazine',1,true)]});
        };
    };
};

class Extended_InitPost_EventHandlers {
    class Redd_Tank_Wiesel_1A4_MK20_base {
        class GVAR(camonet) {
            serverInit = QUOTE([ARR_2(FUNC(setCamonet),_this)] call CBA_fnc_execNextFrame);
        };
    };

    class Redd_Marder_1A5_base {
        class GVAR(ramp) {
            init = QUOTE(call FUNC(initRampActions));
        };
        class GVAR(milan) {
            init = QUOTE(call FUNC(initMilanActions));
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

    class Redd_Milan_Static_Base {
        class GVAR(milan) {
            clientInit = QUOTE(call FUNC(addStaticMilanActions));
        };
    };
};
