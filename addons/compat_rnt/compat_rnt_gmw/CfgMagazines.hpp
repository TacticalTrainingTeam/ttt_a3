// Source: PzGrenBtl402 addons/Redd_GMW/CfgMagazines.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
class CfgMagazines {
    class Redd_gmw_Belt_32;
    class GVAR(gmw_Belt_32): Redd_gmw_Belt_32 {
        scope = 2;
        displayName = SUBCSTRING(displayName);
        descriptionShort = SUBCSTRING(descriptionShort);
        type = 256; // Must be 256 to show up in the arsenal
        model = "\rnt_gmw_static\rnt_munkasten_gmw_h.p3d";
        picture = "\redd_vehicles_main\data\rnt_munkasten_gmw_ca.paa";
        ACE_isBelt = 1; // Enables belt linking for this magazine
        mass = 237;
    };
};
