// Source: PzGrenBtl402 addons/BwMod_Weapons/CfgAmmo.hpp, addons/BwMod_P2A1/CfgAmmo.hpp and addons/Flare/CfgAmmo.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), merged and adapted
class CfgAmmo {
    // Puma MK30 HE does more damage
    class B_30mm_MP_Tracer_Red;
    class BWA3_B_30mm_HE: B_30mm_MP_Tracer_Red {
        explosive = 0.95; // Previously 0.6
        indirectHit = 12; // Previously 4
        indirectHitRange = 4; // Previously 2
    };

    // Better visible flares: bigger, longer lasting and triggered earlier
    class F_40mm_White;
    class GVAR(Flare_White): F_40mm_White {
        flareSize = 6;
        timeToLive = 20;
        triggerTime = 0.1;
    };

    class F_40mm_Green;
    class GVAR(Flare_Green): F_40mm_Green {
        flareSize = 6;
        timeToLive = 20;
        triggerTime = 0.1;
    };

    class F_40mm_Red;
    class GVAR(Flare_Red): F_40mm_Red {
        flareSize = 6;
        timeToLive = 20;
        triggerTime = 0.1;
    };

    class BWA3_Flare_Base;
    class BWA3_F_Singlestar_White: BWA3_Flare_Base {
        submunitionAmmo = QGVAR(Flare_White);
    };
    class BWA3_F_Singlestar_Green: BWA3_F_Singlestar_White {
        submunitionAmmo = QGVAR(Flare_Green);
    };
    class BWA3_F_Singlestar_Red: BWA3_F_Singlestar_White {
        submunitionAmmo = QGVAR(Flare_Red);
    };

    class BWA3_F_Multistar_White: BWA3_F_Singlestar_White {
        submunitionAmmo = QGVAR(Flare_White);
        submunitionConeAngle = 40; // Use GM value
    };
    class BWA3_F_Multistar_Green: BWA3_F_Multistar_White {
        submunitionAmmo = QGVAR(Flare_Green);
        submunitionConeAngle = 40; // Use GM value
    };
    class BWA3_F_Multistar_Red: BWA3_F_Multistar_White {
        submunitionAmmo = QGVAR(Flare_Red);
        submunitionConeAngle = 40; // Use GM value
    };
};
