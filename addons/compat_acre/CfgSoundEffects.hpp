// Source: PzGrenBtl402 addons/ACRE/CfgSoundEffects.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
class CfgSoundEffects {
    class AttenuationsEffects {
        // Vehicles use TankAttenuation (attenuationEffectType and soundAttenuationTurret).
        // ACRE defines the class itself (acreAttenuation = 0.6, acreAttenuationTurnedOut = 0.3), this raises the values.
        class TankAttenuation {
            // Attenuation between players inside and outside of the vehicle (0 = none, 1 = max)
            acreAttenuation = 1;
            // Attenuation of players that are turned out
            acreAttenuationTurnedOut = 0.5;
        };
    };
};
