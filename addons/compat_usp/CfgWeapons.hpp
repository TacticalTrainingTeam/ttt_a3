class CfgWeapons {

    #include "configs/Vests.hpp"
    #include "configs/Helmets.hpp"

    class NVGoggles;
    class USP_NSEAS: NVGoggles {
        //Wenn per ACE Action entfernt wird, ist es weg statt im Inventar -> verstecken
        scope = 0;
    };

    class USP_ItemCore;
    class USP_BOLTCUTTER: USP_ItemCore {
        ACE_isTool = 1;
        ACE_isWirecutter = 1;
    };
};
