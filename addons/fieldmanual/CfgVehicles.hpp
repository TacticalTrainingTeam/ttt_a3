class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(openHandbook) {
                    displayName = CSTRING(handbook_open);
                    condition = QUOTE([ARR_2(_player,QQGVAR(handbook))] call ace_common_fnc_hasItem);
                    statement = QUOTE(createDialog QQGVAR(handbookDisplay));
                    icon = QPATHTOF(data\handbook\handbook_ca.paa);
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                };
            };
        };
    };
};
