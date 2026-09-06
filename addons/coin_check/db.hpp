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
