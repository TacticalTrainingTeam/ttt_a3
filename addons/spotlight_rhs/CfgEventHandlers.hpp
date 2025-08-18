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
