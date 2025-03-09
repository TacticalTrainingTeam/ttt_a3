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

class RscDisplayPassword {
    ADDON = QUOTE(with uiNamespace do {\
        [_this select 0] call COMPILE_SCRIPT(XEH_displayPassword);\
    });
};

class RscMsgBox {
    ADDON = QUOTE(with uiNamespace do {\
        [_this select 0] call COMPILE_SCRIPT(XEH_msgBox);\
    });
};