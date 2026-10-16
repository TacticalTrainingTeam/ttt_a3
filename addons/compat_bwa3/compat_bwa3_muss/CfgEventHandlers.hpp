// Source: PzGrenBtl402 addons/BwMod_Puma (functions/fnc_incomingMissile.sqf) (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
class Extended_IncomingMissile_EventHandlers {
    class BWA3_Puma_base {
        class GVAR(incomingMissile) {
            incomingMissile = QUOTE(call EFUNC(compat_bwa3,incomingMissile));
        };
    };
};
