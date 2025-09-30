class CfgAmmo {
    class R_230mm_HE;
    class CUP_R_GRAD_HE: R_230mm_HE {
        submunitionAmmo = "";       //was "R_230mm_fly"
        simulation = "shotShell";   //was "shotSubmunitions"
        indirectHitRange = 5;       //was 20
    };
    class CUP_R_Techical_HE: CUP_R_GRAD_HE {
        indirectHitRange = 5;       //was 25
    };
    class CUP_R_S8_techical_H: CUP_R_GRAD_HE {
        hit = 150;                  //was 400
        indirectHit = 40;           //was 60
        indirectHitRange = 12;      //was 15
        suppressionRadiusHit = 30;  //was -1

        model = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";       //was ""\A3\Weapons_F\Ammo\Rocket_02_fly_F""
        proxyShape = "\CUP\Weapons\CUP_Weapons_Ammunition\Generic_70mm_Rocket\CUP_70mmRocket.p3d";  //was ""
        CraterEffects = "HERocketCrater";                                                           //was "BombCrater"
        explosioneffects = "HERocketExplosion";                                                     //was "BombExplosion"
        explosionSoundEffect = "DefaultExplosion";                                                  //was ""
    };
};
