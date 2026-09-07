// Coin owner database.
// One class per player: GVAR(coin_<n>), numbered sequentially starting at 1, no gaps.
// `uid` is the player's Steam64 UID used to look up their coin, and `displayName` is what
// lets a player pick their own coin back out of a pile after a check.
//
// IMPORTANT: every classname added here must ALSO be added to weapons[] in CfgPatches
// (config.cpp). Without that, the class exists in the config but the engine won't recognize
// it as real content - addItem/addWeapon etc. fail with "not found" even though isClass
// and the config viewer show it just fine.
//
// class GVAR(coin_1): GVAR(coin_base) {
//     uid = "76561198000000000";
//     displayName = "Coin (Andx)";
// };
// -> add QGVAR(coin_1) to weapons[] in config.cpp
class GVAR(coin_1): GVAR(coin_base) {
    scope = 1;
    uid = "76561198014636795";
    displayName = "Coin (Andx)";
};

class GVAR(coin_2): GVAR(coin_base) {
    scope = 1;
    uid = "76561198043702802";
    displayName = "Coin (Vayra)";
};

class GVAR(coin_3): GVAR(coin_base) {
    scope = 1;
    uid = "76561199104385686";
    displayName = "Coin (Levi)";
};

class GVAR(coin_4): GVAR(coin_base) {
    scope = 1;
    uid = "76561198050584950";
    displayName = "Coin (Freddy Bacon)";
};

class GVAR(coin_5): GVAR(coin_base) {
    scope = 1;
    uid = "76561198011880074";
    displayName = "Coin ([TTT] Andy)";
};

class GVAR(coin_6): GVAR(coin_base) {
    scope = 1;
    uid = "76561198031643234";
    displayName = "Coin (Caphaldor)";
};

class GVAR(coin_7): GVAR(coin_base) {
    scope = 1;
    uid = "76561198040931191";
    displayName = "Coin (GTranstec)";
};

class GVAR(coin_8): GVAR(coin_base) {
    scope = 1;
    uid = "76561197999852928";
    displayName = "Coin (TheConen)";
};

class GVAR(coin_9): GVAR(coin_base) {
    scope = 1;
    uid = "76561198086765366";
    displayName = "Coin (Floli)";
};

class GVAR(coin_10): GVAR(coin_base) {
    scope = 1;
    uid = "76561197992606200";
    displayName = "Coin (Henrik)";
};

class GVAR(coin_11): GVAR(coin_base) {
    scope = 1;
    uid = "76561198148569398";
    displayName = "Coin (Menom)";
};

class GVAR(coin_12): GVAR(coin_base) {
    scope = 1;
    uid = "76561197995302668";
    displayName = "Coin (GSG9_abzocker)";
};

class GVAR(coin_13): GVAR(coin_base) {
    scope = 1;
    uid = "76561198033287076";
    displayName = "Coin (Bad Destiny)";
};

class GVAR(coin_14): GVAR(coin_base) {
    scope = 1;
    uid = "76561198146761280";
    displayName = "Coin (twoBIOS)";
};

class GVAR(coin_15): GVAR(coin_base) {
    scope = 1;
    uid = "76561199754262095";
    displayName = "Coin (Snickerz)";
};

class GVAR(coin_16): GVAR(coin_base) {
    scope = 1;
    uid = "76561198041341443";
    displayName = "Coin (Luki)";
};

class GVAR(coin_17): GVAR(coin_base) {
    scope = 1;
    uid = "76561197975940633";
    displayName = "Coin (SchmidtLR)";
};

class GVAR(coin_18): GVAR(coin_base) {
    scope = 1;
    uid = "76561198278935332";
    displayName = "Coin (Dennis Stein)";
};

class GVAR(coin_19): GVAR(coin_base) {
    scope = 1;
    uid = "76561198007779673";
    displayName = "Coin (McMonty)";
};

class GVAR(coin_20): GVAR(coin_base) {
    scope = 1;
    uid = "76561198078774591";
    displayName = "Coin (EinStein)";
};
