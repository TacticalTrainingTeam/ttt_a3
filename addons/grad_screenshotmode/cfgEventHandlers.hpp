class Extended_PostInit_EventHandlers {
	GRAD_screenshotMode="[] call GRAD_screenshotMode_fnc_postInit;";
};

class Extended_PreInit_EventHandlers {
    class grad_screenshotmode {
        clientInit = QUOTE(call COMPILE_FILE(XEH_preClientInit));
    };
};
