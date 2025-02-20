class CfgVehicles {
    class Bag_Base;
    class B_RadioBag_01_base_F: Bag_Base { };
    
    class B_RadioBag_01_black_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_digi_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_eaf_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_ghex_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_hex_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_oucamo_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_tropic_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };
    class B_RadioBag_01_wdl_F: B_RadioBag_01_base_F {
        maximumLoad = 320;
        mass = 50;
    };

    // Make vanilla Chinook and EH302 (IDAP/FIA transport heli) float on water. 
    // Matches CUP Chinook/CH-53e and other heavy lift helos.  
    // Direction on BIS method from Steam Workshop user "crub"
    class Helicopter_Base_H;
    class Heli_Transport_03_base_F: Helicopter_Base_H {waterLeakiness=0.1;};
    class Heli_Transport_02_base_F: Helicopter_Base_H {waterLeakiness=0.1;};

};