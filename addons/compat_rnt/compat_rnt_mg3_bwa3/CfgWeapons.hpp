// Source: PzGrenBtl402 addons/BwMod_Redd_MG3/CfgWeapons.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted: the magazine well is already set by compat_rnt_mg3
class CfgWeapons {
    class Redd_MG3;
    class Redd_MG3_Static: Redd_MG3 {
        magazines[] += { // ACE CSW needs all compatible magazines in this array for reloading
            "BWA3_120Rnd_762x51_soft",
            "BWA3_120Rnd_762x51_Tracer_soft",
            "BWA3_120Rnd_762x51",
            "BWA3_120Rnd_762x51_Tracer"
        };
    };
};
