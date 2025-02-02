class CfgVehicles {
    class ACE_Explosives_Place_SLAM;
    class tsp_frameCharge_place: ACE_Explosives_Place_SLAM { XEH_ENABLED; }; // "Frame Charge" @Breach
    class tsp_popperCharge_place: ACE_Explosives_Place_SLAM { XEH_ENABLED; }; // "Lock Popper" @Breach
    class tsp_popperCharge_auto_place: tsp_popperCharge_place { XEH_ENABLED; }; // "Lock Popper (Auto-Fuse)" @Breach
    class tsp_stickCharge_place: ACE_Explosives_Place_SLAM { XEH_ENABLED; }; // "Stick Charge" @Breach
    class tsp_stickCharge_auto_place: tsp_stickCharge_place { XEH_ENABLED; }; // "Stick Charge (Auto-Fuse)" @Breach
};

