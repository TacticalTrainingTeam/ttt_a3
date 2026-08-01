class CfgVehicles {
    class All {
        class ACE_MainActions {
            class GVAR(action) {
                displayName = CSTRING(action);
                condition = QUOTE([_this] call FUNC(canPlace));
                exceptions[] = {};
                statement = QUOTE([_this] call FUNC(place));
                icon = "z\ace\addons\explosives\ui\explosives_menu_ca.paa",;
            };
        };
    };
};
