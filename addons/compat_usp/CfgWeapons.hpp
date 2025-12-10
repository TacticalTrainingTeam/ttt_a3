class CfgWeapons {

    #include "configs/Vests.hpp"
    #include "configs/Helmets.hpp"

    class NVGoggles;
    class USP_NSEAS: NVGoggles {
        //Wenn per ACE Action entfernt wird, ist es weg statt im Inventar -> verstecken
        scope = 0;
    };
};
