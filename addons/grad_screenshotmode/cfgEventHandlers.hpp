/* class Extended_PostInit_EventHandlers {
	GRAD_screenshotMode="[] call GRAD_screenshotMode_fnc_postInit;";
};

class Extended_PreInit_EventHandlers {
    class grad_screenshotmode {
        clientInit = QUOTE(call COMPILE_FILE(XEH_preClientInit));
    };
}; */


class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };

    class GVAR(screenshotmode) {
        clientInit = QUOTE(call FUNC(clientInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
};