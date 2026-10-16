// Source: PzGrenBtl402 addons/BwMod_Puma/CfgSounds.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
class CfgSounds {
    // Mute the quiet warning of BWmod, ours is louder
    class BWA3_IncomingMissileWarning {
        sound[] = {"\bwa3_common\sounds\warning_incomingMissile.wss", 0, 1};
        titles[] = {};
    };

    class GVAR(IncomingMissileWarning) {
        sound[] = {"\bwa3_common\sounds\warning_incomingMissile.wss", 5, 1};
        titles[] = {};
    };
};
