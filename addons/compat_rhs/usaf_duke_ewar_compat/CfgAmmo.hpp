class CfgAmmo {
    class SmokeLauncherAmmo;
    // Fake "ammo" RHS uses to toggle the DUKE. Our handler sits next to the RHS one and only reads the result
    class rhsusf_ammo_duke: SmokeLauncherAmmo {
        class EventHandlers {
            class GVAR(dukeToggled) {
                fired = QUOTE(call FUNC(onFired));
            };
        };
    };
};
